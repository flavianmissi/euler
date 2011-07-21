#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string itos(int n){
    stringstream ss;
    ss << n;
    return ss.str();
}

string ctos(char c){
    stringstream ss;
    ss << c;
    return ss.str();
}

bool is_palindrome(int number){
    string original (itos(number)), reverse;
    string::reverse_iterator rit;

    for(rit = original.rbegin(); rit < original.rend(); rit++)
        reverse.append(ctos(*rit));

    if(original.compare(reverse) == 0)
        return true;
    return false;
}

int largest_palindrome(){
    int biggest = 111, candidate;

    for(int i = 111; i <= 999; i++){
        for(int j = 111; j <= 999; j++){
            candidate = i*j;
            if(is_palindrome(candidate)){
                if(candidate > biggest)
                    biggest = candidate;
            }
        }
    }
    return biggest;
}

int main(){
    cout << "The largest palindrome is: " << largest_palindrome() << endl;
    return 0;
}
