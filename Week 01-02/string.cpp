#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;

    s.erase(s.begin());

    s.pop_back();

    cout<<s<<endl;

    for (int i=0; i<=s.size()-1; i++)
        s[i]=s[i]+1;
    cout<<s;
}
