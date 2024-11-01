#include <iostream>

double transform(double x) {
    double a = -30.0; // нижняя граница нового диапазона
    double b = 10.0;  // верхняя граница нового диапазона
    return x * (b - a) + a;
}

int main()
{
    setlocale(LC_ALL, "RU");
    double input;

    //имитация рандомного числа
    std::cout << "Введите число от 0 до 1: ";
    std::cin >> input;

    double transformed = transform(input);
    std::cout << "Преобразованное число: " << transformed << std::endl;

    return 0;
}