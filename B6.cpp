#include <iostream>
using namespace std;

int potencia(int, int);

int main(){
    int base, exp;
    cin >> base >> exp;
    potencia(base,exp);
}

int potencia(int, int){
    int base, exp, resultado;
    resultado = base^exp;
    cout << resultado << endl;
}