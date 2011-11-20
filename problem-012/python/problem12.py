def triangle_number(position):
    sum = 0
    for n in range(position + 1):
        sum += n
    return sum


def numbers_of_factors(number):
    factors = 1
    i = 1
    #for n in range(1, (number / 2) + 1):
    while i < (number / 2):
        if not number % i:
            factors += 1
        i += 1

    return factors


def get_triangle(over_factors):
    i = 1
    number = triangle_number(i)
    factors = numbers_of_factors(number)

    while factors <= over_factors:
        i *= 20
        number = triangle_number(i)
        factors = numbers_of_factors(number)
        print factors, number

    return number

#print get_triangle(500)
