#include <iostream>
using namespace std;

void potencia(){
    int base, exp, resultado=1;
    cin >> base >> exp;
    while(exp>0){
        resultado*=base;
        exp--;
    }
    cout << resultado << endl;
}

int main(){
    potencia();
}