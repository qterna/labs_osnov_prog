#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;

    cout << "Простые множители числа " << n << ": ";

    int divisor = 2; 
    do {
      
        while (n % divisor == 0) {
            cout << divisor << " "; 
            n /= divisor;           
        }
        divisor++;  
    } while (n > 1);  

    cout << endl;

    return 0;
}