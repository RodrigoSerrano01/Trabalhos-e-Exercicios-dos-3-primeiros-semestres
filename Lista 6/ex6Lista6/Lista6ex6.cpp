#include <iostream>
using namespace std;
const int TAM= 1000;


int main() {

  int vet1[TAM], vetImpar[TAM], vetPar[TAM],vetInverso[TAM],cont50 = 0, maior, menor, somaDoVetor=0, auxPar =0,auxImpar =0, aux, cont=TAM-1;
 
  srand (time(0));


  cout<< "\nVetor normal: \n";
  for(int i = 0; i < TAM; i ++){

    vet1[i]= (rand()%81)+10;


    if(i == 0){
      maior = vet1[i];
      menor = vet1[i];
    }
    if( vet1[i]> maior){
      maior = vet1[i];
    }
       if( vet1[i]< menor){
      menor = vet1[i];
    }
    
    cout<< vet1[i]<<" , ";
    if(vet1[i]==50){
      cont50++;
      }

    somaDoVetor+= vet1[i];


    if(vet1[i]%2 ==0){

      vetPar[auxPar]= vet1[i];
      auxPar++;

    }else{
      vetImpar[auxImpar]= vet1[i];
      auxImpar++;
    }

    vetInverso[cont] = vet1[i];
    cont--;
  }



cout<< "\nForam encontrados "<< cont50 << " Numeros 50"<<endl;
cout<< "O maior numero é: "<< maior << "\nO menor numero é: "<< menor << endl;
cout<< "A soma do vetor é: "<< somaDoVetor << endl;
cout<< "A media do vetor é: "<< somaDoVetor/TAM << endl;
cout<< "Vetor em ordem Inversa: \n";

for(int i = 0; i < TAM; i ++){

  cout<< vetInverso[i] << " , ";


    
}
cout<< "\nVetor Par: \n";
for(int i = 0; i < auxPar; i ++){
  cout<< vetPar[i] << " , ";
 
}

cout<< "\nVetor impar: \n";
for(int i = 0; i < auxImpar; i ++){
  cout<< vetImpar[i] << " , ";
 
}


}