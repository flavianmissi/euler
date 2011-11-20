from unittest import TestCase
from nose.tools import assert_equals
from problem12 import triangle_number, numbers_of_factors, get_triangle


class TriangleNumbersTestCase(TestCase):

    def test_should_get_28_as_the_7_triangle_number(self):
        assert_equals(triangle_number(position=7), 28)

    def test_should_get_6_as_the_3_triangle_number(self):
        assert_equals(triangle_number(position=3), 6)

    def test_should_get_45_as_the_9_triangle_number(self):
        assert_equals(triangle_number(position=9), 45)

    def test_should_get_55_as_the_10_triangle_number(self):
        assert_equals(triangle_number(position=10), 55)


class Factors(TestCase):

    def test_should_get_5_as_the_number_of_factors_of_28(self):
        assert_equals(numbers_of_factors(28), 6)

    def test_should_get_4_as_the_number_of_factors_of_15(self):
        assert_equals(numbers_of_factors(15), 4)


class TriangleNumberFactorsTestCase(TestCase):

    def test_should_get_28_as_the_first_number_to_have_over_then_5_factors(self):
        assert_equals(get_triangle(over_factors=5), 28)
