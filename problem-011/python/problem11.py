class Matrix(object):

    def __init__(self, matrix):
        self.matrix = matrix

    def greatest_line_product(self, qnt):
        products = []
        line_num = len(self.matrix)

        for i in range(line_num):
            for j in range(len(self.matrix[i]) - 1):
                product = 1
                n = qnt

                while n > 0: # multiply n items
                    if len(self.matrix[i]) > j+(n-1):
                        product *= self.matrix[i][j+(n-1)]
                    n -= 1

                products.append(product)

        return max(products)

    # square matrices only
    def greatest_column_product(self, qnt):
        products = []
        line_num = len(self.matrix)

        for i in range(line_num - 1):
            for j in range(len(self.matrix[i])):
                product = 1
                n = qnt

                while n > 0: # multiply n items
                    if len(self.matrix) > i+(n-1):
                        product *= self.matrix[i+(n-1)][j]
                    n -= 1

                products.append(product)

        return max(products)

    def greatest_diagonal_product(self, qnt):
        products = []
        line_num = len(self.matrix)

        for i in range(line_num):
            for j in range(len(self.matrix[i])):
                # import pdb; pdb.set_trace()
                lproduct = rproduct = 1
                n = qnt

                while n > 0: # multiply n items
                    if len(self.matrix) > i+(n-1) and len(self.matrix[i]) > j+(n-1):
                        lproduct *= self.matrix[j+(n-1)][i+(n-1)]

                    if len(self.matrix) > i+(n-1) and j-(n-1) >= 0:
                        rproduct *= self.matrix[i+(n-1)][j-(n-1)]

                    n -= 1

                products.append(lproduct)
                products.append(rproduct)

        return max(products)
