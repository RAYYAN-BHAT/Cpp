#include <iostream>

using namespace std;


int callByReference(int &num) {
    num += 10; // Modifying the original variable
    return num;
}
int main() {
    int a = 10;
    int b = 20;

    // Using references
    int &refA = a; // refA is a reference to a
    int &refB = b; // refB is a reference to b

    cout << "Before modification:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    // Modifying values using references
    refA += 5; // This will modify 'a'
    refB += 10; // This will modify 'b'

    cout << "After modification:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    // Calling function with reference parameter
    int result = callByReference(a);
    cout << "After callByReference, a: " << a << ", result: " << result << endl;

    return 0;
}