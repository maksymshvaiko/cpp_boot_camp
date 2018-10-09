#include <iostream>

int main()
{
    int val = 0;
    int first, second, third, fourth, five, tmp;

    std::cout << "Enter integer from 10000 to 99999 : ";
    std::cin >> val;

    first = val / 10000;
    tmp = val % 10000;
    second = tmp / 1000;
    tmp = val % 1000;
    third = tmp / 100;
    tmp = val % 100;
    fourth = tmp / 10;
    tmp = val % 10;
    five = tmp / 1;

    std::cout << "First number -> " << first << std::endl;
    std::cout << "Seccond number -> " << second << std::endl;
    std::cout << "Third number -> " << third << std::endl;
    std::cout << "Fourth number -> " << fourth << std::endl;
    std::cout << "Five number -> " << five << std::endl;

    return  0;
    // градусы в цельсиях
        double C;
    // галоны
        double G;
    // долары
        double D;

    std::cin >> C >> G >> D;

    // градусы в форенгейтах
     double F = C * 1.8 + 32;
    std::cout << "Value of F = " << F << std::endl;

    // литры
     double L = G * 3.7;
    std::cout << "Value of L = " << L << std::endl;

    // гривны
     double GRN = D * 28.25;
    std::cout << "Value og GRN = " << GRN << std::endl;

    // расчитываем ИМТ (индекс масы тела)
    double m ;
    double h ;

    std::cin >> m >> h;

    // расчет ИМТ
    double IMT = m / (h * h);
    std::cout << "Velue of IMT = " << IMT << std::endl;

    return 0;
}
