#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i, choice, x;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    do
    {
        cout << "\nMenu";
        cout << "\n1. Display Array";
        cout << "\n2. Insert Element ";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array elements: ";
                for(i = 0; i < n; i++)
                    cout << a[i] << " ";
                break;

            case 2:
                cout << "Enter element : ";
                cin >> x;
                a[n] = x;
                n++;
                cout << "Element inserted";
                break;

            case 3:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }
    }
    while(choice != 3);

    return 0;
}

