#include <stdio.h>

const char* getSuitName(int suitNumber) {
    switch (suitNumber) {
        case 1: return "Пики";
        case 2: return "Трефы";
        case 3: return "Бубны";
        case 4: return "Червы";
        default: return "Некорректный номер масти";
    }
}

int main() {
    int suitNumber;
    printf("Введите номер масти (1-4): ");
    scanf("%d", &suitNumber);
    printf("Масть: %s\n", getSuitName(suitNumber));

    return 0;
}
