/* 
This is the intuitive approach with O(n^2) time complexity for the harvesting problem.
We traverse through each element of the array.
We find the maximum element to each elements left and right. 
Then subtract the value of that element from max and add to sum.
*/

#include <iostream>
using namespace std;

int maxWater(int arr[], int n)
{
    // To store the maximum water
    // that can be stored
    int res = 0;
    // For every element of the array
    for (int i = 1; i < n - 1; i++)
    {
        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);
        // Find the maximum element on its right
        int right = arr[i];
        for (int j = i + 1; j < n; j++)
            right = max(right, arr[j]);
        // Update the maximum water
        res = res + (min(left, right) - arr[i]);
    }
    return res;
}

int main()
{
    bool flag = false;
    int n, sum = 0;
    cout << "Enter the number of elements in elevation array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elevation graph: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sum = maxWater(a, n);
    cout << "The amount of harvested rainwater is: " << sum;
}