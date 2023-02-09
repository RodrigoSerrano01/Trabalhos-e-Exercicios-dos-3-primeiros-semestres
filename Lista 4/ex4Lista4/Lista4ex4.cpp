#include <iostream>
using namespace std;

int main() {
  string nome, senha;
  bool test;
  do{
    test = true;
    cout<< "Digite seu nome: ";
    cin >> nome;
    cout << "Digite sua senha: ";
    cin >> senha;

    if(nome == senha){
      test = false;
      cout << "Senha não pode ser igual ao nome !!!! \n";
    }

  }while(!test);

  cout <<"Seu nome: " << nome << endl;
  cout <<"Sua Senha: " << senha<< endl;

}