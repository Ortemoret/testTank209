#ifndef TANK_H
#define TANK_H


class tank
{
private:
    int m_hp;
    int m_damage;
        std::string m_name;

public:
    tank(int hp = 100, int dmg = 50, std::string  name = "tank 0");

    tank(const tank & othertank);


    void shoot(tank & othertank);
    void show();
};
#endif // TANK_H
