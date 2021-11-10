//brute force method having O(n^6) time complexity 
#include <iostream>
using namespace std;

int main()
{
    int l, b, sum = 0;
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
            for (int p = i; p <= l; p++)
            {
                for (int q = j; q <= b; q++)
                {
                    for (int m = i; m <= p; m++)
                    {
                        for (int n = j; n <= q; n++)
                        {
                            sum += a[m][n];
                        }
                    }
                }
            }
        }
    }
    cout << "Sum of all submatrices is: " << sum;
}

