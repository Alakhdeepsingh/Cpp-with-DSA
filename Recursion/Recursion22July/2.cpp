#include <iostream>
 
using namespace std;
 
void recurse ( int count ) // Each call gets its own count
{
  cout<< count <<"\n";
  // It is not necessary to increment count since each function's
  //  variables are separate (so each count will be initialized one greater)
  recurse ( count + 1 );
}
 
int main()
{
  recurse ( 1 ); //First function call, so it starts at one        
}