#include <iostream>
using namespace std;

class bank {
    
    string name;
    int account_number;
    double balance;

public:

void set_data(string n, int acc_num, double bal) {
        name = n;
        account_number = acc_num;
        balance = bal;
    }

    void display() {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    bank account1;
    account1.set_data("John Doe", 123456, 1000.50);
    account1.display();

    return 0;
}