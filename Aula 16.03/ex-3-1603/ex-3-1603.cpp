#include <iostream>
using namespace std;

//Cadastro de alunos com as seguintes informações: - nome, matricula, curso, n1 e n2
//capacidade de listar os alunos cadastrados
//capacidade de lancar n1
//capacidade de lancar n2 
//lancamento de notas individuais (por aluno) ou para todos de uma só vez (1 após o outro)
//listagem de alunos com todos os dados e média das notas

int main() {

  float salario, resultado;
  
  do{
  cout << "Digite o seu salario: ";
  cin>> salario;
  }while( salario <= 0);

  if( salario  <= 500 ){

    resultado = salario + (salario * 0.3);
    cout << "o seu salario com o  aumento é:  "<< resultado;

  }
  else if ( salario > 500 && salario <= 2000){
    resultado = salario + (salario * 0.2);
    cout << "o seu salario com o  aumento é:  "<< resultado;


  }
  else{
    resultado = salario + (salario * 0.1);
    cout << "o seu salario com o  aumento é:  "<< resultado;
  }




}