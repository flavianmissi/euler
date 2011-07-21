#include <iostream>
#include <math.h>
#include <cassert>

using namespace std;

bool is_prime(unsigned long long number){
    if(number == 2)
        return true;
    if(number % 2 == 0)
        return false;

    for(int i = 3; i <= sqrt(number); i += 2){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

unsigned long long find_n_prime(int n){
    unsigned long counter = 1;
    unsigned long long i = 3;
    unsigned long long prime;
    while(counter < n){
        if(is_prime(i)){
            counter++;
            prime = i;
        }
        i += 2;
    }
    return prime;
}

void test_is_prime(){
    assert(is_prime(3));
    assert(not is_prime(4));
    assert(is_prime(97));
    assert(not is_prime(102));
    assert(not is_prime(25));
}

void test_prime_position(){
    assert(find_n_prime(6) == 13);
    assert(find_n_prime(10) == 29);
}

int main(){
    test_is_prime();
    test_prime_position();
    cout << "The 10001 prime is " << find_n_prime(10001) << endl;
}
