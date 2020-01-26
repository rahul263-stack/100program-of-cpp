#include "iostream.h"

using namespace std;

//Workaround for compiler issue.
int stoi( const std::string& str, std::size_t* pos = 0, int base = 10 )
    {
        const char* begin = str.c_str() ;
        char* end = nullptr ;
        long value = std::strtol( begin, &end, base ) ;

        if( errno == ERANGE || value > std::numeric_limits<int>::max() )
            throw std::out_of_range( "stoi: out ofrange" ) ;

        if( end == str.c_str() )
            throw std::invalid_argument( "stoi: invalid argument" ) ;

        if(pos) *pos = end - begin ;

        return value ;
    }


int main()
{
    struct Numbers
    {
        string spelled;
        int digit;
    };
    const Numbers nums[]
    {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
        {"ten", 10}
    };

    string response = " ";

    cout << "Type a number either spelled out or as a digit.\n";

    cin >> response;
    if(response.size() == 1)
    {
        cout << nums[stoi(response)].spelled;
    }
    else if(response.size() > 1)
    {
        for(int i=0; i<=10; ++i)
        {
            if(response == nums[i].spelled)
            {
                cout << nums[i].digit << endl;
                break;
            }
            else;
        }
    }
}