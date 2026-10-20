#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // Using range-based for loop to iterate over the array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}