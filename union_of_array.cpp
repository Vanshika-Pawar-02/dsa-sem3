#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n1 = 5, n2 = 4;

    int i = 0, j = 0;

    cout << "Union: ";
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        } else if (arr2[j] < arr1[i]) {
            cout << arr2[j] << " ";
            j++;
        } else {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    while (i < n1) {
        cout << arr1[i] << " ";
        i++;
    }

    while (j < n2) {
        cout << arr2[j] << " ";
        j++;
    }

    cout << "\n";

    return 0;
}