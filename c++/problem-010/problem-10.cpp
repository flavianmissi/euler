#include <iostream>
#include <cassert>
#include "../util/primes.h"

using namespace std;

unsigned long sum_primes_below(int n){
    unsigned long sum = 2;

    if(n < 2){
        cout << "Invalid number" << endl;
    }

    for(int i = 3; i <= n; i+=2){
        if(is_prime(i)){
            sum += i;
        }
    }

    return sum;
}

void test_sum_of_primes_below_n(){
    assert(sum_primes_below(10) == 17);
    assert(sum_primes_below(20) == 77);
}

int main(){
    test_sum_of_primes_below_n();

    cout << sum_primes_below(2000000) << endl;
}
