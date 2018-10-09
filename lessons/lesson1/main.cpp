/*
 * this is my first program,
 * I'll start from declearing comments
 * and finish with large knowladge.
 * Codding and have fun!
*/
#include <iostream>

// using standard library namespace
using namespace std;

// begin execution of main function
// point of start yor program
// without this function my program won't be working
int main(int argc, char **argv)
{
    // keep in mind 'cout' - console output, 'endl' - is end of line
    cout << "Hello World!" << endl;
    cout << "Count of main args: " << argc << endl;
    cout << "Value of main args: " << argv[0]    << " " << argv[1] << endl;

    // always return 0 if your programm successfuly exec.
    return 0;
}
