def count_unique_elements(a):
    if not a:
        return 0
    count = 1
    for i in range(1, len(a)):
        if a[i] != a[i - 1]:
            count += 1
    return count

a = list(map(int, input("Введите элементы массива: ").split()))
print("Количество различных элементов в массиве:", count_unique_elements(a))