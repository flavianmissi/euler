import unittest
from nose.tools import assert_equals

from problem11 import Matrix


class GridLinesProductTestCase(unittest.TestCase):

    def test_should_get_the_product_of_2_numbers_in_a_1x3_matrix(self):
        matrix = Matrix([[2, 3, 5]])
        assert_equals(matrix.greatest_line_product(2), 15)

    def test_should_get_the_product_of_2_numbers_in_a_1x5_matrix(self):
        matrix = Matrix([[4, 2, 8, 5, 1]])
        assert_equals(matrix.greatest_line_product(2), 40)

    def test_should_get_the_product_of_2_numbers_in_a_2x3_matrix(self):
        matrix = Matrix([[2, 1, 5], [4, 3, 5]])
        assert_equals(matrix.greatest_line_product(2), 15)

    def test_should_get_the_product_of_3_numbers_in_a_2x3_matrix(self):
        matrix = Matrix([[2, 1, 5], [4, 3, 5]])
        assert_equals(matrix.greatest_line_product(3), 60)

    def test_should_get_the_product_of_4_numbers_in_a_2x5_matrix(self):
        matrix = Matrix([[2, 1, 5, 3, 2], [1, 9, 4, 3, 5]])
        assert_equals(matrix.greatest_line_product(4), 540)

    def test_should_get_the_greatest_product_of_3_numbers_in_a_3x3_matrix(self):
        matrix = Matrix([[2, 1, 5], [1, 9, 4], [5, 2, 3]])
        self.assertEqual(matrix.greatest_line_product(3), 36)


class GridColumnsProductTestCase(unittest.TestCase):

    def test_should_get_the_greatest_product_of_3_numbers_in_a_3x3_matrix(self):
        matrix = Matrix([[2, 1, 5], [1, 9, 4], [5, 2, 3]])
        self.assertEqual(matrix.greatest_column_product(3), 60)

    def test_should_get_the_greatest_product_of_2_numbers_in_a_3x3_matrix(self):
        matrix = Matrix([[2, 1, 5], [1, 9, 4], [5, 2, 3]])
        self.assertEqual(matrix.greatest_column_product(2), 20)

    def test_should_get_the_greatest_product_of_3_numbers_in_a_6x6_matrix(self):
        matrix = Matrix([[2, 1, 5, 8, 2, 7], [1, 9, 4, 1, 3, 2], [5, 2, 3, 9, 2, 4], [9, 1, 2, 10, 13, 9], [9, 82, 1, 23, 5, 8], [9, 12, 48, 1, 2, 8]])
        self.assertEqual(matrix.greatest_column_product(3), 2070)

    def test_should_get_the_greatest_product_of_6_numbers_in_a_6x6_matrix(self):
        matrix = Matrix([[2, 1, 5, 8, 2, 7], [1, 9, 4, 1, 3, 2], [5, 2, 3, 9, 2, 4], [9, 1, 2, 10, 13, 9], [9, 82, 1, 23, 5, 8], [9, 12, 48, 1, 2, 8]])
        self.assertEqual(matrix.greatest_column_product(6), 32256)


class GridDiagonalProductTestCase(unittest.TestCase):

    def test_should_get_the_greatest_product_of_3_numbers_in_a_3x3_matrix(self):
        matrix = Matrix([[2, 1, 5], [1, 9, 4], [5, 8, 3]])
        """
        [
        [2, 1, 5],
        [1, 9, 4],
        [5, 8, 3]
        ]
        """
        result = matrix.greatest_diagonal_product(3)
        self.assertEqual(result, 225)

    def test_should_get_the_greatest_product_of_3_numbers_in_a_6x6_matrix(self):
        matrix = Matrix([[2, 1, 5, 8, 2, 7], [1, 9, 4, 1, 3, 2], [5, 2, 3, 9, 2, 4], [9, 1, 2, 10, 13, 9], [9, 82, 1, 23, 5, 8], [9, 12, 48, 1, 2, 8]])
        """
        [
        [02, 01, 05, 08, 02, 07],
        [01, 09, 04, 01, 03, 02],
        [05, 02, 03, 09, 02, 04],
        [09, 01, 02, 83, 13, 09],
        [09, 82, 01, 23, 55, 08],
        [09, 12, 48, 01, 02, 98]
        ]
        """
        # 447370
        self.assertEqual(matrix.greatest_diagonal_product(3), 447370)


if __name__ == "__main__":
    unittest.main()
