#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {2, 6, 8, 10, 12, 14, 15, 18, 19, 28, 30};

    int low = 0;
    int high = arr.size() - 1;
    int target = 16;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (target == arr[mid])
        {
            ans = mid;
            break;
        }
        if (target > arr[mid])
        {
            low = mid + 1;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}