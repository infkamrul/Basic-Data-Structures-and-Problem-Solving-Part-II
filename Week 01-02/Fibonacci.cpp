#include <bits/stdc++.h>

using namespace std;

int called =0;
int save [100];

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    if(save[n]!=0)
        return save[n];

    //fib(n-1) + fib(n-2)
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;

    save[n]=x+y;
    return x+y;
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<called<<endl;

    return 0;
}
