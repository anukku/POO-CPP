#include <iostream>
#include <math.h>
using namespace std;

class PATRAT
{
    private:
        int latura;
        string culoare;
    public:
        void set_latura(int l);
        void set_culoare(string c);
        int get_latura();
        string get_culoare();
        PATRAT();
        PATRAT(int lat, string cul);
        PATRAT(const PATRAT &P);
        friend int Perimetru(PATRAT *P);
        int Arie();
        ~PATRAT();
};
void PATRAT :: set_latura(int l)
{
    latura = l;
}
void PATRAT :: set_culoare(string c)
{
    culoare = c;
}
int PATRAT :: get_latura()
{
    return latura;
}
string PATRAT :: get_culoare()
{
    return culoare;
}
PATRAT :: ~PATRAT()
{
    cout << "Obiectul a fost sters";
}
PATRAT :: PATRAT()
{
    latura = 10;
    culoare = "Verde";
    cout << "Constructor implicit" << endl;
}
PATRAT :: PATRAT(int lat, string cul)
{
    latura = lat;
    culoare = cul;
    cout << "Constructor cu parametrii" << endl;
}
PATRAT :: PATRAT(const PATRAT &P)
{
    latura = P.latura;
    culoare = P.culoare;
    cout << "Constructor de copiere" << endl;
}
int Perimetru(PATRAT *P)
{
    int perimetru;
    perimetru = 4 * P->latura;
    return perimetru;
}
int PATRAT :: Arie()
{
    int arie;
    arie = pow(latura, 2);
    return arie;
}
PATRAT copiere_1(PATRAT &P)
{
    cout << "Copiere pe adresa" << endl;
}
void copiere_2(PATRAT PAT)
{
    cout << "Copiere pe stiva" << endl;
}
int main()
{
    PATRAT P1;
    P1.set_latura(5);
    cout<<"Patratul P1 este de culoare "<<P1.get_culoare()<<", are latura de "<<P1.get_latura()<<" metri, perimetrul de "<<Perimetru(&P1)<<" metri si aria de "<<P1.Arie()<<" metri patrati"<<endl ;
}
/*
PATRAT copiere_1(PATRAT &P)
void copiere_2(PATRAT PAT)

int arie();
int PATRAT :: arie()
{
    int arie;
    arie = pow(latura, 2);
    return arie;
}
friend int perimetru(PATRAT *P)
int perimetru()
{
    int perimetru;
    perimetru = 4 * P->latura;
    return perimetru;
}




friend int perimetru(PATRAT *P);
int Arie();
int perimetru(PATRAT *P)
{
    int perimetru;
    perimetru = 4 * P->latura;
    return perimetru;
}
int PATRAT :: Arie()
{
    int arie;
    arie = pow(latura, 2);
    return arie;
}
PATRAT copiere_1(PATRAT &PA)

VOID copiere_2(PATRAT PA)
*/