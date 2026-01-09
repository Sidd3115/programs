#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i;
    int max, min;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    max = min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}

