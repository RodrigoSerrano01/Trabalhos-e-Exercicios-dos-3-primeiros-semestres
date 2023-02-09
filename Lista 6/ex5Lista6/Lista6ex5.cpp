#include <iostream>
using namespace std;

int main() {

string palavra ;
cout<< "Digite uma palavra: ";
cin >> palavra;

int cont = (palavra.size()-1), aux=0;

for(int i =0; i <= palavra.size(); i ++){
  if (palavra[i]!=palavra[cont]){
    
    aux ++;
  }
cont --;
}

if(aux == 0){

  cout<< palavra << " é Palíndromo";

}else{
  cout<< palavra << " Não é Palíndromo";
}


}