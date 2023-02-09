#include <iostream>
using namespace std;


void tamanhoString (string a){
int aux=0;
do{
aux++;

}while (a[aux] != '\0');
cout << "Tamanho da String: "<< aux << endl;
}

void contaPalavras (string a){
int aux=0, cont=0;
do{
  
if (a [aux] == ' ' || aux==0){
cont ++;

}
aux ++;
}while (a[aux] != '\0');

cout<< "Quantidade de palavras: " <<cont << endl;
}

void posicaoString(string a){
int aux=0, pos;
char caracter;

cout<<"Digite a letra: ";
cin >>caracter;
do{
aux ++;

if (caracter == a[aux]){
pos = aux;
}

}while (a[aux]!='\0');

cout<< "Posição do caracter"<< caracter << " é " << pos << endl;

}

int main() {
  int aux;
  string a = "Rodrigo Serrano Silveira";
cout << a << endl;

tamanhoString(a);
contaPalavras (a);
posicaoString (a);


}