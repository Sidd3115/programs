#include <iostream>
using namespace std;
int main()
{
int arr[6], i, elem;
cout << "Enter element:";
for (i = 0; i < 5; i++)
{
cin >> arr[i];
}
cout << "Enter element to insert:";
cin >> elem;
arr[5] = elem;
cout << "The new array is:\n";
for (i = 0; i < 6; i++)
{
cout << arr[i] << " ";
}
cout << endl;
return 0;
}

