#include <iostream>

using namespace std;


int main()
{
    int base, expo, res=1, aux=1 ;

    cout << "Base: ";
    cin >> base;

    cout << "Expoente: ";
    cin >> expo;

    while(aux<=expo){
         res *= base;
	aux++;
    }
    if(base<0)
res=res*-1;
cout <<base<<"^"<<expo<<" = "<<res<<endl;

    return 0;
}
