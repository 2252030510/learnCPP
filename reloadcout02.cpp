#include <iostream>
#include <string>
using namespace std;

class Person
{

public:
    int m_A=10;
    int m_B=10;

    // Person operator<<(const Person &p)
    // {
    //     //p.operator<<(p2);      p<<cout
    //     cout<<"m_A="<<m_A;
    //cout<<"m_B="<<m_B;
    // }
};
//在类外编写函数
ostream &operator<<(ostream& cout ,Person &p)
{
    cout<<"m_A="<<p.m_A;
    cout<<" m_B="<<p.m_B;
    return cout;
}


void test01(){
    // Person p;
    // Person p2;
    // p2.operator<<(p);
    // p<<p2;

    Person p;
    operator<<(cout,p)<<endl;
    // cout<<p<<endl;

    }
int main(){
    test01();
    system("pause");
}
