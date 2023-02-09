#include <iostream>
using namespace std;

int main() {
  int num, sem;
sem = time(0);
   srand(sem);

num = (rand()%100) +1;

if(num%2==0){
  cout<<num <<" é par.";

}else{
  cout<<num <<" é impar.";
}
 
}