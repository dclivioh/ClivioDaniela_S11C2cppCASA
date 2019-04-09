#include <iostream>
using namespace std;

int primos(int n1,int n2){
  int n=0;
  for(int j=2;j<=n2;j++){
    int contador=0;
    for(int i=n1;i<=n2;i++){
      if(j%i==0){
	contador++;
      if (contador==2){
	n=j;
	cout<<j<<endl;
      }
      }}
    contador=0;
    
  }
  return n;
}

int main(){
  int n1;
  cout<<"Ingrese el número menor de su intervalo: "<<endl;
  cin>>n1;
  int n2;
  cout<<"Ingrese el número mayor de su intervalo: "<<endl;
  cin>>n2;
  cout<<"Los números primos en el intervalo dado son ="<<endl;
  primos(n1,n2);
}
