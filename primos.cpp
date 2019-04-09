#include <iostream>
using namespace std;

int primos(int n1,int n2){
  int n=0;
  for (int j=n1;j<=n2;j++){
    int contador=0;
    for(int i=2;i<=(j/2);i++){
      if(j%i==0){
	contador++;
	break;
      }
    }
    if(contador==0 && j!=1){
      n=j;
      cout<<j<<endl;
    }
  }
  return n;
}

int main(){
  int n1,n2;
  cout<<"Ingrese el numero menor de su intervalo:"<<endl;
  cin>>n1;
  cout<<"Ingrese el numero mayor de su intervalo:"<<endl;
  cin>>n2;
  cout<<"Los primos son= "<<endl;
  primos(n1,n2);
}
