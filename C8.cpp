#include <iostream>
using namespace std;

bool bissexto(int ano){
    if(ano%4==0 and (ano%400==0 or ano%100!=0)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int ano;
    cin >> ano;
    if(bissexto(ano)){
        cout << "o ano eh bissexto" << endl;
    }
    else{
        cout << "o ano nao eh bissexto" <<endl;
    }
}