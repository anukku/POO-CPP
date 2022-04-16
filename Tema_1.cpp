#include <iostream>
using namespace std;
class AVION
{
public:
    int ore_zbor;
    string stare_avion;
    string nume_avion;
    void set_ore(int ore)
    {
        ore_zbor = ore;
    }
    void set_stare(string stare)
    {
        stare_avion = stare;
    }
    void set_nume(string nume)
    {
        nume_avion = nume;
    }
    int get_ore()
    {
        return ore_zbor;
    }
    string get_stare()
    {
        return stare_avion;
    }
    string get_nume()
    {
        return nume_avion;
    }
    void UPGRADE_1(int x)
    {
        ore_zbor = ore_zbor + x;
    }
    void UPGRADE_2(string completare)
    {
        nume_avion = nume_avion + " " + completare;
    }
};
int main()
{
    AVION zburator;
    zburator.set_nume("A-20 Havoc");
    zburator.set_ore(20);
    zburator.set_stare("FUNCTIONAL");
    cout << zburator.get_nume() << endl;
    cout << zburator.get_ore() << endl;
    cout << zburator.get_stare() << endl;
    zburator.UPGRADE_1(10);
    cout << zburator.get_ore() << endl;
    zburator.UPGRADE_2("MODEL NOU");
    cout << zburator.get_nume() << endl;
}
