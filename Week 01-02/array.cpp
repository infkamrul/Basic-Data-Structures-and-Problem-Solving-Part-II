#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int nums[n];

    for(int i=0; i<n; i++)
        cin>>nums[i];

    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+nums[i];
    cout<<sum<<endl;

    int x=1;
    for(int i=0; i<n; i++)
        x=x*nums[i];
    cout<<x<<endl;
}
