#include <iostream>
using namespace std;

class Student {
    
    string name;
    int roll_number;
    double marks;

    public:
    void set_data(string n, int roll_num, double m);
    void display();
};
void Student::set_data(string n, int roll_num, double m) {
        name = n;
        roll_number = roll_num;
        marks = m;
    }

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