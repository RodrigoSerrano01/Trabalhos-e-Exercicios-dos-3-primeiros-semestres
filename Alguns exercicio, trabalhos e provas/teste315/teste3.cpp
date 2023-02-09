// nomes: Gabriella Huppes & Rômulo Saraiva //

#include <iostream>
using namespace std;

// struct para armazenar a lista com seus valores
typedef struct tLista {
  int valor;
  struct tLista *prox;
}
lista;

// void para pegar o valor e por na ordem
void inserir(lista *p) {
  lista *atual, *novo, *anterior;
  int num;
  novo = (lista *)malloc(sizeof(lista));
  atual = *p;
  anterior = NULL;
  cout << "Insira um valor: ";
  cin >> num;
  novo->valor = num;
  if (atual == NULL) {
    novo->prox = NULL;
    *p = novo;
  } else {
    while (atual != NULL && atual->valor < num) {
      anterior = atual;
      atual = atual->prox;
    }
    novo->prox = atual;
    if (anterior == NULL) {
      *p = novo;
    } else {
      anterior->prox = novo;
    }
  }
}

// void para printar
void mostraLista(lista *p) {
  int cont = 1;
  while (p != NULL) {
    cout << cont++ << "° -> " << p->valor << endl;
    p = p->prox;
  }
}

int main() {
  lista *inicio = NULL;
  // opcao já começa com valor s para iniciar
  char opcao = 's';
  do {
    inserir(&inicio);
    cout<<("Deseja inserir outro valor? (S/N)\n");
    cin >> &opcao;
  } while (opcao == 's' || opcao == 'S');
  mostraLista(inicio);
}
// nomes: Gabriella Huppes & Rômulo Saraiva //

#include <iostream>
using namespace std;

// struct para armazenar a lista com seus valores
typedef struct tLista {
  int valor;
  struct tLista *prox;
}
lista;

// void para pegar o valor e por na ordem
void inserir(lista *p) {
  lista *atual, *novo, *anterior;
  int num;
  novo = (lista *)malloc(sizeof(lista));
  atual = *p;
  anterior = NULL;
  cout << "Insira um valor: ";
  cin >> num;
  novo->valor = num;
  if (atual == NULL) {
    novo->prox = NULL;
    *p = novo;
  } else {
    while (atual != NULL && atual->valor < num) {
      anterior = atual;
      atual = atual->prox;
    }
    novo->prox = atual;
    if (anterior == NULL) {
      *p = novo;
    } else {
      anterior->prox = novo;
    }
  }
}

// void para printar
void mostraLista(lista *p) {
  int cont = 1;
  while (p != NULL) {
    cout << cont++ << "° -> " << p->valor << endl;
    p = p->prox;
  }
}

int main() {
  lista *inicio = NULL;
  // opcao já começa com valor s para iniciar
  char opcao = 's';
  do {
    inserir(&inicio);
    cout<<("Deseja inserir outro valor? (S/N)\n");
    cin >> &opcao;
  } while (opcao == 's' || opcao == 'S');
  mostraLista(inicio);
}
