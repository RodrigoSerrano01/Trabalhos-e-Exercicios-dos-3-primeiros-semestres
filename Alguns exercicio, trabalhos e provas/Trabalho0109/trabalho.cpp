#include <iostream>
using namespace std;


void imprimeVetor (int a[], int tam){
for (int i = 0; i < tam; i++){
  cout<< a[i]<< " - ";
}
cout << "\n";
}

void bubbleSort(int a [], int tam){
int cont = 0;
for (int i = 0; i < tam; i++) {
      for (int j = i+1; j < tam; j++){
        if (a[i]> a[j]){
          int aux = a[i];
          a[i]= a[j];
          a[j] = aux;
          
      
    }
  }
}
}
void insertionSort (int a [], int tam){

  int j, aux;

  for (int i = 0 ; i <tam ; i ++){

    aux = a[i];
    j = i -1;

    while ( j >= 0 && a [j]> aux){

      a[j + 1] = a [ j ];
      j = j -1;
    }
    a [j + 1] = aux;

  }

}

int main() {

const int tam = 10;
int a [tam] = {7,5,3,1,2,6,8,9,0,4}, opc;
do{
cout<< "Digite a opção: \n 1- Bubble Sort.\n 2- Insert Sort.\n 3- Imprimir.\n 0- Sair."<< endl;
cin>> opc;

switch (opc){
case 1:
bubbleSort(a,  tam);
break;
case 2:
insertionSort(a, tam);
break;
case 3:
imprimeVetor(a, tam);
break;
case 0:
cout<< "Fim \n";
break;
default:
cout<< "Opção incorreta!!\n";

}
}while (opc !=0);

}