#include <iostream>
#include <math.h>
using namespace std;
class CARTE
{
private:
    int nr_pagini;
    string autor;
    int C = 1;

public:
    void set_nr_pagini(int np);
    void set_autor(string a);
    int get_nr_pagini()
    {
        return nr_pagini;
    }
    string get_autor()
    {
        return autor;
    }
    CARTE(int c_np, string c_a);
    ~CARTE()
    {
        cout << "Obiectul " << C << " a fost sters!" << endl;
        C++;
    };
    void nr_pag_ramase(int x);
};
void CARTE ::set_nr_pagini(int np)
{
    nr_pagini = np;
}
void CARTE ::set_autor(string a)
{
    autor = a;
}
CARTE ::CARTE(int c_np, string c_a)
{
    nr_pagini = c_np;
    autor = c_a;
    cout << "Apel constructor cu parametrii!" << endl;
}
/*
CARTE ::~CARTE()
{
    cout << "Obiectul " << " a fost sters!" << endl;
}
*/
void CARTE ::nr_pag_ramase(int x)
{
    nr_pagini = nr_pagini - x;
}
void stiva(CARTE s)
{
    cout << "Copiere pe stiva" << endl;
}

int main()
{
    CARTE C1(100, "Eminescu");
    cout << "Cartea are " << C1.get_nr_pagini() << " pagini si este scrisa de " << C1.get_autor() << "." << endl;
    CARTE C2 = C1;
    stiva(C2);
    C2.nr_pag_ramase(55);
    cout << "Cartea are " << C2.get_nr_pagini() << " pagini si este scrisa de " << C2.get_autor() << "." << endl;
    return 0;
};