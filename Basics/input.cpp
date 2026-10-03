#include <iostream>

using namespace std;

int main()
{
    /*
    =========================
            INPUT - cin
    =========================

    cin is used to take input from the user.

    Syntax:

    cin >> variable;

    '>>' is called the extraction operator.
    It extracts data entered by the user and stores it
    in the variable.
    */


    // =========================
    // 1. INPUT AN INTEGER
    // =========================

    int age;

    cin >> age;

    // If user enters:
    // 20

    // age will contain:
    // 20


    // =========================
    // 2. INPUT A FLOAT
    // =========================

    float marks;

    cin >> marks;

    // Example input:
    // 95.5


    // =========================
    // 3. INPUT A DOUBLE
    // =========================

    double price;

    cin >> price;


    // =========================
    // 4. INPUT A CHARACTER
    // =========================

    char grade;

    cin >> grade;

    // Example input:
    // A


    // =========================
    // 5. INPUT A STRING
    // =========================

    string name;

    cin >> name;

    // Example input:
    // Alex

    // name will contain:
    // "Alex"


    // =========================
    // 6. INPUT MULTIPLE
    //    VARIABLES
    // =========================

    int a, b;

    cin >> a >> b;

    // Example input:
    // 10 20

    // a = 10
    // b = 20


    // =========================
    // 7. INPUT DIFFERENT
    //    DATA TYPES
    // =========================

    int age2;
    double marks2;
    char grade2;

    cin >> age2 >> marks2 >> grade2;

    // Example input:
    // 20 95.5 A

    // age2   = 20
    // marks2 = 95.5
    // grade2 = 'A'


    // =========================
    // 8. TAKING INPUT WITH
    //    A PROMPT
    // =========================

    int number;

    cout << "Enter a number: ";
    cin >> number;

    // cout displays the message.
    // cin takes the user's input.


    // =========================
    // 9. INPUT AND OUTPUT
    //    TOGETHER
    // =========================

    int x;

    cout << "Enter x: ";
    cin >> x;

    cout << "You entered: " << x;


    return 0;
}
