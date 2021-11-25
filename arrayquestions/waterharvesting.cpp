/* This is the optimal solution with time complexity O(n).
In this solution we have to understand that we have to consider the leftmost and the rightmost element. 
No matter what elements are in between, the at the very least, the water between these two ends will be contained.
We find the lower element of the leftmost and the rightmost.
We then start traversing from whichever side is lower since that is the limiting side.
If we find an elevation greater than leftmost, we update leftmost and dont add any water for that iteration. 
Similar for rightmost.
This is because now the containing capacity has increased.
*/ 
#include <iostream>
using namespace std;

int maxWater_optimized(int arr[], int n)
{
    int water = 0;     // To store the final ans
    int left_max = 0;  // Which stores the current max height of the left side
    int right_max = 0; // Which stores the current max height of the right side
    int lo = 0;        // Counter to traverse from the left_side
    int hi = n - 1;    // Counter to traverse from the right_side
    while (lo <= hi)
    {
        if (arr[lo] < arr[hi])
        {
            if (arr[lo] > left_max)
            {
                left_max = arr[lo]; // Updating left_max
            }
            else
            {
                water += left_max - arr[lo]; // Calculating the ans
            }
            lo++;
        }
        else
        {
            if (arr[hi] > right_max)
            {
                right_max = arr[hi]; // Updating right_max
            }
            else
            {
                water += right_max - arr[hi]; // Calculating the ans
            }
            hi--;
        }
    }
    return water;
}

int main()
{
    int n, sum = 0, end;
    bool flag = false;
    cin >> n;
    int a[n];
    cout << "Enter elevation graph: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int rainwater=maxWater_optimized(a,n);
    cout<<"The amount of rainwater harvested is: "<<rainwater;
}