#include <bits/stdc++.h>

using namespace std;

class Studens
{
public:
    string name;
    int id;
    int reg;

    void print_info()
    {
        cout<<name<<" "<<id<<" "<<reg<<endl;
    }
};

int main()
{
    Studens s;
    s.name="Kamrul islam";
    s.id=477582;
    s.reg=1502074288;
    s.print_info();
}
