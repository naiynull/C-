#include <iostream>

using namespace std;

int main()
{
   int v[9];
   v[0]=1;
   v[1]=2;
   for(int i=2; i<9;i++){
   v[i]=v[i-1]*v[i-2];
   }

 for(int i=2;i<9;i++){
     cout<<v[i]<<" ";
 }
 return 0;

    }
