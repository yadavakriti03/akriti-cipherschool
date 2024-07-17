#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort in Descending Order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Array sorted in descending order: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble Sort in Ascending Order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Array sorted in ascending order: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
