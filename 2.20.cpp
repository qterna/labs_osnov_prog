#include <iostream>

struct Vector {
    double x, y;
};

bool areCollinear(const Vector& v1, const Vector& v2, const Vector& v3) {
    double determinant = v1.x * (v2.y - v3.y) - v1.y * (v2.x - v3.x) + v2.x * v3.y - v2.y * v3.x;
    return determinant == 0;
}

int main() {
    Vector v1, v2, v3;
    std::cout << "Введите координаты вектора a (x1 y1): ";
    std::cin >> v1.x >> v1.y;
    std::cout << "Введите координаты вектора b (x2 y2): ";
    std::cin >> v2.x >> v2.y;
    std::cout << "Введите координаты вектора c (x3 y3): ";
    std::cin >> v3.x >> v3.y;
    if (areCollinear(v1, v2, v3)) {
        std::cout << "Векторы коллинеарны." << std::endl;
    } else {
        std::cout << "Векторы не коллинеарны." << std::endl;
    }

    return 0;
}