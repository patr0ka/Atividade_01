#include <iostream>
using namespace std;

int fatorial(int num){
    int i;
    i = num-1;
    while(i>0){
        num *= i;
        i--;
    }
    cout << "O fatorial eh " << num << endl;
}

int main(){
    int num;
    cin >> num;
    fatorial(num);
}