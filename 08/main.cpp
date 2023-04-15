#include <iostream>

using namespace std;

int parimpar(int i, bool ip){
 ip=false;

   if(i%2==0){
   ip=true;
   }
   else if(i%2!=0){
   ip=false;
   }

   return false;
}

int main()
{
   int i;
   bool ip;
   cout<<"informe um numero: "<<endl;
   cin>>i;

  parimpar(i,ip);
  cout<<ip<<endl;
}
