#include <iostream>
#include <cmath>
using namespace std;

void volume(){
    float resultado, raio;
    cin >> raio;
    resultado = ((4*3.1415*(pow(raio,3)))/3);
    cout << "Volume da esfera = " << resultado << endl;
}

int main(){
    volume();
}