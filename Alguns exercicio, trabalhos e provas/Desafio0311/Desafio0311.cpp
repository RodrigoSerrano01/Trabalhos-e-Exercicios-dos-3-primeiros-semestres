#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

//Ler o Arquivo
//Quantidade de palavras
//Quantas vezes cada uma aparece

void separaPalavra(char texto[], string palavras[]){
  int i=0 ,j =0;
  do{

    if (texto[i]!= ';'){
      palavras[j] += texto [i];
    }
    else{
      j++;
    }


  i ++;
  }while(texto[i] != '\0');

}

void limpaTexto(char text[],char textoLimpo[]) {
int i = 0;
//char textoLimpo [5000];
  do{
    //cout << text[i];
    
    /*if(text[i] == ' '){
      textoLimpo[i] = ';';
  
    }
    else if(text[i] == ',' || text[i] == '.' || text[i] == '(' || text[i] == ')'){
      textoLimpo[i] = '|';
    }
    else{
      textoLimpo[i] = text[i];    
    }*/
  
    
    if (text[i]== ' ' || text[i] == ',' || text[i] == '.' || text[i] == '(' || 
    text[i] == ')' || text[i] == '-' ){
      textoLimpo[i] = ';';
    }
    
    else{
      textoLimpo[i]= text[i];
    }

  i++;
  }while(text[i]!='\0');
 //cout << textoLimpo[i];
}


int main() {
  
  char text[5000], textoLimpo [5000];
  string palavrasTexto [800];

  FILE *arq = fopen("arquivo.txt", "rt");

  if(arq == NULL){
    cout << "Problema ao abrir o arquivo"; 
    return 1;
  }
  else{
    
    //fgets(text,200,"arquivo.txt");
    fread(text, sizeof (char), 5000, arq);
    //cout<< text;
  }
  
   limpaTexto (text,textoLimpo); 
   separaPalavra (textoLimpo, palavrasTexto);
   
   
  cout<< textoLimpo;

  for ( int i =0; i < 800; i ++){
    cout << palavrasTexto[i] << "\n";
  }

  


  fclose(arq);


} 