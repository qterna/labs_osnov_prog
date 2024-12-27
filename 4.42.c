#include <stdio.h>

int main() {
    int n, first_digit, count = 0;
    printf("Введите натуральное число: ");
    scanf("%d", &n);
    first_digit = n;  
    while (first_digit >= 10) {
        first_digit /= 10;  
    }
    
    int temp = n;
    while (temp > 0) {
        temp /= 10;  
        count++;     
    }
    
    printf("Количество цифр: %d\n", count);
    printf("Первая цифра: %d\n", first_digit);
    
    return 0;
}
