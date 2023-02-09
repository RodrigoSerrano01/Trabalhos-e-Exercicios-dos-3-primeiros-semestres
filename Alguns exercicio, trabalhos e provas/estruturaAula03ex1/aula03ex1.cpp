#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

int main() {

int vet1 [5], vet2[5], aux, mat[3][5];

  for(int i =0; i< 5; i++){
  do{
    cout<< "Digite o valor da posição "<<i+1<<"\nRespeitando os limites de 10 a 30, maiores do que 0 "<< endl;
    cin>> aux;
    if(aux>=10 && aux<= 30){
      vet1[i]= aux;
    }
    else{
      i--;
      cout<< "valor fora do limite solicitado "<< endl;
    }
  }while(aux <10 && aux> 30);
    }

  for(int i =0; i< 5; i++){
  do{
    cout<< "Digite o valor da posição "<<i+1<<" \nRespeitando os limites de -5 a 5, sendo somente negativos"<< endl;
    cin>> aux;
    if(aux <0 && aux>=-5){
      vet2[i]= aux;
    }
    else{
      i--;
      cout<< "valor fora do limite solicitado "<< endl;
    }
  }while(aux <10 && aux> 30);
    }

  /*  cout<< "vetor 1"<<endl;
  for(int i =0; i <5; i++){
    cout<< vet1[i]<<" - ";
    
  }
  cout<< "\nvetor 2"<<endl;
  for(int i =0; i <5; i++){
    cout<< vet2[i]<<" - ";
  }
  */

  for(int i =0; i < 3; i ++){
    for(int j= 0; j<5; j++){
      if(i ==0){
        mat[i][j]= vet1[j];
      }
      if(i ==1){
        mat[i][j]= vet2[j];
      }
      if(i ==2){
        mat[i][j]= (vet1[j]+ vet2[j])*2;
      }
      
    }
    
  }
  cout<< "Matriz \n";
  for(int i =0; i <3; i ++){
    for(int j= 0; j <5; j ++){
      cout<< mat[i][j] <<" - "; 
    }
    cout<<"\n";
    
  }
    
  
}