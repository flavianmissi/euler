#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int gcd(int x, int y){
    int r = x%y;
    while(r != 0){
        x = y; y = r;
        r = x%y;
    } 
    return y;
}

unsigned long long lcm_of_two_numbers(unsigned long long x, unsigned long long y){
    return x*y/gcd(x,y);
}

unsigned long long lcm(vector<int> n){
    unsigned long long lcm = lcm_of_two_numbers(n[0], n[1]);
    vector<int>::size_type size = n.size();
    for(int i = 2; i < size; i++){
        lcm = lcm_of_two_numbers(lcm, n[i]);
    }
    return lcm;
}

void lcm_tests(){
    assert(lcm_of_two_numbers(10, 9) == 90);
    assert(lcm_of_two_numbers(45, 22) == 990);

    vector<int> n;
    n.push_back(10);
    n.push_back(9);
    assert(lcm(n) == 90);

    n.clear();
    n.push_back(45);
    n.push_back(22);
    assert(lcm(n) == 990);

    n.clear();
    n.push_back(45);
    n.push_back(22);
    n.push_back(39);
    assert(lcm(n) == 12870);

    n.clear();
    n.push_back(5);
    n.push_back(8);
    n.push_back(9);
    assert(lcm(n) == 360);

    n.clear();
    for(int i = 10; i <= 20; i++)
        n.push_back(i);
    assert(lcm(n) == 232792560);
    n.clear();
}

void gcd_tests(){
    assert(gcd(10, 5) == 5);
    assert(gcd(45, 30) == 15);
}

int main(){
    lcm_tests();
    gcd_tests();
    vector<int> n;
    for(int i = 1; i <= 20; i++){
        n.push_back(i);
    }
    cout << "The smalest evenly divisible number by 1 upto 20 is " << lcm(n) << endl;
}
