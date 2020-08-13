#include <iostream>
using namespace std;

class Person
{
public:

    Person (){

    }



    void showPerson() const
    {
        m_b = 10;
    }

    void func(){

    }
    int m_a;
    mutable int m_b;
};

void test01()
{
    const Person p;
    p.showPerson();

}

int main()
{

    test01();
    system("pause");
}
