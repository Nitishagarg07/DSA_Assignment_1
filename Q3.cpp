#include <iostream>
using namespace std;
int main()
{
    int x[20], n, i, j, temp, k, choice;
    cout << "enter num of elements: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter elements :";
        cin >> x[i];
    }
    cout << "Enter number of rotations: ";
    cin >> k;
    cout << "1. Left Rotation";
    cout << "\n2. Right Rotation";
    cout << "\nEnter choice: ";
    cin >> choice;
    if (choice == 1)
    {
        for (j = 0; j < k; j++)
        {
            temp = x[0];
            for (i = 0; i < n - 1; i++)
            {
                x[i] = x[i + 1];
            }
            x[n - 1] = temp;
        }
    }
    else if (choice == 2)
    {
        for (j = 0; j < k; j++)
        {
            temp = x[n - 1];
            for (i = n - 1; i > 0; i--)
            {
                x[i] = x[i - 1];
            }
            x[0] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}
