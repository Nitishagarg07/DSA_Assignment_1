#include <iostream>
using namespace std;
int main()
{
    int a[10][10], r, c, i, j, sum;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element: ";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        cout << "Sum of elements in Row " << i << " = " << sum << endl;
    }
    for (j = 0; j < c; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        cout << "Sum of elements in Column " << j << " = " << sum << endl;
    }
    return 0;
}
