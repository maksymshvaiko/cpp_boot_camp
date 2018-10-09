#include <iostream>

int main()
{
    // Scope -> operator if
    {
        // true, false
        // Any value wich -ne 0 is true
        // 0 is false
        // if (expression)
        // (expresion) returns only true or false

        int a = 10;
        int b = 10;
        int c = 15;
        int d = 15;

        if(a == b) {
            std::cout << "Var a == b and : " << (a == b) << std::endl;
        }

        // a != c
        if(a == c) {
            //Something went wrong
        }
        // Example of using operator && (and/bites multiplication)
        if(a == b && c == d) {
            std::cout << "Var a == b and var c == d" << std::endl;
        }

        // in this case c != a
        if(a == b && c == a) {
            //Something went wrong
        }
//         Example of using operator || (or/bites sum)
        if(a == b || c == b) {
            std::cout << "Variable a == b but vat c != b, "\
            "anyway we are in this scope" << std::endl;
        }

        // What will happen...???
        if(a == c || b == d) {
            std::cout << "Hmmm..." << std::endl;
        }

        // Example of using logical operator != (does not equal)
        if(a != b) {
            std::cout << "Yes, variable a doesn't equal var c" << std::endl;
        }

        // Example of using logical operation ! (not)
        if(!(a == c && b == d)) {
            std::cout << "Yes, this scope will execute :)" << std::endl;
            // if variable a == 0 and we execute next part of code it will done
            // a = 0;
            // if(!a) {...} // execute success!
            // if(a) {...} // wen't be executed :(
        }
        // Example of less or eq
        if(a <= b) {
            std::cout << "Variable a less or equal b" << std::endl;
        }

        // Example of less
        if(a < b) {
            // Something went wrong as a == b
        }
        // One more example of less
        if(a < c) {
            std::cout << "Variable a less than var c" << std::endl;
        }
        // Example greater or eq
        if(a >= b) {
            std::cout << "It's also okay as var a greater or eq than b" << std::endl;
        }
        // Yes, we can use logical and in this case also
        if(a < c && b < d) {
            std::cout << "Var a -le than c and b -le than d" << std::endl;
        }
        // Use logical or with operators -le and -gr
        // *** Max don't forget about verification this expressions
        // And what will happen and why?
        if(a < c || b > d) {
            std::cout << "Hmmm...???" << std::endl;
        }
        // What will happen and why?
        if(b > d || a < c) {
            std::cout << "Hmmm...???" << std::endl;
        }
        // What will happen and why?
        if(a > c || b > d) {
            std::cout << "Is it okay???" << std::endl;
        }
    }

    // Scope -> operator if else
    {
        int a = 5;
        if(a == 5) {
            std::cout << "Variable a == " << a <<std::endl;
        } else {
            std::cout << "Variable a != 5 but a == " << a << std::endl;
        }
    }

    // Scope -> operator if ... else if
    {
        int a = 5;
        int b = 3;
        // little example of else if
        if(a == 1) {
            std::cout << "Variable a == 1" << std::endl;
        } else if (a == 2) {
            std::cout << "Variable a == 2" << std::endl;
        } else if (a == 3) {
            std::cout << "Variable a == 3" << std::endl;
        } else if (a == 4) {
            std::cout << "Variable a == 4" << std::endl;
        } else if (a == 5) {
            std::cout << "Variable a == 5" << std::endl;
        } else {
            std::cout << "Variable a is strange :(" << std::endl;
        }
        return  0;

        if (b == 1) {
            std::cout << "Variable b == " << b << std::endl;
        }
        if (b == 2) {
            std::cout << "Variable b == " << b << std::endl;
        }
        if (b == 3) {
            std::cout << "Variable b == " << b << std::endl;
        }
        if (b == 4) {
            std::cout << "Variable b == " << b << std::endl;
        }
        if (b == 5) {
            std::cout << "Variable b == " << b << std::endl;
        }

        int BMI = 0;

        std::cout << "Enter your BMI coefficient: ";
        std::cin >> BMI;

        if(BMI < 15) {
            std::cout << "You are anorexic!" << std::endl;
        } else if (BMI <= 20) {
            std::cout << "You had better to gain weight!" << std::endl;
        } else if (BMI < 25) {
            std::cout << "Congratulation! You have normal weight!" << std::endl;
        } else {
            std::cout << "Sorry, but you are fat :(" << std::endl;
        }
    }
    // Scope -> operator switch
    {

        int val = 1;

        switch (val) {
            case 1: std::cout << "Val = 1\n"; break;
            case 2: std::cout << "Val = 2\n"; break;
            case 3: std::cout << "Val = 3\n"; break;
            case 4: std::cout << "Val = 4\n"; break;
            case 5: std::cout << "Val = 5\n"; break;
        }


        // make simple calculator
        int a = 0;
        int b = 0;

        char operation;

        std::cout << "Please enter A '+,-,*,/,%' B : ";
        std::cin >> a >> operation >> b;

        switch (operation) {
        case '+': std::cout << "a + b = " << a+b << std::endl; break;
        case '-': std::cout << "a - b = " << a-b << std::endl; break;
            // What a problem with this code??
        case '/': std::cout << "a / b = " << a/b << std::endl; break;
        case '*': std::cout << "a * b = " << a*b << std::endl; break;
        case '%': std::cout << "a % b = " << a % b << std::endl; break;
        default: std::cout << "You entered wrong value!" << std::endl;
        }
    }

    return 0;
}
