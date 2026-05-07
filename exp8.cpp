#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() {
        top = NULL;
    }
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack\n";
    }
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        cout << top->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Stack s;
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        s.push(value);
    }
    s.display();
    s.pop();
    s.display();
    return 0;
}
