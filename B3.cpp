#include <iostream>
using namespace std;

int soma(int valorA, int valorB){
    int resultado, i;
    for(i = valorA; i <= valorB; i++){
        resultado += i;
    }
    cout << resultado;
}

int main(){
    int valorA, valorB;
    cin >> valorA >> valorB;
    soma(valorA, valorB);
}