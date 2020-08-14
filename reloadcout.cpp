#include <iostream>
#include <string>
using namespace std;

class Person
{

public:
    int m_A=10;
    int m_B=10;

    Person operator<<(const Person &p)
    {
        //p.operator<<(p2);      p<<cout
        cout<<"m_A="<<m_A;
        cout<<"m_B="<<m_B;
    }
};




void test01(){
    Person p;
    Person p2;
    p2.operator<<(p);
    p<<p2;

    }
int main(){
    test01();
    system("pause");
}
