#include <iostream>
using namespace std;
const int TAM = 10;
int main() {
  int mat [TAM][TAM];

  for (int i = 0 ; i < TAM; i++){
    for(int j = 0; j <TAM; j ++){

      mat[i][j]= i * j;

    }
  }

  for (int i = 0 ; i < TAM; i++){
    for(int j = 0; j <TAM; j ++){

      cout << mat[i][j] << " , \t ";

    }
    cout<< endl;
  }
}