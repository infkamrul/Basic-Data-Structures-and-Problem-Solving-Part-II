#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *x=new int;
    *x=10;
    cout<<x<<endl<<*x<<endl;

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<arr<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete x;
    delete[] arr;

}
