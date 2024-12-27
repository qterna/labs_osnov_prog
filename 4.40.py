for num in range(10, 100):
    tens = num // 10
    ones = num % 10
    sum_of_squares = tens ** 2 + ones ** 2
    if sum_of_squares % 13 == 0:
        print(num)