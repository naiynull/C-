#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,media=0;
    cout<<"informe a nota do aluno 01: "<<endl;
    cin>>a;
    cout<<"informe a nota do aluno 02:"<<endl;
    cin>>b;
    cout<<"informe a nota do aluno 03: "<<endl;
    cin>>c;
    cout<<"informe a nota do aluno 04:"<<endl;
    cin>>d;

    if(a<b && a<c && a<d){
    media=(b+c+d)/3;
}
     if(b<a && b<c && b<d){
    media=(a+c+d)/3;
}

 if(c<b && c<a && c<d){
 }

 if(d<b && d<c && d<a){
    media=(b+c+a)/3;
}
 cout<<"media:"<<media<<endl;
}
