#include <iostream>
using namespace std;

int stack[5];      
int top=-1;      

int main() {
    int choice, value;

    do {
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Peek";
        cout<<"\n4. Is Empty";
        cout<<"\n5. Is Full";
        cout<<"\n6. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        switch(choice) {

            case 1:   
            cout<<"Push\n";
                if(top==4) {
                    cout<<"Stack is Full";
                } else {
                    cout<<"Enter value:";
                    cin>>value;
                    top++;
                    stack[top]=value;
                    cout<<"Pushed Successfully";
                }
                break;

            case 2:  
            cout<<"Pop\n";
                if(top==-1) {
                    cout<<"Stack is Empty";
                } else {
                    cout<<"Popped element:"<<stack[top];
                    top--;
                }
                break;

            case 3:  
            cout<<"Peek\n";
                if(top==-1) {
                    cout<<"Stack is Empty";
                } else {
                    cout<<"Top element:"<<stack[top];
                }
                break;

            case 4:   
            cout<<"Is Empty\n";
                if(top==-1)
                    cout<<"Stack is Empty";
                else
                    cout<<"Stack is Not Empty";
                break;

            case 5:   
            cout<<"Is Full\n";
                if(top==4)
                    cout<<"Stack is Full";
                else
                    cout<<"Stack is Not Full";
                break;

            case 6:
                cout<<"Program Ended";
                break;

            default:
                cout<<"Invalid Choice";
        }

    } while(choice!=6);

    return 0;
}
