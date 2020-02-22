#include "route_model.h"
#include <iostream>

RouteModel::RouteModel(const std::vector<std::byte> &xml) : Model(xml) {
    int counter = 0;
    for ( auto node : this->Nodes() ) { // this->Nodes() calls the func in Model class
                                        // and return a Model::Node
        m_Nodes.push_back( Node(counter, this, node) );
        counter++;
    }

    CreateNodeToRoadHashmap();
}

float RouteModel::Node::distance(RouteModel::Node anotherNode) const {
    return std::sqrt( std::pow(this->x - anotherNode.x, 2) + std::pow(this->y - anotherNode.y, 2) );
}

void RouteModel::CreateNodeToRoadHashmap() {
    for ( const Model::Road& road : Roads() ) {
        if (road.type != Model::Road::Type::Footway) {
            for ( auto node_idx : Ways()[road.way].nodes) {
                if ( node_to_road.find(node_idx) == node_to_road.end() ) {
                    node_to_road[node_idx] = std::vector<const Model::Road*>{}; // put into an empty vector
                }
                node_to_road[node_idx].push_back(&road);
            }
        }
    }
}

RouteModel::Node* RouteModel::Node::FindNeighbor(std::vector<int> node_indices) {
    Node* closest_node = nullptr;

    
    for (int node_index : node_indices) {

        // retrive the Node obj with the node_index value
        RouteModel::Node& evalNode = parent_model->SNodes()[node_index]; // TODO: make sure if it is OK to use reference here.
        
        if ( !evalNode.visited && this->distance(evalNode) > 0 ) { // make sure it is not visited, and not the current node itself
            if (!closest_node) closest_node = &evalNode;
            else {
                if ( this->distance(*closest_node) > this->distance(evalNode) ) closest_node = &evalNode;
            }
        }

    }

    return closest_node;
}

void RouteModel::Node::FindNeighbors() {
    for ( const Model::Road*& road : parent_model->node_to_road[this->index] ) {
        RouteModel::Node* node_ptr = FindNeighbor( parent_model->Ways()[road->way].nodes ); // TODO: figure out what is called in the FindNeighbor()
        if (node_ptr) this->neighbors.push_back(node_ptr);
    }
}

RouteModel::Node& RouteModel::FindClosestNode(float x, float y) {
    RouteModel::Node tempNode;
    tempNode.x = x;
    tempNode.y = y;
    float minDist = std::numeric_limits<float>::max(); // init min dist with max float value
    float curDist = 0.0;
    int closestIdx = 0;

    for ( const Model::Road& road : Roads() ) {
        if (road.type != Model::Road::Type::Footway) {
            for (int node_idx : Ways()[road.way].nodes) {
                curDist = SNodes()[node_idx].distance(tempNode);
                if ( minDist > curDist ) {
                    minDist = curDist;
                    closestIdx = node_idx;
                }
            }
        }
    }

    return SNodes()[closestIdx];
}