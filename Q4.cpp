#include <iostream>
#include <string>
using namespace std;
int main()
{
    { // REVERSE OF AN ARRAY
        int x[20], temp, n, i, j;
        cout << "enter num of elements: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "\nEnter elements :";
            cin >> x[i];
        }
        for (i = 0, j = n - 1; i <= n / 2; i++, j--)
        {
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
        for (i = 0; i < n; i++)
        {
            cout << x[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << x[i] << endl;
        }
    }

    {
        // MATRIX MULTIPLICATION
        int x[20][20], y[20][20], z[20][20], i, j, k, m, n, p, q;
        cout << "enter num of rows for 1st matrix: ";
        cin >> m;
        cout << "Enter num of col for 1st matrix: ";
        cin >> n;
        cout << "enter num of rows for 2nd matrix: ";
        cin >> p;
        cout << "enter num of col for 2nd matrix: ";
        cin >> q;
        if (p == q)
        {
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << "enter element for 1st matrix: ";
                    cin >> x[i][j];
                }
            }
            cout << "\n";
            for (i = 0; i < p; i++)
            {
                for (j = 0; j < q; j++)
                {
                    cout << "enter element for 2st matrix: ";
                    cin >> y[i][j];
                }
            }
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    z[i][j] = 0;
                    for (k = 0; k < n; k++)
                    {
                        z[i][j] += x[i][j] * y[i][j];
                    }
                }
            }
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << z[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "enter valid matrix";
        }
    }

    {
        // TRANSPOSE OF MATRIX
        int x[20][20], y[20][20], i, j, m, n;
        cout << "enter num of rows: ";
        cin >> m;
        cout << "Enter num of col: ";
        cin >> n;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "enter element: ";
                cin >> x[i][j];
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                y[j][i] = x[i][j];
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << y[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
