#include <iostream>
#include <cassert>
#include <math.h>

using namespace std;

unsigned long sum_of_squares(int until){
    unsigned long sum = 0;
    for(int i = 1; i <= until; i++){
        sum += pow(i, 2);
    }
    return sum;
}

unsigned long square_of_sum(int until){
    unsigned long sum = 0;
    for(int i = 1; i <= until; i++){
        sum += i;
    }
    return pow(sum, 2);
}

void test_sum_of_squares(){
    assert(sum_of_squares(3) == 14);
    assert(sum_of_squares(10) == 385);
}

void test_square_of_sum(){
    assert(square_of_sum(3) == 36);
    assert(square_of_sum(10) == 3025);
}

void test_differecen_between_previous_functions(){
    assert(square_of_sum(10)-sum_of_squares(10) == 2640);
}

int main(){
    test_sum_of_squares();
    test_square_of_sum();
    cout << "The difference between the square of the sum of 100 and the sum of the square of 100 is " 
         << square_of_sum(100)-sum_of_squares(100) << endl;
}
