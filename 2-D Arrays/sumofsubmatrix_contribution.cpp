// optimal solution with time complexity O(n^2)
//This code considers the contribution of all the individual cells to the final sum and multiplies the cells that many times directly
#include <iostream>
using namespace std;

int main()
{
    int l, b, sum = 0, x, y;
    cout << "Enter length and breadth of matrix: ";
    cin >> l >> b;
    int a[l][b];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> a[i][j];
        }
    }
    l--;
    b--;
    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            x = (i + 1) * (j + 1);
            y = (l - i + 1) * (b - j + 1);
            sum += a[i][j] * x * y;
        }
    }
    cout << sum;
}