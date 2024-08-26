#include <iostream>
using namespace std;

void soma(){
    int resultado, i, valorA, valorB;
    cin >> valorA >> valorB;
    for(i = valorA; i <= valorB; i++){
        resultado += i;
    }
    cout << resultado;
}

int main(){
    soma();
}