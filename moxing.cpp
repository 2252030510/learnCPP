#include <iostream>
using namespace std;



class Person {
public:
    int m_A=10;
    static int m_b;
    void func(){

    }
    static void func2(){}

};
int Person::m_b=10;
void test01(){
    Person p;
    cout<<sizeof(p)<<endl;
}

int main(){
    test01();

    system("pause");
}
