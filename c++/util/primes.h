#include <math.h>

bool is_prime(unsigned long long number){
    if(number == 2)
        return true;
    if(number % 2 == 0 or number < 2)
        return false;

    for(int i = 3; i <= sqrt(number); i += 2){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}
