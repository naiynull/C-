#include <iostream>

using namespace std;

int main()
{
   int v[15], maior, menor;
   double media=0;
  for( int i=0;i<15;i++){
      cin>>v[i];
  }
   for( int i=0;i<15;i++){
      cout<<v[i]<<" "<<endl;
   }
    maior=v[0];
    for( int i=0;i<15;i++){
        if(v[i]>maior){
            maior=v[i];
        }
     }
        menor=v[0];
    for( int i=0;i<15;i++){
        if(v[i]<menor){
            menor=v[i];
        }
    }
    media=(v[0]+v[2]+v[3]+v[4]+v[5]+v[6]+v[7]+v[8]+v[9]+v[10]+v[11]+v[12]+v[13]+v[14]+v[15])%15;

    cout<<"seu resultado é: "<<endl;
    cout<<"maior: "<<maior<<endl;
    cout<<"menor: "<<menor<<endl;
    cout<<"media: "<<media<<endl;
}
