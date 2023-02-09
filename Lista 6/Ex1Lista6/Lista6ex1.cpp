#include <iostream>
using namespace std;
const int TAM = 10;

int main() {

  int vet1[TAM], vet2[TAM] ;

  cout<< "\nVetor 1: \n \n";  
  for( int i = 0 ; i <10 ; i ++){

    vet1[i]= i;
    cout<< "Posição "<< i << " = "<< vet1[i]<< endl;

  }

  cout<< "\nVetor 2: \n \n";
  for( int i = 0 ; i <10 ; i ++){

    vet2[i]= vet1[i];
    cout<< "Posição "<< i << " = "<< vet2[i]<< endl;

  }
}