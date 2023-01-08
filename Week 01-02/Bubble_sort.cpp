#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int last = n - 1 - i;
        cout << i + 1 << "st "
             << "iteration:\n";

        for (int j = 0; j < last; j++)
        {
            cout << j + 1 << "st "
                 << "step: ";
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
            for (int j = 0; j < n; j++)
                cout << a[j] << " ";
            cout << "\n";
        }
    }
}

/*

6
7 2 13 2 11 4

*/
