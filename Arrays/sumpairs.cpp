//WONT PRINT 2 times if same element is repeated in araay. time complexity O(n)
#include <bits/stdc++.h>
using namespace std;

void pairedElements(int arr[],
                    int sum, int n)
{

    int low = 0;

    int high = n - 1;

    while (low < high)

    {

        if (arr[low] + arr[high] == sum)

        {

            cout << "The pair is : (" << arr[low] << ", " << arr[high] << ")"<< endl;
        }

        if (arr[low] + arr[high] > sum)

        {

            high--;
        }

        else

        {

            low++;
        }
    }
}

// Driver code
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    pairedElements(arr, 5, n);
}
