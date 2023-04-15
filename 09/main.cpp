#include <iostream>

using namespace std;

int main( )
{
    int  a,n, primo=2;
    bool resultado=true;

    cout<<"informe o numero: "<<endl;
    cin>>n;

    while(resultado && primo < n){

    if(n%primo==0)
    resultado=false;
    else
    a+=1;
}
if(resultado)
  cout<<"esse numero é primo: "<<endl;
  else
  cout<<"esse numero não é primo: "<<endl;
