#include <iostream>
#include <string>

using namespace std;

class Student {
    
    string name;
    int roll_number;
    double marks;

    // Private by default. They can only be accessed by member functions of the class.
    public:

    // Public member functions can be accessed from outside the class.
    void set_data(string n, int roll_num, double m) {
        name = n;
        roll_number = roll_num;
        marks = m;
    }
    void display();
    protected:
    // Protected member functions can be accessed by derived classes.
    int get_roll_number() {
        return roll_number;
    }
};
// The access level is determined by the declaration inside the class.
void Student::display() {
    cout << "Student Name: " << name << endl;
    cout << "Roll Number: " << roll_number << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student student1;
    student1.set_data("Alice Smith", 101, 95.5);
    student1.display();

    return 0;
}