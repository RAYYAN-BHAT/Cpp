#include <iostream>
using namespace std;

int main() {
    int num = 10;
    double decimalNum = 5.5;

    // Implicit type casting (promotion)
    double result1 = num + decimalNum; // num is promoted to double
    cout << "Result of implicit type casting: " << result1 << endl;

    // Explicit type casting (type conversion)
    int result2 = static_cast<int>(decimalNum); // decimalNum is explicitly converted to int
    cout << "Result of explicit type casting: " << result2 << endl;


    char c = 'A';
    int b = static_cast<int>(c);
    cout<<b;

    // Other type castings

    const int x = 10;
    int *ptr = const_cast<int*>(&x); // Removing constness
    *ptr = 20; // Modifying the value through the non-const pointer
    cout << "Modified value: " << x << endl;

    
    int num2 = 65;
    char *charPtr = reinterpret_cast<char*>(&num2); // Reinterpreting the int pointer as a char pointer
    cout << "Reinterpreted value: " << *charPtr << endl; // Output


    return 0;
}
