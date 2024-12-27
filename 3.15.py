def print_fungi(k):
    if k % 10 == 1 and k % 100 != 11:
        suffix = "гриб"
    elif k % 10 in [2, 3, 4] and not (k % 100 in [12, 13, 14]):
        suffix = "гриба"
    else:
        suffix = "грибов"

    print(f"Мы нашли {k} {suffix} в лесу.")

k = int(input("Введите количество грибов: "))
print_fungi(k)