#include <iostream>
using namespace std;
const int RANGE = 100, TAM = 7;


struct TAMAGOTHCI {

string nome, sexo;
int   idade, fome, hig, intel, ativo,energia, feliz,  saude;
bool vivo;

} tama;

void mostrarStatus(TAMAGOTHCI tama){

cout << "\nStatus do Tamagotchi: \n\nNome:" << tama.nome << "\nIdade:"<< tama.idade << "\nSexo: " << tama.sexo <<endl;
  cout<<"Fome:"<< tama.fome << endl;
  cout<<"Higiene:"<< tama.hig << endl;
  cout<<"Inteligência:"<< tama.intel << endl;
  cout<<"Atividade:"<< tama.ativo << endl;
  cout<<"Energia:"<< tama.energia << endl;
  cout<<"Felicidade:"<< tama.feliz << endl;
  cout<<"Saúde:"<< tama.saude << endl<<"\n";

}


TAMAGOTHCI criarTama(TAMAGOTHCI tama){
int aux, aux2;

cout<< "Digite o nome do seu Tamagotchi: ";
cin >> tama.nome;
tama.idade = 0;
srand (time(0));
do{
cout<< "Escolha o sexo do tamagotchi: \n1 - Feminino. \n2 - Masculino. \n3 - Aleatorio. ";
cin >> aux;

switch (aux){

  case 1:{
    tama.sexo = "Feminino";
    break;
  }
  case 2:{
    tama.sexo = "Masculino";
    break;
  }
  case 3:{
    aux2 = rand ()% RANGE;
    if (aux2%2 == 0){
      tama.sexo = "Feminino";
    }
    else {
      tama.sexo = "Masculino";
    }
    break;
    }
    default:{
      cout << "Opção Invalida! "<< endl;
  }
  }
  }while (aux != 1 && aux != 2 && aux != 3);
  
  tama.fome = rand ()% RANGE;
  tama.hig = rand ()% RANGE;
  tama.intel = rand ()% RANGE;
  tama.ativo = rand ()% RANGE;
  tama.energia = rand ()% RANGE;
  tama.feliz = rand ()% RANGE;
  tama.saude = rand ()% RANGE;
 
 mostrarStatus(tama);
  
return tama;
}



bool morte(TAMAGOTHCI tama){
if(tama.idade == 7){
   cout<< tama.nome << " morreu de velho."<< endl;
   return false;
 }
 if(tama.saude <= 0){
   cout<< tama.nome << " morreu de doença."<< endl;
   return false;
 }
 if(tama.fome <= 0){
   cout<< tama.nome << " morreu de fome."<< endl;
   return false;
 }

 return true;

}

void menu(TAMAGOTHCI tama){
 int opc;
do{

  tama.vivo = morte(tama);
 
if (!tama.vivo){
  break;
}
cout << " Menu de Opções: \n";
cout << "0- Mostrar Status\n1 - Comer \n2 - Praticar Esporte\n3 - Ler \n4 - Jogar\n5 - Tomar Banho\n6 - Tomar Remédio\n7 - Dormir\n8 - Sair  ";
cin >> opc;

switch (opc){

  case 0 :{

    mostrarStatus(tama);
    break;
  }

case 1 : {

  if((tama.fome< 100 && tama.saude> 50)|| tama.feliz){

    tama.fome +=30;
    tama.feliz +=5;
    tama.saude +=10;
    tama.energia +=20;
  }
  else if (tama.fome > 100 && (tama.feliz>70 || tama.feliz<30)){

    tama.saude -=10;
    tama.feliz +=10;

  }
  else{

    cout<<"Não quer comer! "<< endl;
  }
  
  break;
}
case 2 : {

  if(tama.energia >40 && tama.saude >50){

    tama.fome -=20;
    tama.energia -=30;
    tama.saude += 20;
    tama.feliz += 10;
    tama.ativo +=10;
    tama.hig = 0;
  }
  else{

    cout<< "Não quer praticar Esportes!"<< endl;
  }
  //mostrarStatus(tama);
  break;
}
case 3 : {

  if(tama.fome>= 30 && tama.energia >= 30){

    tama.intel+= 10;
    tama.energia -=5;

  }
  else{

    cout<< "Não quer Ler!"<< endl;
  }
  //mostrarStatus(tama);
  break;
}
case 4 : {

  if(tama.energia>10 || tama.feliz> 50){

    tama.feliz +=10;
    tama.intel += 5;
    tama.hig -=5;
  }
  else{
    cout<< "Não quer jogar!"<< endl;
  }
  //mostrarStatus(tama);
  break;
}
case 5 : {

  if (tama.hig< 30 && tama.feliz >10 ){
    tama.hig = 100;
    tama.feliz +=10;
    tama.saude +=10;
  }
  else{

    cout<< "Não quer tomar Banho! "<< endl;
  }
  mostrarStatus(tama);
  break;
}
case 6 : {

  if(tama.saude< 30){

    tama.saude +=10;
  }
  else{

    cout<< "Não quer tomar remédio!"<< endl;
  }
 // mostrarStatus(tama);
  break;
}
case 7 : {

  if(tama.energia<30 && tama.saude>30 ){

    tama.energia = 100;
    tama.saude +=10;
  }
  else if(tama.saude<30){
    tama.energia +=30;
  }
  else{

    cout<< "Não quer Dormir!"<< endl;
  }
 // mostrarStatus(tama);
  tama.idade ++;
  break;
}
case 8 : {
cout<<"Saindo! "<<endl;
  break;
}
default:  {

  cout<<"Opção invalalida digite novamente. "<<endl;

}

}

}while( opc  !=8);

}

int main() {
TAMAGOTHCI tama;
tama = criarTama(tama);

  menu(tama);

}