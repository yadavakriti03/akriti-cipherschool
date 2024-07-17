#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Ascending order insertion sort
    int key;
    for(int i = 1; i < n; i++){
        key = arr[i];
        int j = i - 1;

        while(arr[j] > key && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Array sorted in ascending order: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Descending order insertion sort
    int arr1[n];
    cout << "Enter array elements again for descending order: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int key1;
    for(int i = 1; i < n; i++){
        key1 = arr1[i];
        int j = i - 1;
        while(arr1[j] < key1 && j >= 0){
            arr1[j + 1] = arr1[j];
            j--;    
        }
        arr1[j + 1] = key1;
    }
    cout << "Array sorted in descending order: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }

    return 0;
}
