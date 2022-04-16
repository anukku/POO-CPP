/*
clasa magazin cu un singur atribut care sa fie numarul de clienti
un getter pt acel atribut
un constructor implicit si unul de copiere
un destructor
in functia main sa fie doua obiecte
magazin M1 si M2
M1 datele din constructorul implicit
M2 sa copieze datele din M1
mesaje de cout in fiecare metoda
TEST:
network-ing.ro/poo
 */
/*
FUNCTIILE FRIEND
functii nemembre ale clasei
se declara in interiorul clasei
CAZUL 1:
tot in interiorul clasei
CAZUL 2:
in afara clasei
*/
/*
clasa punct cu 6 atribute, 3 coordonate polare si alte 3 coordonate carteziene
vom da valori coord polare
transform coord polare in carteziene
vom calcula distanta intre doua puncte in spatiu in functie de coordoatele carteziene
*/
#include <iostream>
#include <math.h>
using namespace std;
class punct
{
    double ro, fi, teta;
    double x, y, z;

public:
    void setter(double r1, double f1, double t1);
    void tranformare();
    friend double distanta(punct *p1, punct *p2)
    {
        double dist;
        dist = sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2) + pow(p1->z - p2->z, 2));
        return dist;
    };
};
void punct ::setter(double r1, double f1, double t1)
{
    ro = r1;
    fi = f1;
    teta = t1;
}
void punct ::tranformare()
{
    double t;
    t = ro * cos(teta);
    x = t / cos(fi);
    y = t / sin(fi);
    z = ro * sin(teta);
}
int main()
{
    punct p1, p2;
    p1.setter(20, 1, 1);
    p2.setter(10, 0.5, 0.5);
    p1.tranformare();
    p2.tranformare();
    double dist;
    dist = distanta(&p1, &p2);
    cout << dist;
}