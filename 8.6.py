


def sum_and_product_of_column(matrix, k):
    column_elements = [row[k] for row in matrix]

    column_sum = sum(column_elements)
    column_product = 1
    for elem in column_elements:
        column_product *= elem

    return column_sum, column_product
M = int(input("Введите количество строк матрицы M: "))
N = int(input("Введите количество столбцов матрицы N: "))
matrix = []
print("Введите элементы матрицы (по строкам):")
for i in range(M):
    row = list(map(int, input(f"Строка {i + 1}: ").split()))
    matrix.append(row)

K = int(input("Введите номер столбца K: ")) - 1
if K < 0 or K >= N:
    print("Неправильный номер столбца.")
else:
    column_sum, column_product = sum_and_product_of_column(matrix, K)
    print(f"Сумма элементов K столбца: {column_sum}")
    print(f"Произведение элементов K столбца: {column_product}")