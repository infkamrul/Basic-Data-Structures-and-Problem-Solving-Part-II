#include <bits/stdc++.h>

using namespace std;

void func(int &p)
{
    p=12;
}

int main()
{
    int x=10;
    int *y=&x;

    cout<<x<<endl<<y<<endl<<*y<<"\n";
    func(x);
    cout<<x<<endl;
}
