#include <iostream>

using namespace std;

int main()
{
    /*
    =========================
           OUTPUT - cout
    =========================

    cout stands for character output.
    cout is used to display/output data on the screen.
    No format specifiers required.

    Syntax:

    cout << data;

    '<<' is called the insertion operator.
    It sends the data on its right to cout.
    */


    // =========================
    // 1. OUTPUTTING TEXT
    // =========================

    cout << "Hello World";
    // Output:
    // Hello World


    // =========================
    // 2. OUTPUTTING CHARACTERS
    // =========================

    cout << 'A';
    // Output:
    // A


    // =========================
    // 3. OUTPUTTING INTEGERS
    // =========================

    int age = 20;

    cout << age;
    // Output:
    // 20


    // =========================
    // 4. OUTPUTTING FLOAT
    // =========================

    float price = 25.5f
    ;

    cout << price;
    // Output:
    // 25.5


    // =========================
    // 5. OUTPUTTING DOUBLE
    // =========================

    double pi = 3.14159265;

    cout << pi;
    // Output:
    // 3.14159265





    // =========================
    // 6. OUTPUTTING MULTIPLE
    //    DATA TYPES
    // =========================
    // Use multiple << operators

    int marks = 95;
    double percentage = 95.5;
    char grade = 'A';

    cout << marks << percentage << grade;

    // Output:
    // 9595.5A

    // There is no automatic space between
    // different outputs.


    // =========================
    // 7. ADDING SPACES
    // =========================

    cout << marks << " " << percentage << " " << grade;

    // Output:
    // 95 95.5 A


    // =========================
    // 8. MIXING TEXT AND VARIABLES
    // =========================

    cout << "Marks = " << marks;

    // Output:
    // Marks = 95


    cout << "Marks = " << marks
         << ", Grade = " << grade;

    // Output:
    // Marks = 95, Grade = A


    // =========================
    // 9. OUTPUTTING EXPRESSIONS
    // =========================

    int a = 10;
    int b = 20;

    cout << a + b;

    // Output:
    // 30

    // The expression is evaluated first,
    // then its result is sent to cout.


    // =========================
    // 10. OUTPUTTING MULTIPLE
    //     EXPRESSIONS
    // =========================

    cout << a + b << " " << a * b;

    // Output:
    // 30 200



    // =========================
    // 11. PRINTING A % SIGN
    // =========================

    cout << "100%";

    // Unlike printf() in C,
    // % does NOT need special treatment
    // in cout.


    // =========================
    // 12. PRINTING A VARIABLE
    //     WITH TEXT
    // =========================

    string name = "Alex";
    int age2 = 20;

    cout << "My name is " << name
         << " and I am " << age2 << " years old.";

    // Output:
    // My name is Alex and I am 20 years old.


    return 0;
}
