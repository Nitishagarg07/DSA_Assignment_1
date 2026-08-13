#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[20];
    int i, choice;
    int n = 0;
    cout << "1. Create";
    cout << "\n2. Display";
    cout << "\n3. Insert";
    cout << "\n4. Delete";
    cout << "\n5. Linear Search";
    cout << "\n6. Exit";
    do
    {
        cout << "\nEnter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the total number of elements: ";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                cout << "Enter val: ";
                cin >> arr[i];
            }
        }
        break;
        case 2:
        {
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " " << endl;
            }
        }
        break;
        case 3:
        {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            for (i = n; i >= pos; i++)
            {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = val;
            n++;
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        break;
        case 4:
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            for (i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << endl;
            }
        }
        break;
        case 5:
        {
            int val;
            bool found;
            cout << "Enter value to search: ";
            cin >> val;
            found = false;
            for (i = 0; i < n; i++)
            {
                if (arr[i] == val)
                {
                    cout << "Found at position " << i + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Element not found\n";
        }
        break;
        case 6:
            cout << "Exiting......";
            break;
        default:
            cout << "Enter valid choice";
            break;
        }
    } while (choice != 6);
}
