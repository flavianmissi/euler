#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "problem11.hpp"

using namespace std;

void test_matrix_was_mounted_and_has_the_right_members();
void test_get_greatest_product_of_4_elements_in_left_right_directions();
void test_get_greatest_product_of_4_elements_in_up_down_directions();
void test_get_greatest_product_of_4_elements_in_diagonals();
void test_find_the_greatest_number();
vector<vector<int> > fake_matrix();
vector<vector<int> > another_fake_matrix();

int main() {
    test_matrix_was_mounted_and_has_the_right_members();
    test_get_greatest_product_of_4_elements_in_left_right_directions();
    test_get_greatest_product_of_4_elements_in_up_down_directions();
    test_get_greatest_product_of_4_elements_in_diagonals();
    //test_find_the_greatest_number();

    //vector<vector<int> > matrix = mount_matrix();
    //cout << "the greatest product in the matrix is: " << get_result(matrix) << endl;
}

void test_matrix_was_mounted_and_has_the_right_members() {
    vector<vector<int> > matrix = mount_matrix();

    assert(matrix.size() == 20);
    for(int i = 0; i < matrix.size(); i++) {
        assert(matrix[i].size() == 20);
    }

    assert(matrix[0][0] == 8);
    assert(matrix[1][0] == 49);
    assert(matrix[1][19] == 0);
    assert(matrix[2][0] == 81);
}

void test_get_greatest_product_of_4_elements_in_left_right_directions() {
    vector<vector<int> > matrix = mount_matrix();
    vector<vector<int> > matrix2 = fake_matrix();

    assert(greatest_product_of_4_elements_in_left_right_directions(matrix2) == 1680);
    assert(greatest_product_of_4_elements_in_left_right_directions(matrix) == 48477312);
}

void test_get_greatest_product_of_4_elements_in_up_down_directions() {
    vector<vector<int> > matrix = mount_matrix();
    vector<vector<int> > matrix2 = another_fake_matrix();

    assert(greatest_product_of_4_elements_in_up_down_directions(matrix) == 51267216);
    assert(greatest_product_of_4_elements_in_up_down_directions(matrix2) == 343980);
}

void test_get_greatest_product_of_4_elements_in_diagonals() {
    vector<vector<int> > matrix = mount_matrix();
    vector<vector<int> > matrix2 = another_fake_matrix();

    cout << greatest_product_of_4_elements_in_diagonals(matrix2) << endl;
    //assert(greatest_product_of_4_elements_in_diagonals(matrix) == 70600674);
    assert(greatest_product_of_4_elements_in_diagonals(matrix2) == 195216);
}

void test_find_the_greatest_number() {
    vector<vector<int> > matrix = mount_matrix();

    int numbers[] = {3, 5, 1};
    assert(find_greatest_number(numbers) == 5);

    int numbers2[] = {1000, 400, 210};
    assert(find_greatest_number(numbers2) == 1000);
}

vector<vector<int> > fake_matrix(){
    vector<vector<int> > matrix(5, vector<int>(5, 0));

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            matrix[i][j] = i+j;
        }
    }

    return matrix;
}

vector<vector<int> > another_fake_matrix(){
    vector<vector<int> > matrix(5, vector<int>(5, 0));

    matrix[0][0] = 3; matrix[0][1] = 4; matrix[0][2] = 1; matrix[0][3] = 6; matrix[0][4] = 0;
    matrix[1][0] = 12; matrix[1][1] = 9; matrix[1][2] = 10; matrix[1][3] = 31; matrix[1][4] = 1;
    matrix[2][0] = 15; matrix[2][1] = 2; matrix[2][2] = 17; matrix[2][3] = 7; matrix[2][4] = 11;
    matrix[3][0] = 21; matrix[3][1] = 78; matrix[3][2] = 98; matrix[3][3] = 12; matrix[3][4] = 43;
    matrix[4][0] = 91; matrix[4][1] = 23; matrix[4][2] = 17; matrix[4][3] = 83; matrix[4][4] = 88;

    return matrix;
}
