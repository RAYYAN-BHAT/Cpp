#include <iostream>
using namespace std;

/* Inline functions are 
fast functions that are expanded at compile time.
they should only be used for small, frequently called functions */

inline int add(int a, int b) {
    return a + b;
}
int main() {
    int num1 = 5;
    int num2 = 10;

    // Using the inline function to add two numbers
    int sum = add(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}