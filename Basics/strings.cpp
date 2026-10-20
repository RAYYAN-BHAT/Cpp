#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    
    // Concatenating two strings
    string result = str1 + str2;

    // length of a string
    cout << "Concatenated String: " << result << endl;
    cout << "Length of the concatenated string: " << result.length() << endl;

    // Accessing individual characters in a string
    cout << "First character: " << result[0] << endl;

    // inputting a string from the user
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput); // cin only reads until the first whitespace, so we use getline to read the entire line

    cout << "You entered: " << userInput << endl;

    // comparison
    if (result == userInput) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }


    return 0;
}