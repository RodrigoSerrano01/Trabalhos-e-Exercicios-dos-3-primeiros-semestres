
#include <iostream>



using namespace std;



int troca(long var[]){

    var[0] = var[0] * 1000;

    cout << "dentro do troca "<< var[0] <<"\n";

    return var[0];

}



int main(int argc, char const *argv[])

{

    const int tam = 10;
    int cont = 0;
    long a[tam] = {9,3,5,1,0,7,2,3,8,9};

    

    for (int i = 0; i < tam; i++) {
      //a[i] = i;
        cout <<" posicao " << i << ": "<< a[i] <<" \n";

    }
    cout << "\n Vetor Ordenado: \n \n";

    for (int i = 0; i < tam; i++) {
      for (int j = i+1; j < tam; j++){
        if (a[i]> a[j]){
          int aux = a[i];
          a[i]= a[j];
          a[j] = aux;

        }

      }

    }
        for (int i = 0; i < tam; i++) {
        cout <<" posicao " << i << ": "<< a[i] <<" \n";

    }

    return 0;

}