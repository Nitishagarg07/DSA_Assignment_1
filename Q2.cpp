#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[20], i, j, k, n;
    bool del;
    cout << "Enter number of elements: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        del = false;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                del = true;
                break;
            }
        }
        if (del == true)
        {
            for (k = j; k < n - 1; k++)
            {
                a[k] = a[k + 1];
            }
            n--;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
