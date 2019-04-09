#include <iostream>
using namespace std;

int factorial(int numero){
  int i;
  int factorial =1;
  if (numero<0){
    factorial =0;
  }else if(numero==0){
    factorial=1;
  }else{
    for(i=1;i<=numero;i++){
      factorial=factorial*i;
    }
  }
  return factorial;
}

int main(){
  int fac;
  int num;
  cout<<"Ingrese el número: "<<endl;
  cin>>num;
  fac=factorial(num);
  cout<<"El factorial es = "<<fac<<endl;
  return 0;
}
