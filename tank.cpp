#include "tank.h"
#include "iostream"
using namespace std;

tank::tank(int hp, int dmg, string  name) :
    m_hp(hp), m_demage(dmg), m_name
{

}
    tank::tank(const tank & othertank)
    {
        this->m_hp = othertank.m_hp;
        this->m_damage = othertank.m_damage;
        cout << "Copy Constructor";
    }

void tank::shoot(tank & othertank){
    othertank.m_hp -= this->m_damage;
}
void tank::show()
{
    cout << "Name =" << m_name << endl;
    cout << "HP = " << m_hp << endl;
    cout << "DMG = " << m_damage << endl;
}
