#include <iostream>
using namespace std;
//4, 6, 8, 10, 12 ou 16 faces

int main() {

int num, opc;
bool aux = true;

srand(time(0));

do{
aux = true;
cout<< "Digite a opção: \n 4- Para 4 Lados. \n 6- Para 6 Lados. \n 8- Para 8 Lados. \n 10- Para 10 Lados. \n 12- Para 12 Lados. \n 16- Para 16 Lados. \n 0 - Para sair\n";
cin >>opc;
switch (opc){
  case 4:
  num = (rand()%4)+1;
  break;
  case 6:
  num = (rand()%6)+1;
  break;
  case 8:
  num = (rand()%8)+1;
  break;
  case 10:
  num = (rand()%10)+1;
  break;
  case 12:
  num = (rand()%12)+1;
  break;
  case 16:
  num = (rand()%16)+1;
  break;
  case 0:
  cout<<"Saindo"<<endl;
  aux = false;
  break;

  default:
  aux = false;
  cout<<"Opção invalida" << endl;

}
if( aux){
  system("clear");
cout<< "O numero sorteado foi "<< num <<endl;
}
}while(opc !=0);
cout<<"Fim";


}