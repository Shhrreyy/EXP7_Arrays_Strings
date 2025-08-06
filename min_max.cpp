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

    int minimum = numbers[0];
    int maximum = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    cout << "Minimum number = " << minimum << endl;
    cout << "Maximum number = " << maximum << endl;

    return 0;
}
