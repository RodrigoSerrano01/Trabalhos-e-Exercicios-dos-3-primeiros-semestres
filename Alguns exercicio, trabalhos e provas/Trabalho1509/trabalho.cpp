#include <iostream>
using namespace std;


int contaNomes(string nomes){
  int cont=0,aux =0;;

  do{
    if (nomes[aux]== ';'){
      cont ++;

    }

  aux ++;
  }while (nomes [aux]!= '\0');

  return cont;
}

void montaLista (string *lista ,string nomes, int tam){
  int aux = 0, cont =0;

  do{

    if (nomes[aux]== ';'){
      cont ++;
      aux ++;
    }
  lista[cont] += nomes[aux];
  aux ++;
  }while (nomes [aux]!= '\0');

;
}

void listar (string *lista, int tam){

for (int i =0; i < tam; i ++){

  cout<< lista[i]<< endl;
}

}

void ListarOrdemAlfa(string *lista, int tam){

  int cont = 0;
for (int i = 0; i < tam; i++) {
      for (int j = i+1; j < tam; j++){
        if (lista[i]> lista[j]){
          string aux = lista[i];
          lista[i]= lista[j];
          lista[j] = aux;
          
      
    }
  }
}
listar(lista, tam);

}

void ListarOrdemAlfaSobrenome(string *lista, int tam){
  int cont = 0;
for (int i = 0; i < tam; i++) {
      for (int j = i+1; j < tam; j++){
        if(lista[i] == " " && lista[j] == " "){
        if (lista[i]> lista[j]){
          string aux = lista[i];
          lista[i]= lista[j];
          lista[j] = aux;
          
      
    }
    }
  }
}
listar(lista, tam);

}

int main() {

  string nomes = ("JOAO BEZIAZICINI;BRUNO CUNHA;MARIA DIAS;MATHEUS FREITAS;VICTOR GOMES;GABRIELLA HUPPES;GIOVANA JARDIM;ANTONIO JUNIOR;ANDRE KRUGER;JEAN LOPES;JOAO PLENTZ;ROMULO SARAIVA;MATHEUS SILVEIRA;RODRIGO SILVEIRA;LUCAS SPENGLER;");  
  //string nomes = ("JOAO BEZIAZICINI;BRUNO CUNHA;MARIA DIAS;MATHEUS FREITAS;VICTOR GOMES;GABRIELLA HUPPES;RODRIGO SILVEIRA;LUCAS SPENGLER;");
  //string nomes = ("JEAN LOPES;JOAO PLENTZ;ROMULO SARAIVA;MATHEUS SILVEIRA;RODRIGO SILVEIRA;LUCAS SPENGLER;");
  //string nomes = ("MATHEUS FREITAS;GIOVANA JARDIM;ANTONIO JUNIOR;JEAN LOPES;JOAO PLENTZ;ROMULO SARAIVA;MATHEUS SILVEIRA;RODRIGO SILVEIRA;");
  int opc, contNome=0;

  contNome = contaNomes(nomes);
  string listaNomes[contNome];
  montaLista(listaNomes, nomes, contNome);


  
  cout<<"Numero de Nomes na string:"<<contNome<<"\nDigite a Opção:\n 1- Listar. \n 2- Listar em Ordem Alfabetica de nomes. \n 3- Listar Ordem Alfabetica de sobrenomes. \n 0- Para sair."<< endl;
  cin >> opc;
  switch (opc){

    case 1: 
    listar(listaNomes, contNome);
    break;
    case 2:

    ListarOrdemAlfa(listaNomes, contNome);

    break;
    case 3:

    ListarOrdemAlfaSobrenome(listaNomes, contNome);

    break;

    case 0 :

    cout<< "Fim \n";

    break;

    default:
    cout<< "Codigo invalido \n";


  }

}