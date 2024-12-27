#include <stdio.h>

int main() {
    int sum = 0;
    int num = 1; 

    while (num <= 99) {
        sum += num;  
        num += 2;    
    }

    printf("Сумма всех нечетных чисел от 1 до 99: %d\n", sum);

    return 0;
}