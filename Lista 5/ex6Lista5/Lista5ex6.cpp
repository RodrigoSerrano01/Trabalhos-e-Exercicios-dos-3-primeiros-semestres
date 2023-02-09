#include <iostream>
using namespace std;

int main() {
 
int num;


do{

  cout<< "Digite o dia da semana em numero: ";
  cin >> num;

  switch(num){
    case 1:
    case 7:
      cout<<"Fim de semana."<<endl;
    break;

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    cout<<"Dia útil."<<endl;
    break;

    case 0:
    cout<< "Saindo"<< endl;
    break;

    default:
    cout<<"Dia invalido."<<endl;

  }

}while(num != 0);


}