#include <iostream>
using namespace std;

bool paridade(int valor){
    if(valor%2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int valor;
    cin >> valor;
    if(paridade(valor)){
        cout << "o numero eh par" << endl;
    }
    else{
        cout << "o numero eh impar" << endl;
    }
}

