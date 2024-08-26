#include <iostream>
using namespace std;

void fatorial(){
    int i, num;
    cin >> num;
    i = num-1;
    while(i>0){
        num *= i;
        i--;
    }
    cout << "O fatorial eh " << num << endl;
}

int main(){
    fatorial();
}