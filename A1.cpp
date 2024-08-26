#include <iostream>
using namespace std;

void mult(){
    int num;
    cin >> num;
    num%4==0? cout << "eh multiplo de 4" : cout << "n eh multiplo de 4";
}

int main(){
    mult();
}
    