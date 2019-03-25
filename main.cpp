#include <QCoreApplication>
#include <iostream>
#include "Fileworker.h"
#include"tank.h"
using namespace std;
int main()
{
    tank tank1; // 100, 50
    tank tank2(50, 25, "t2");

    tank t3 = tank1;
    tank t4(tank2);
    tank1.show();
    cout << endl;
    tank2.show();

    tank1.shoot(tank2);
    cout << endl;
    tank2.show();

    cout << endl;
    t3.show();



    cout << endl;
    t4.show();

    //Fileworker fl;
   // std::cout<<"hello\n";
    //fl.setFilename();
   // fl.setData();
   // fl.objFile.write();
   // fl.readFromFile();
    return 0;

}
