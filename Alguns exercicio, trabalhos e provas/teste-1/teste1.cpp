#include <iostream>
using namespace std;
const int TAM = 5;
int totalVotos = 0;

struct Candidato {

  string nome;
  int voto;

}
candidato;

void contaTotalVotos(Candidato cand[TAM]) {
  float porcent = 0, guardaPorcent;
  int vencedor = 0, aux;
  for (int i = 0; i < TAM; i++) {
    porcent = 0;
    porcent = (cand[i].voto * 100) / totalVotos;
    cout << "O candidato: " << cand[i].nome << " Total de votos: " << cand[i].voto << " recebeu " << porcent << "% dos votos \n";
    if (cand[i].voto > vencedor) {
      vencedor = cand[i].voto;
      aux = i;
      guardaPorcent = porcent;
    }

  }

  cout << "\nA eleição foi vencida por " << cand[aux].nome << " com " << guardaPorcent << "% do total dos votos! \n";

  cout << "Total de votos na Urna: " << totalVotos << endl;

}

bool confirmaVotos(Candidato cand[TAM], int i) {
  int aux;
  system("clear");
  do {
    cout << "\nCandidato:" << cand[i].nome << "\n\nDeseja confirma o Voto:\n1- SIM.\n2- NÃO.\n";
    cin >> aux;
    switch (aux) {
    case 1:
      system("clear");
      return true;
      break;
    case 2:
      system("clear");
      return false;
    default: {
      system("clear");
      cout << "\nOpção Invalido!! \n\nDigite novamente:\n";
    }
    }
  } while (aux != 1 && aux != 2);
  return false;
}

void menuUrna(Candidato cand[TAM]) {
  int opc;
  bool aux = false;

  do {
    cout << "\nUrna Eletronica: \n\n" <<
      "1. Candidato Jair Rodrigues.\n" <<
      "2. Candidato Carlos Luz.\n" <<
      "3. Candidato Neves Rocha.\n" <<
      "4. Nulo.\n" << "5. Branco.\n" <<
      "6. Sair e contabilizar os votos.\n" <<
      "Entre com o seu voto:" << endl;
    cin >> opc;

    switch (opc) {

    case 1:
      aux = confirmaVotos(cand, 0);
      if (aux) {
        cand[0].voto++;
        totalVotos++;
        cout << "\nVoto Computado! \n\n";
        break;
      }
      cout << "\nCancelado! \n\n";
      break;

    case 2:
      aux = confirmaVotos(cand, 1);
      if (aux) {
        cand[1].voto++;
        totalVotos++;
        cout << "\nVoto Computado! \n\n";
        break;
      }
      cout << "\nCancelado! \n\n";
      break;

    case 3:
      aux = confirmaVotos(cand, 2);
      if (aux) {
        cand[2].voto++;
        totalVotos++;
        break;
        cout << "\nVoto Computado! \n\n";
      }
      cout << "\nCancelado! \n\n";
      break;

    case 4:
      aux = confirmaVotos(cand, 3);
      if (aux) {
        cand[3].voto++;
        totalVotos++;
        cout << "\nVoto Computado! \n\n";
        break;
      }
      cout << "\nCancelado! \n\n";
      break;
    case 5:

      aux = confirmaVotos(cand, 4);

      if (aux) {
        cand[4].voto++;
        totalVotos++;
        cout << "\nVoto Computado! \n\n";
        break;
      }
      cout << "\nCancelado! \n\n";
      break;
    case 6:

      system("clear");
      cout << "\nSaindo!\n\n Resultado:\n\n";
      contaTotalVotos(cand);

      break;
    default: {
      system("clear");
      cout << "\nVoto Invalido!! \n\nDigite novamente:\n";

    }

    }
  } while (opc != 6);

}

int main() {
  system("clear");
  Candidato cand[TAM] = {
    "Jair Rodrigues",
    0,
    "Carlos Luz",
    0,
    "Neves Rocha",
    0,
    "Nulo",
    0,
    "Branco",
    0
  };

  menuUrna(cand);
}