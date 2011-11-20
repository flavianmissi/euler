#include <iostream>
using namespace std;

int main(){
    int prev = 0, fib = 1, sum = 0, aux;

    while(fib <= 4000000){
        if(fib % 2 == 0)
            sum += fib;
        aux = fib;
        fib = prev + fib;
        prev = aux;
    }

    cout << "The last fibonacci term is: " << fib << endl
         << "The sum of all even-valued terms is: " << sum << endl;
}
