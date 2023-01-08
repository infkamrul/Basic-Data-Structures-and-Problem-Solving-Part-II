#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int id;
    int age;
    string f_name;
    string m_name;

    Student ()
    {
        //Empty construction for class of object
    }

    Student (string name,int s_id,int s_age,string fatherName,string motherName)
    {
        this->name=name;
        id=s_id;
        age=s_age;
        f_name = fatherName;
        m_name=motherName;
    }

    void print_info()
    {
        cout<<"Name :"<<name<<"  Id: "<<id<<"  Age: "<<age<<"  Father Name: "<<f_name<<"  Mother Name: "<<m_name<<endl;

    }
};

int main()
{
    Student *s= new Student("Kamrul",477582,22,"Tajul Islam","Ruksana Begum");

    s->print_info();
//    (*s).print_info();

//Object array
    //fast empty construction add korte hobe.
    Student s2[5];

    for(int i=0;i<5;i++)
    {
        s2[i]=Student("A",i,15+i,"a","s");
    }

    for(int i=0;i<5;i++)
    {
        s2[i].print_info();
    }


    delete s;


    return 0;

}
