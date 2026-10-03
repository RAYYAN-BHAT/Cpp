#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    =========================
          DATA TYPES
    =========================

    A data type tells C++:

    1. What kind of data a variable stores
    2. How much memory is generally needed
    3. What operations can be performed on it

    Examples:

    int      -> whole numbers
    float    -> decimal numbers
    double   -> more precise decimal numbers
    char     -> single character
    bool     -> true or false
    string   -> sequence of characters
    */


    // =========================
    // 1. int
    // =========================

    int age = 20;

    // Stores whole numbers.
    // Examples:
    // -10, 0, 25, 100

    cout << age;


    // =========================
    // 2. float
    // =========================

    float temperature = 36.5f;

    // Stores decimal numbers.
    // The 'f' tells C++ that 36.5 is a float literal.

    cout << temperature;


    // =========================
    // 3. double
    // =========================

    double pi = 3.1415926535;

    // Also stores decimal numbers.
    // double generally provides more precision than float.

    cout << pi;


    // =========================
    // 4. char
    // =========================

    char grade = 'A';

    // Stores a SINGLE character.
    // Character is written using single quotes.

    cout << grade;

    // Examples:
    // 'A'
    // 'x'
    // '7'
    // '@'


    // =========================
    // 5. bool
    // =========================

    bool isStudent = true;

    // bool stores one of two logical values:
    //
    // true
    // false

    cout << isStudent;

    // By default, cout displays:
    //
    // true  -> 1
    // false -> 0


    // =========================
    // 6. string
    // =========================

    string name = "Alex";

    // string stores a sequence of characters.
    // It is written using double quotes.

    cout << name;


    return 0;
}
