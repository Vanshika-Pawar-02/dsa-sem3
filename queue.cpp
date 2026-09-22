#include <iostream>
using namespace std;

#define MAX 5
int q[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) return; // Overflow
    if (front == -1) front = 0;
    q[++rear] = val;
}

void dequeue() {
    if (front == -1 || front > rear) return; // Underflow
    cout << "Popped: " << q[front++] << endl;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue(); // Output: Popped: 10
    dequeue(); // Output: Popped: 20

    return 0;
}