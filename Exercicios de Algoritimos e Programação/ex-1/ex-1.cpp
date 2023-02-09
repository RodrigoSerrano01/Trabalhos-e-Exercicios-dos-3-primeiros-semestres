#include <iostream>
using namespace std;

int main() {
   int num1, ant, suc;
    
    cout << "Digite um numero: ";
    cin >> num1;
    ant = num1 -1;
    suc = num1 + 1;

    
    cout << " O sucessor: "<<suc;
    cout << "\n O antecessor: "<<ant;
    return 0;
}