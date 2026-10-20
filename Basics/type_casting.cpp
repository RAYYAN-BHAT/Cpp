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

    return 0;
}
