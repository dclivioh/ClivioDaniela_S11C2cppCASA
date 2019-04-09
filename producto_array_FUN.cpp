#include <iostream>
using namespace std;

void producto(int arr1[],int arr2[]){
  int p[5];
  int prod[5];
  for(int i=0;i<5;i++){
    p[i]=arr1[i]*arr2[i];
    cout<<p[i]<<endl;
  }
}

void prodpunto(int arr1[], int arr2[]){
  int r=0;
  int suma;
  for (int i=0;i<5;i++){
    r=r+arr1[i]*arr2[i];
  }
  cout<<r<<endl;
}

int main(){
  int arr1[5]={1,2,3,4,5};
  int arr2[5]={10,20,30,40,50};
  printf("Producto = ");
  producto(arr1,arr2); 
  printf("Producto punto = ");
  prodpunto(arr1,arr2);
  return 0;
}
