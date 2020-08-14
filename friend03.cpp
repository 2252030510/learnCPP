#include <iostream>
#include <string>
using namespace std;

class Building;
class Goodgay
{
public:
    Goodgay();
    void visit();
    void visit02();

private:
    Building *building;
};

class Building
{
    friend void Goodgay::visit();
public:
    Building();

public:
    string sittingroom;

private:
    string bedroom;
};

Building::Building()
{
    sittingroom = "sittingroom";
    bedroom = "bedroom";
}

Goodgay::Goodgay()
{
    building = new Building;
}
void Goodgay::visit()
{
    cout << "your friend goes to your:" << building->sittingroom << endl;
    cout << "your friend goes to your:" << building->bedroom << endl;
}
void Goodgay::visit02()
{
    cout << "your friend goes to your:" << building->sittingroom << endl;

}
void test01()
{
    Goodgay gg;
    gg.visit();
    gg.visit02();
}
int main()
{
    test01();
    system("pause");
}
