#include <iostream>
using namespace std;

int main() {
 float nota1, nota2, nota3 , m1 =1 , m2 = 2 , m3=3 , mediaP;

 cout << "Digite a primeira nota: ";
 cin >> nota1;
 cout << "Digite a segunda nota: ";
 cin >> nota2;
 cout << "Digite a terceira nota: ";
 cin >> nota3;

 mediaP = ((nota1 * m1) + (nota2 * m2) + (nota3 * m3)) / (m1+m2+m3);

 cout << "Media ponderada: " << mediaP;
}