#include <iostream>
using namespace std;

class Person{
public:
    void show(){
        if(this==NULL){
            return;
        }
        cout<<m_age<<endl;
    }
    int m_age=10;

};

void test01(){
    Person *p=NULL;
    p->show();
}

int main()
{

    test01();

}
