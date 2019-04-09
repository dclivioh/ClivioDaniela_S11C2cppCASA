#include <iostream>
using namespace std;

int factorial(int numero){
  int i;
  int f=1;
  if (numero<0){
    f=0;
  }else if(numero>1){
    int fa=factorial(numero-1);
    f=numero*fa;
  }else if(numero==0){
    f=1;
  }
  return f;
}


int main(){
      int n;
      int fac;
      printf("Ingrese un número entero: ");
      cin>>n;
      int resultado=factorial(n);
      cout<<"El factorial es = "<<resultado<<endl;
      
}
