#include <iostream>
using namespace std;

int main() {
  int numero, tipo;
  float saldo, operacao, novoSaldo, deposito, saque;

  cout << "Digite o numero da conta: ";
  cin >> numero;
  cout << "Digite o saldo: ";
  cin >> saldo;

  do{
    cout << "Digite a operação a ser feira 1- Saque / 2- Deposito: ";
    cin >> tipo;
  }while(tipo != 1 && tipo != 2);

  if(tipo == 1){

    cout << "Digite o valor do saque: ";
    cin >> saque;
    novoSaldo = saldo - saque;

  }
  else if (tipo ==2){

    cout << "Digite o valor do deposito: ";
    cin >> deposito;
    novoSaldo = saldo + deposito;


}
if(novoSaldo < 0){
  cout << "Numero da conta: "<< numero << "\n";
  cout << "Saldo antigo: "<< saldo << "R$\n";
  cout<< "Seu saldo é: "<<novoSaldo<<" R$, conta esturada.";

}
else{
cout << "Numero da conta: "<< numero << "\n";
cout << "Saldo antigo: "<< saldo << "R$\n";

cout<< "Novo saldo: "<<novoSaldo<<"R$";

}



}