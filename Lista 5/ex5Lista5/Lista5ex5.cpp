#include <iostream>
using namespace std;

int main() {

  int num, dia, ano;
  string mes;
  bool aux;

  do{
    aux= true;
    cout<< "Digite o dia do mês: ";
    cin >> dia;
    cout<< "Digite o número do mes: ";
    cin >> num;
    cout<< "Digite o ano: ";
    cin >> ano;
    switch(num){
     
      case 1:
        mes = "Janeiro";
      break;
      case 2:
        mes = "Fevereiro";
      break;
      case 3:
        mes = "Março";
      break;
      case 4:
        mes = "Abril";
      break;
      case 5:
        mes = "Maio";
      break;
      case 6:
        mes = "Junho";
      break;
      case 7:
        mes = "Julho";
      break;
      case 8:
        mes = "Agosto";
      break;
      case 9:
        mes = "Setembro";
      break;
      case 10:
        mes = "Outubro";
      break;
      case 11:
        mes = "Novembro";
      break;
      case 12:
        mes = "Dezembro";
      break;
      case 0:
        aux= false;
        cout<< "Saindo"<< endl;

      break;

      default:
        aux= false;
        cout<< "Mês invalido"<< endl;
    }

  if(aux){
    cout<< "Dia " << dia << "do mes de " <<mes << " de " << ano << endl;


  }

  }while (num !=0);




}