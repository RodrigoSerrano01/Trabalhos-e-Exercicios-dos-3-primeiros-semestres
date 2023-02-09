#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

char filaVazia(int ini){
    if (ini==-1)
        return 'S';
    else return 'N';
}

char filaCheia(int tam, int fim){
     if (fim==tam)
            return 'S';
        else return 'N';
}

void criaFila(int *ini, int *fim){
    (*ini) = -1;
    (*fim) = 0;
}

void exibeFila(int fila[], int fim){
    int i;
    printf("Fila: ini-> ");
    for (i=0;i<fim;i++){
        printf("%d ", fila[i]);
    }
    printf("\n");
}

void insereFila(int fila[], int *ini, int *fim, int tam, int valor){
    if (filaVazia((*ini)) == 'S'){
        (*ini)++;
    }
    if (filaCheia(tam,(*fim)) == 'N'){
        fila[(*fim)] = valor;
        (*fim)++;
    }else{
        printf("Fila cheia!\n");
    }
}

void removeFila(int fila[], int *ini, int *fim, int tam){
    int i;
    if (filaVazia((*ini)) == 'S'){
        printf("Fila vazia!\n");
    }else{
        (*fim)--;
        if((*fim) == 0){
            (*ini) = -1;
        }else{
            for (i=0;i<(*fim);i++){
                fila[i] = fila[i+1];
            }
        }
    }
}


int main(){
    int tam = 3;
    int ini, fim;
    int fila[tam];
    int valor, op;

    criaFila(&ini,&fim);
    exibeFila(fila,fim);

    do{
        printf("1 - Inserir na Fila\n");
        printf("2 - Remover da Fila\n");
        printf("0 - Sair\n");
        printf("Informe a opcao: ");
        scanf("%d",&op);
        switch(op){
            case 1: printf("Informe o valor para inserir na fila: ");
                    scanf("%d",&valor);
                    insereFila(fila,&ini,&fim,tam,valor);
                    exibeFila(fila,fim);
                    printf("\n");
                    break;
            case 2: removeFila(fila,&ini,&fim,tam);
                    exibeFila(fila,fim);
                    printf("\n");
                    break;
            case 0: printf("Saindo... \n");
                    printf("\n");
                    break;
            default: printf("Opcao invalida!\n");
        }


    }while (op!=0);

    return 0;
}