#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class automobil
{
private:
    float rezervor;
    string marca;

public:
    float get_rezervor();
    string get_marca();
    automobil(float rez, string mar)
    {
        rezervor = rez;
        marca = mar;
    }
    automobil(automobil &a);
    float merge()
    {
        rezervor = rezervor - 0.25 * rezervor;
    }
    void reincarca();
    ~automobil()
    {
        cout << "Obiectu a fost sters!" << endl;
    }
};
automobil ::automobil(automobil &a)
{
    rezervor = a.rezervor;
    marca = a.marca;
    cout << "Apel constructor copiere!" << endl;
}
void automobil ::reincarca()
{
    rezervor = 50;
}
void clonare(automobil aut)
{
    cout << "Mesaj + copie" << endl;
}
float automobil ::get_rezervor()
{
    return rezervor;
}
string automobil ::get_marca()
{
    return marca;
}
automobil copiere(automobil &a)
{
    cout << "Copiere" << endl;
    return a;
}
int main()
{
    automobil A1(50, "Volvo");
    cout << "Capacitatea rezervorului este de " << A1.get_rezervor() << " de litri si automobilul este marca " << A1.get_marca() << " !" << endl;
    automobil A2 = A1;
    cout << "Capacitatea rezervorului este de " << A2.get_rezervor() << " de litri si automobilul este marca " << A2.get_marca() << " !" << endl;
    A2.merge();
    cout << "Au mai ramas " << A2.get_rezervor() << " de litrii!" << endl;
    A2.reincarca();
    cout << "Au mai ramas " << A2.get_rezervor() << " de litrii!" << endl;
    copiere(A1);
    return 0;
}