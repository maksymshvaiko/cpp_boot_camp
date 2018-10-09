#include <iostream>
#include <iomanip>

// variables

int main()
{
    // std::cin

    char val;

    std::cout << "Enter value of var: ";

    // keep in mind cin = console input
    std::cin >> val;

    std::cout << "Value of variable val is -> " << val << std::endl;

    int a = 12;         // 4byte 32(bits)
    double a1 = 14;     // 4byte 32(bits)

    std::cout << "Size of variable a1 : " << sizeof(a1) << std::endl;
    std::cout << "Value of variable a1 : " << a1 << std::endl;

    float b1 = 12.12;     // 8 byte (64 bits)
    float b2 = 2.11;      // 4 byte (32 bits)

    double b_res = b1 - b2;

    std::cout.precision(5);
    std::cout << "Res of B : " << b_res << std::endl;
    float d = b1 - b2;
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);

    std::cout.precision(50);
    std::cout << d << std::endl;
    std::cout << "Size of variable b1 : " << sizeof(b1) << std::endl;
    std::cout << "Size of variable b2 : " << sizeof(b2) << std::endl;
    std::cout << "Value of variable b1 : " << b1 << std::endl;
    int hex = 0xb2;
    char ch = 'Q';      // 1 byte (8 bits)
    std::cout << hex << std::endl;

//    return 0;
    std::cout << "Value of var ch : " << ch << std::endl;
    std::cout << "Size of variable ch : " << sizeof(ch) << std::endl;

    bool flag = false;  // 1 byte (8 bits)

    double res1 = a + a1;

    res1 = a1 - a;

    res1 = a1 * a;

    res1 = 5.0 / a;

    int val1 = 11;
    int val2 = 28;

    int res2 = val2 % val1;
    std::cout << "Value of res1 : " << res2 << std::endl;



    return 0;

}
