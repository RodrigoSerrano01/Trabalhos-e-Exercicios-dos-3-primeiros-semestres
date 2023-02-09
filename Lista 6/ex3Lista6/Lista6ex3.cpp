#include <iostream>
using namespace std;
const int TAM= 10, RANGE = 100;

int main() {
  
  int vet1[TAM], vet2[TAM], vet3[TAM*2],num;
  srand (time(0));

  

  cout << "\n Vetor 1 : \n \n";
  for (int i = 0 ; i < 10; i++){

    vet1[i]= rand ()% RANGE;

    cout<< "Posição "<< i << " = "<< vet1[i] << endl;

  }

  cout << "\n Vetor 2 : \n \n";

  for (int i = 0 ; i < 10; i++){

    vet2[i]= rand ()% RANGE;

    cout<< "Posição "<< i << " = "<< vet2[i]<< endl;

  }

  cout << "\n Vetor 3 = veotr 1 e 2 concatenado :\n \n";

  for (int i = 0 ; i < 20; i++){

    if(i<10){
      vet3[i]= vet1[i];
    }
    else{
     vet3[i]= vet2[i-10];
    }

  cout<< "Posição "<< i << " = "<< vet3[i]<< endl;

  }

}