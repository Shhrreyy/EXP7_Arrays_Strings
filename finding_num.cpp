#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int numbers[100];

    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int searchNumber;
    cout << "Enter the number to search: ";
    cin >> searchNumber;

    bool isFound = false;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchNumber) {
            cout << "Number found at position " << i << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "Number not found in the list." << endl;
    }

    return 0;
}
