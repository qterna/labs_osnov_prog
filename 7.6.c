#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Введите количество элементов в массиве: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 1; i < n; i += 2) {
        sum += arr[i];
    }
    printf("Сумма элементов, стоящих на четных местах: %d\n", sum);
    
    return 0;
}