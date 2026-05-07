#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
    Node *front, *rear;
   public:
    Queue() {
        front = rear = NULL;
    }
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " inserted into queue\n";
    }
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        cout << front->data << " deleted from queue\n";
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete temp;
    }
    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        q.enqueue(value);
    }
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
