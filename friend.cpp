#include <iostream>
#include <string>

using namespace std;

class Home
{
    friend void goodgay(Home &home);
public:
    Home()
    {
        m_bedroom = "bedroom";
        m_sittingroom = "sittingroom";
    }
    string m_sittingroom;

private:
    string m_bedroom;
};

void goodgay(Home &home)
{
    cout << "your friend goes to your:" << home.m_sittingroom << endl;
    cout << "your friend goes to your:" << home.m_bedroom  << endl;
}

void test01()
{
    Home h;
    goodgay(h);
}
int main()
{
    test01();
    system("pause");
}
