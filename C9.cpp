#include <iostream>
using namespace std;

int temperatura(int celsius){
    int fahrenheit;
    fahrenheit = celsius*9/5+32;
    cout << fahrenheit << " graus fahrenheit" << endl;
}

int main(){
    int celsius;
    cin >> celsius;
    temperatura(celsius);
}