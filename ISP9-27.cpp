
#include <iostream>

int main()
{
    const int h = 24;
    std::cout << "Введите количество дней";
    int d;
    std::cin >> d;
    std::cout << (d*h) + " часов в " + d;
}
