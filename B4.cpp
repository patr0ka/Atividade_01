#include <iostream>
#include <cmath>
using namespace std;

float volume(float raio){
    float resultado;
    resultado = ((4*3.1415*(pow(raio,3)))/3);
    cout << "Volume da esfera = " << resultado << endl;
}

int main(){
    float raio;
    cin >> raio;
    volume(raio);
}