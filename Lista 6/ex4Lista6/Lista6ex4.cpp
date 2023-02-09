#include <iostream>
using namespace std;
const int TAM= 10;

int main() {

int vet1[TAM], aux, cont = 0;


cout << "\nVetor Normal: \n\n";
for(int i = 0 ; i < TAM ; i ++){

  vet1[i]= i;

  cout<< "Posição "<< i << " = " << vet1[i]<< endl;
}
cout << "\nVetor invertido: \n\n";
for(int i = TAM-1 ; i > TAM/2 ; i --){
  aux = vet1[i];
  vet1[i]= vet1[cont];
  vet1[cont]= aux;
  //cout<< "Posição cont "<< cont << " = " << vet1[cont]<< endl;
  //cout<< "Posição i "<< i << " = " << vet1[i]<< endl;
  cont++;
}

for(int i = 0 ; i < TAM; i ++){
  cout<< "Posição "<< i << " = " << vet1[i]<< endl;
}

}