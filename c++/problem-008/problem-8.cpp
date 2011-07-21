#include <iostream>
#include <string>
#include <cassert>

using namespace std;

unsigned long long multiply_sequence(string seq){
    int n;
    unsigned long long product = 1;

    for(unsigned long long i = 0; i < seq.length(); i++){
        char tmp = seq[i];
        n = atoi(&tmp);
        product *= n;
    }

    return product;
}

unsigned long long greatest_product_of_five_consecutive_digits(string seq){

    if(seq.length() < 5){
        cout << "Sequence length must be >= 5" << endl;
        return 0;
    }

    unsigned long long greatest_product = 1, product;
    for(int i = 0; i < seq.length(); i++){
        string sub_seq = seq.substr(i, 5);
        product = multiply_sequence(sub_seq);
        if(product > greatest_product){
            greatest_product = product;
        }
    }

    return greatest_product;
}

unsigned long long iterate_over_thousand_digits(string seq){
    int seq_length = 1000;

    unsigned long long greatest_product = 1;
    for(int i = 0; i < seq.length(); i += 1){
        unsigned long long product = greatest_product_of_five_consecutive_digits(seq.substr(i, seq_length));

        if(product > greatest_product){
            greatest_product = product;
        }
    }

    return greatest_product;
}

void test_multiply_of_consecutive_numbers(){
    assert(multiply_sequence("428") == 64);
    assert(multiply_sequence("666") == 216);
    assert(multiply_sequence("8972419") == 36288);
    assert(multiply_sequence("12712481847189347198347189347184713827983414981947128426") == 160933576254140485408415394299904);
}

void test_greatest_product_of_five_consecutive_numbers(){
    assert(greatest_product_of_five_consecutive_digits("4529187262") == 1344);
    assert(greatest_product_of_five_consecutive_digits("12345") == 120);
    assert(greatest_product_of_five_consecutive_digits("1345") == 0);
}

int main(){
    test_multiply_of_consecutive_numbers();
    test_greatest_product_of_five_consecutive_numbers();

    string numbers = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319 \
    5285320880551112540698747158523863050715693290963295227443043557668966489504452445231617318564030987111217223831136222989342338030813533627661428280644448 \
    6645238749303589072962904915604407723907138105158593079608667017242712188399879790879227492190169972088809377665727333001053367881220235421809751254540594 \
    7522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004 \
    7482166370484403199890008895243450658541227588666881164271714799244429282308634656748139191231628245861786645835912456652947654568284891288314260769004224 \
    2190226710556263211111093705442175069416589604080719840385096245544436298123098787992724428490918884580156166097919133875499200524063689912560717606058861 \
    1646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

    cout << iterate_over_thousand_digits(numbers) << endl;
}
