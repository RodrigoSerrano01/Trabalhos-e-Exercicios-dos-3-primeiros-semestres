#include <iostream>
using namespace std;

int main() {

  int mes;
  do{
  cout<< "Digite o mes ou 0 para sair: ";
  cin >> mes;

  switch(mes){
    case 12:
     case 1:
    case 2:
    case 6:
    case 7:

    cout<< "Alta temporada \n";

    break;
  
    case 3:
     case 4:
    case 5:
    case 8:
    case 9:
    case 10:
    case 11:

    cout<< "Baixa temporada \n";

    break;
    case 0:
      cout<<"Saindo \n";
    break;

    default:{

      cout<< "Mes invalido \n";
    }




  }
  }while (mes!=0);
  
}