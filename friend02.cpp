#include <iostream>
#include <string>
using namespace std;
class Building;
class GoodGay
{

public:
    GoodGay();
    void visit();

private:
    Building *m_building;
};

class Building
{
    friend class GoodGay;

public:
    Building();
    string m_sittingroom;

private:
    string m_bedroom;
};

GoodGay::GoodGay()
{
    m_building = new Building;
}

Building::Building()
{
    m_bedroom = "bedroom";
    m_sittingroom = "sittingroom";
}

void GoodGay::visit()
{

    cout << "your friend goes to your:" << m_building->m_sittingroom << endl;
    cout << "your friend goes to your:" << m_building->m_bedroom << endl;
}
void test01()
{
    GoodGay gg;
    gg.visit();
}
int main()
{
    test01();
    system("pause");
}
