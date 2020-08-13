#include <iostream>
using namespace std;

class Person{

public:
    Person(int age){
        this->age=age;
        //Person::age=age;
    }

    Person addPerson(Person &p){
        this->age+=p.age;
        return *this;
    }

    int age;
};


void test01(){
    Person p1(10);
    // cout<<p1.age<<endl;
    Person p2(10);
    p2.addPerson(p1).addPerson(p1);
    cout<<p2.age<<endl;
}

int main (){
    test01();
    system("pause");

}
