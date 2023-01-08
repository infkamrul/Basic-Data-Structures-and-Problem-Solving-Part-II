#include <bits/stdc++.h>
using namespace std;

/*
Time complexity = O(n^2)
Memory complexity = O(n)
*/

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        string ans= "No";
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
                ans= "Yes";
        }

        cout<<"Index-> "<<i<<" -> "<<a[i]<<" = "<<ans<<endl;
    }

    return 0;
}
