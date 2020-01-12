#include <iostream>
using namespace std;

   int main () {
   int* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new int;   // Request memory for the variable
  *pvalue = 23;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;
   cout<<"Address where pointer is pointing before deletion:"<<pvalue<<endl;
   delete pvalue;         // free up the memory.
   cout << "Address where pointer is pointing after deletion:"<< pvalue << endl;//Dangling pointer
   pvalue=NULL;//pvalue is no longer a dangling pointer

   return 0;
}
