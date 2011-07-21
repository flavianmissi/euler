#include <iostream>
#include <math.h>
#include <cassert>

using namespace std;

int* pythagorean_triplet(int m, int n){
    if(m < n){
        cout << "m should be less than n" << endl
             << "m: " << m << endl
             << "n: " << n << endl;
        return 0;
    }
    int a = pow(m, 2) - pow(n, 2);
    int b = 2 * m * n;
    int c = pow(m, 2) + pow(n, 2);

    int* triplet = new int[3];
    triplet[0] = a; triplet[1] = b; triplet[2] = c;

    return triplet;
}

int find_pythagorean_triplet_product(){
    int* triplet = new int[3];

    for(int n = 0; n <= 1000; n++){
        for(int m = n; m <= 1000; m++){
            triplet = pythagorean_triplet(m, n);
            if(triplet[0] + triplet[1] + triplet[2] == 1000){
                cout << triplet[0] << " - " << triplet[1] << " - "  << triplet[2] << endl;
                return triplet[0] * triplet[1] * triplet[2];
            }
        }
    }
    cout << "Something went wrong... :(" << endl;
    return 0;
}

void test_should_get_a_pythagorean_triplet(){
    int expected[] = {20, 48, 52};
    int* values = pythagorean_triplet(6, 4);

    for(int i = 0; i < 3; i++){
        assert(values[i] == expected[i]);
    }
}

int main(){
    test_should_get_a_pythagorean_triplet();
    int product = find_pythagorean_triplet_product();
    cout << product << endl;
}
