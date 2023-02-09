#include <iostream>
using namespace std;
//1 barco de 3, 2 barcos de 2 e 3 barcos de 1.





int main() {

int const tam = 10;
int campo[tam][tam], linha, coluna, cont=0;
string cmp [tam][tam];




for (int i = 0; i < 10 ; i ++){
  for (int j =0; j < 10; j ++){

    campo [i][j]= 0;
    cmp [i][j]= "~";

  }


}
campo [3][5] = 3;
campo [3][4] = 3;
campo [3][3] = 3;
campo [5][2] = 2;
campo [5][1] = 2;
campo [1][7] = 2;
campo [2][7] = 2;
campo [9][8] = 1;
campo [7][7] = 1;
campo [0][2] = 1;

do{
cout << "Digite o número da linha:";
cin >> linha;
cout << "Digite o número da coluna:";
cin >> coluna;

if (campo[linha][coluna] == 0){
  cmp[linha][coluna]='#';

}
if (campo[linha][coluna] == 3){
  cmp[linha][coluna]='3';
  cont++;
}
if (campo[linha][coluna] == 2){
  cmp[linha][coluna]='2';
  cont++;
}
if (campo[linha][coluna] == 1){
  cmp[linha][coluna]='1';
  cont++;
}
system("clear");
for (int i = 0; i < 10 ; i ++){
  for (int j =0; j < 10; j ++){

    cout<< cmp[i][j] << "\t";

  }

  cout<< endl;
  
}
cout << cont <<" acertos ";
}while (cont != 10);
cout <<"Você venceu!!!"<<endl;
}