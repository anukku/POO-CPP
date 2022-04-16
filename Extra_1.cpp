#include <iostream>
using namespace std;
class MAGAZIN
{
public:
    int nr_clienti;

    int get_nr_clienti()
    {
        return nr_clienti;
    }
    MAGAZIN()
    {
        nr_clienti = 10;
        cout << "Constructor implicit" << endl;
    }
    MAGAZIN(const MAGAZIN &ob)
    {
        nr_clienti = ob.nr_clienti;
        cout << "Constructor de copiere" << endl;
    }
    ~MAGAZIN()
    {
        cout << "Obiectul a fost sters" << endl;
    }
};
MAGAZIN t5(MAGAZIN &m) // copiere normala
{
    cout << "Apel t5" << endl;
    return m;
}
void t10(MAGAZIN m) // copiere pe stiva
{
    cout << "Apel t10" << endl;
}
int main()
{
    MAGAZIN M1;
    MAGAZIN M2(M1);
    t5(M1);
    cout << M1.get_nr_clienti() << endl;
    t10(M1);
}
