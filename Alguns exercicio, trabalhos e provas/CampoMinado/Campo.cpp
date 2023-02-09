#include <iostream>
using namespace std;

int main() {

int const tam = 10;
int campo[tam][tam];
srand(time(0));

for (int i = 0; i < 10 ; i ++){
  for (int j =0; j < 10; j ++){

    campo [i][j]= 0;

  }


}

for (int i =0 ; i< 10 ; i ++){
int linha = (rand()%10);
int coluna = (rand()%10);

campo [linha][coluna] = 1;


}




for (int i = 0; i < 10 ; i ++){
  for (int j =0; j < 10; j ++){

    cout<< campo[i][j] << "\t";

  }

  cout<< endl;
}


}