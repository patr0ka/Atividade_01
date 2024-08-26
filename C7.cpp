#include <iostream>
using namespace std;

float areacirc(float raio){
    float area;
    area = 3.1415*(raio*raio);
    cout << area << "cm^2" << endl;
    
}

int main(){
    float raio;
    cin >> raio;
    areacirc(raio);
}