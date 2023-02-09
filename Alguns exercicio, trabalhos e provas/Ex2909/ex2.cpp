#include <iostream>
using namespace std;

//Cadastro de alunos com as seguintes informações: - nome, matricula, curso, n1 e n2
//capacidade de listar os alunos cadastrados
//capacidade de lancar n1
//capacidade de lancar n2 
//lancamento de notas individuais (por aluno) ou para todos de uma só vez (1 após o outro)
//listagem de alunos com todos os dados e média das notas
//capacidade para até 10 alunos
//obrigatório uso de funções, nada de uma super main.

struct alunos{

string nome, curso;
int matricula, n1, n2;

};


void cadastrarAlunos(alunos aluno[], int tam){

  for(int i =0 ; i< tam; i ++){

    cout<< "Digite o nome: ";
    cin>> aluno[i].nome;
    cout<< "Digite a matricula: ";
    cin>> aluno[i].matricula;
    cout<< "Digite o curso: ";
    cin>> aluno[i].curso;
    cout << "-----------\n";
  
}



}

void lancaNota(alunos aluno[], int tam, int opc){
  
  int n, i;

  cout<< "digite o indice do aluno:";
  cin >> i;
  cout<< "Digite a nota do : "<< aluno[i].nome << endl;
  cin >> n;

  if (opc ==1){
    aluno[i].n1 = n;

  }
  if (opc ==2){
    aluno[i].n2 = n;

  }

}
void displayAluno(alunos dado , bool linha, bool comNota){

  cout<< "Nome: "<< dado.nome<< (linha ? "\n": " ");
  cout<< "Matricula: "<< dado.matricula<< (linha ? "\n": " ");
  cout<< "Curso: "<< dado.curso<<(linha ? "\n": " ");
  if(comNota){
    cout<< "Nota n1: "<< dado.n1<< (linha ? "\n": " ");
    cout<< "Nota n2: "<< dado.n2<< endl;
  }
  cout << "-----------\n";


}
void listarAluno(alunos aluno[], int tam, bool linha){

for (int i =0 ; i < tam; i ++){
  displayAluno(aluno[i],true, true);

}
}

void mediaSemestre(alunos aluno[], int tam){
  int mf;
  for (int i = 0; i < tam; i++){
  mf=(aluno[i].n1 * 0.4)+(aluno[i].n2*0.6);
  cout << "A média do aluno "<< aluno[i].nome << " = " << mf << endl;
  cout << "-----------\n";
}
}  
alunos selecionaAluno(alunos aluno[], int tam){
  int matricula;
  alunos retorno;
  retorno.matricula = -1;
  retorno.nome = "não encontrado";
  cout << " Digite a matricula: " << endl;
  cin>> matricula;

  for ( int i =0; i < tam ; i ++){
    if (aluno[i].matricula == matricula){
      retorno = aluno [i];

    }
  }
 return retorno;
}

int selecionaAlunoChinelagem(alunos aluno[], int tam){
  int matricula;
  int index = -1;
  cout << " Digite a matricula: " << endl;
  cin>> matricula;

  for ( int i =0; i < tam ; i ++){
    if (aluno[i].matricula == matricula){
      index = i;

    }
  }
 return index;
}



void lancarNota(alunos aluno[], int tam){
  int i;

//alunos alunoAux = selecionaAluno(aluno, 10);
int chinelagem = selecionaAlunoChinelagem(aluno, 10);

cout<< "Nome: "<< aluno[chinelagem].nome<< endl;

  cout<< "Digite a n1";
  cin >> aluno[chinelagem].n1;
  cout<< "Digite a n2";
  cin >> aluno[chinelagem].n2;
}

void lancarTodasNotas(alunos aluno[],int tam){

  for(int i =0; i < tam; i ++){

    cout<< aluno[i].nome << endl;
    cout<< "Digite n1: ";
    cin >> aluno[i].n1;
    cout<< "Digite n2: ";
    cin >> aluno[i].n2;
    cout << "-----------\n";

  }


}

int main() {
  int media;
  int const TAM = 4;
  int opc;
  alunos alunos[TAM];

  alunos[0].nome = "JOAO BEZIAZICINI";
  alunos[0].matricula = 111111;
  alunos[0].curso = "CC";
  alunos[0].n1 = 1;
  alunos[0].n2 = 7;
  alunos[1].nome = ";BRUNO CUNHA";
  alunos[1].matricula = 22222;
  alunos[1].curso = "CC";
  alunos[1].n1 = 5;
  alunos[1].n2 = 6;
  alunos[2].nome = "MARIA DIAS";
  alunos[2].matricula = 333333;
  alunos[2].curso = "CC";
  alunos[2].n1 = 5;
  alunos[2].n2 = 3;
  alunos[3].nome = "MATHEUS FREITAS";
  alunos[3].matricula = 444444;
  alunos[3].curso = "CC";
  alunos[3].n1 = 4;
  alunos[3].n2 = 7;

  do{
  cout<<"Digite a opção:\n "
  "\n [1]- Cadastrar aluno."
  "\n [2]- Listar alunos. "
  "\n [3]- Lançar N1."
  "\n [4]- Lançar N2. "
  "\n [5]- Lançar nota individuais."
  "\n [6]- Lançar nota para todos os alunos."
  "\n [7]- Lista alunos e médias"
  "\n [0]- Sair\n-> ";
    cin >> opc;

    switch(opc){
      case 1 :
      cadastrarAlunos(alunos, TAM);
      break;
     
      case 2:
      listarAluno(alunos,TAM, true);
      break;
      
      case 3:
      lancaNota(alunos,TAM,1);
      break;
      
      case 4:
      lancaNota(alunos,TAM,2);
      break;
      
      case 5:
      lancarNota(alunos,TAM);
      break;
      
      case 6:
      lancarTodasNotas( alunos,TAM);
      break;

      case 7:
      mediaSemestre(alunos,TAM);
      break;

      case 0:
      break;

      default:
      cout << "Voce digitou um numero errado\n";
    }
    }while (opc !=0);





}