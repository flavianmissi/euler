#include <iostream>
using std::cout;
using std::endl;

int main(){
    int sum = 0, size = 1000;
    for(int i=0; i < size; i++){
        if(i % 3 == 0 or i % 5 == 0){
            sum += i;
        }
    }

    cout << "sum of multiples of 3 or 5 below " << size << " is: " << sum << endl;
}
