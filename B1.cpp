#include <iostream>
using namespace std;

bool mult(int valor){
    if (valor % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int valor;
    cin >> valor;
    if (mult(valor)){
        cout << "eh multiplo de 4" << endl;
    }
    else{
        cout << "n eh multiplo de 4" << endl;
    }
}