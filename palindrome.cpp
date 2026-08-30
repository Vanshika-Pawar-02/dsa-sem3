#include<iostream>
using namespace std;    
int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;

    int l = 0, r = n - 1;
    bool isPalindrome = true;

    while (l < r) {
        if (arr[l] != arr[r]) {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }

    if (isPalindrome) {
        cout << "Array is a Palindrome\n";
    } else {
        cout << "Array is NOT a Palindrome\n";
    }

    return 0;
}

