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

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    float average = (float)sum / size;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
