#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 4, 5, 6};
    int B[] = {2, 3, 5, 7};
    int n1 = 5, n2 = 4;

    int i = 0, j = 0;

    cout << "Set Difference (A - B): ";
    while (i < n1 && j < n2) {
        if (A[i] < B[j]) {
            cout << A[i] << " ";
            i++;
        } else if (A[j] < B[i]) {
            j++;
        } else {
            i++;
            j++;
        }
    }

    while (i < n1) {
        cout << A[i] << " ";
        i++;
    }

    cout << "\n";

    return 0;
}