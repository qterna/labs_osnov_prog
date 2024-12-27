#include <iostream>
using namespace std;

int main() {
    int n, first_digit, count = 0;
    
 
    cout << "Введите натуральное число: ";
    cin >> n;
    

    first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;  
    }
    

    int temp = n;
    while (temp > 0) {
        temp /= 10;  
        count++;   
    }
    
 
    cout << "Количество цифр: " << count << endl;
    cout << "Первая цифра: " << first_digit << endl;
    
    return 0;
}