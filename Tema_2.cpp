#include <iostream>
#include <cstdlib>
using namespace std;
class PISTOL
{
    // 1
private:
    int nr_maxim_gloante, nr_curent_gloante;
    string marca;
    double pret;
    bool stare_pistol, piedica;

public:
    void set_nr_maxim_gloante(int Max_gloante) // 2
    {
        nr_maxim_gloante = Max_gloante;
    }
    void set_marca(string Marca) // 4
    {
        marca = Marca;
    }
    void set_stare_pistol(bool Stare) // 5
    {
        stare_pistol = Stare;
    }
    void set_piedica(bool Piedica) // 6
    {
        piedica = Piedica;
    }
    void set_pret(double Pret) // 7
    {
        pret = Pret;
    }
    int display_1() // 8
    {
        return nr_maxim_gloante;
    }
    double display_2() // 13
    {
        return pret;
    }
    string display_3() // 10
    {
        return marca;
    }
    void display_4() // 11
    {
        if (stare_pistol == true)
            cout << "functional";
        else
            cout << "stricat";
    }
    void display_5() // 12
    {
        if (piedica == true)
            cout << "pusa";
        else
            cout << "scoasa";
    }
    int display_6() // 9
    {
        return nr_curent_gloante;
    }
    void pune_piedica() // 14
    {
        if (piedica == true)
            cout << "Eroare pune_piedica!";
        else
            piedica = true;
    }
    void scoate_piedica() // 15
    {
        if (piedica == false)
            cout << "Eroare scoate_piedica!";
        else
            piedica = false;
    }
    void incarca1() // 16
    {
        if (nr_curent_gloante == nr_maxim_gloante)
            cout << "Eroare incarca1!";
        else
            nr_curent_gloante = nr_maxim_gloante;
    }
    void incarca2(int g) // 17, 18
    {
        if (nr_curent_gloante + g > nr_maxim_gloante)
        {
            nr_curent_gloante = nr_maxim_gloante;
            cout << "Eroare incarca2!";
        }
        else
            nr_curent_gloante = nr_curent_gloante + g;
    }
    void trage() // 19
    {
        if (stare_pistol == true && piedica == false)
        {
            if (nr_curent_gloante > 1)
                nr_curent_gloante--;
            else
            {
                stare_pistol = false;
                cout << "Eroare trage! S-a tras fara gloante!" << endl;
            }
        }
        else
            cout << "Eroare trage! Pistolul este stricat sau piedica este pusa!" << endl;
    }
    void trage_repetat(int repetari) // 20
    {
        while (repetari > 0)
        {
            nr_curent_gloante--;
            repetari--;
            if (nr_curent_gloante <= 0)
            {
                stare_pistol = false;
            }
        }
    }
    void repara() // 21
    {
        if (stare_pistol == false)
        {
            stare_pistol = true;
            nr_curent_gloante = nr_maxim_gloante;
        }
        else
            nr_curent_gloante = nr_maxim_gloante;
    }
    void categorie_pret() // 22
    {
        switch ((int)pret)
        {
        case 0 ... 10:
            cout << "0-10 euro";
            break;
        case 11 ... 20:
            cout << "11-20 euro";
            break;
        case 21 ... 30:
            cout << "21-30 euro";
            break;
        case 31 ... 40:
            cout << "31-40 euro";
            break;
        case 41 ... 50:
            cout << "41-50 euro";
            break;
        default:
            cout << "Peste 50 euro";
        }
    }
    PISTOL() // 23
    {
        nr_maxim_gloante = 7;
        marca = "ALFA Defender";
        pret = 45;
        stare_pistol = true;
        piedica = true;
        cout << "Constructor implicit" << endl;
    }
    PISTOL(int MAX, string MAR, int PRE, bool STA_P, bool PIE) // 24
    {
        nr_maxim_gloante = MAX;
        marca = MAR;
        pret = PRE;
        stare_pistol = STA_P;
        piedica = PIE;
        cout << "Constructor cu parametrii";
    }
    PISTOL(const PISTOL &ob) // 25
    {
        nr_maxim_gloante = ob.nr_maxim_gloante;
        marca = ob.marca;
        pret = ob.pret;
        stare_pistol = ob.stare_pistol;
        piedica = ob.piedica;
        cout << "Constructor de copiere";
    }
};
int main()
{
    // 26
    PISTOL P1;
    P1.set_marca("2mm Kolibri");
    P1.set_nr_maxim_gloante(5);
    P1.set_piedica(false);
    P1.set_pret(37);
    P1.set_stare_pistol(true);
    P1.incarca1(); // 27
    // 28
    cout << "Pistolul P1 are " << P1.display_6() << " gloante din maxim " << P1.display_1() << ", costa " << P1.display_2() << " euro, este marca " << P1.display_3() << ", este ";
    // P1.set_stare_pistol(true);
    P1.display_4();
    cout << " si are piedica ";
    // P1.set_piedica(false);
    P1.display_5();
    cout << "." << endl;
    P1.trage(); // 29
    // 30
    cout << "Pistolul P1 are " << P1.display_6() << " gloante din maxim " << P1.display_1() << ", costa " << P1.display_2() << " euro, este marca " << P1.display_3() << ", este ";
    P1.display_4();
    cout << " si are piedica ";
    P1.display_5();
    cout << "." << endl;
    P1.pune_piedica();                    // 31
    cout << "Pistolul are acum piedica "; // 32
    P1.display_5();
    cout << "." << endl;
    P1.trage();                                                                                               // 33
    P1.scoate_piedica();                                                                                      // 34
    P1.trage();                                                                                               // 35
    cout << "Pistolul are acum " << P1.display_6() << " gloante din maxim " << P1.display_1() << "." << endl; // 36
    P1.trage_repetat(8);                                                                                      // 37
    cout << "S-a tras de " << abs(P1.display_6()) << " ori fara gloante, iar pistolul este acum ";            // 38
    P1.display_4();
    cout << "!" << endl;
    P1.repara();                                                                                                                                                                    // 39
    cout << "Pistolul P1 are " << P1.display_6() << " gloante din maxim " << P1.display_1() << ", costa " << P1.display_2() << " euro, este marca " << P1.display_3() << ", este "; // 40
    P1.display_4();
    cout << " si are piedica ";
    P1.display_5();
    cout << "." << endl;
    P1.trage_repetat(3);                                                   // 41
    cout << "Mai sunt " << P1.display_6() << " gloante si pistolul este "; // 42
    P1.display_4();
    cout << "." << endl;

    PISTOL P2;                                                                                                                                                                      // 43
    P2.trage();                                                                                                                                                                     // 44
    cout << "Pistolul P2 are " << P2.display_6() << " gloante din maxim " << P2.display_1() << ", costa " << P2.display_2() << " euro, este marca " << P2.display_3() << ", este "; // 45
    P2.display_4();
    cout << " si are piedica ";
    P2.display_5();
    cout << "." << endl;
    cout << "Categoria de pret in care se incadreaza este de ";
    P2.categorie_pret(); // 46
    cout << endl;
    P2.pune_piedica();
    cout << endl;                                                                                                                                                                   // 47
    P2.trage();                                                                                                                                                                     // 48
    cout << "Pistolul P2 are " << P2.display_6() << " gloante din maxim " << P2.display_1() << ", costa " << P2.display_2() << " euro, este marca " << P2.display_3() << ", este "; // 49
    P2.display_4();
    cout << " si are piedica ";
    P2.display_5();
    cout << "." << endl;
    // 50, 51: se creeaza obiectul P1, dar nu si P2, pentru ca nu se mai apeleaza automat constructorul P2
    cout << "Pistolul P1 are " << P1.display_6() << " gloante din maxim " << P1.display_1() << ", costa " << P1.display_2() << " euro, este marca " << P1.display_3() << ", este "; // 52
    P1.display_4();
    cout << " si are piedica ";
    P1.display_5();
    cout << "." << endl;
    cout << "Pistolul P2 are " << P2.display_6() << " gloante din maxim " << P2.display_1() << ", costa " << P2.display_2() << " euro, este marca " << P2.display_3() << ", este "; // 52
    P2.display_4();
    cout << " si are piedica ";
    P2.display_5();
    cout << "." << endl;
    // 53, 54: nu se creeaza niciunul din obiecte " no default constructor exists for class "PISTOL" ??? "
    // 55
    // 56: constructorul implicit se apeleaza si pentru P1 si P2
    PISTOL P3;// 57
    P3.incarca1();
    cout << "Pistolul P3 are " << P3.display_6() << " gloante din maxim " << P3.display_1() << ", costa " << P3.display_2() << " euro, este marca " << P3.display_3() << ", este "; // 58
    P3.display_4();
    cout << " si are piedica ";
    P3.display_5();
    cout << "." << endl;
    P3.set_marca("ALFA Combat");// 59
    P3.set_piedica(false);
    P3.set_nr_maxim_gloante(10);
    P3.set_pret(15);
    P3.set_stare_pistol(true);
    P3.incarca1();
    cout << "Pistolul P3 are " << P3.display_6() << " gloante din maxim " << P3.display_1() << ", costa " << P3.display_2() << " euro, este marca " << P3.display_3() << ", este "; // 60
    P3.display_4();
    cout << " si are piedica ";
    P3.display_5();
    cout << "." << endl;
    // 61: constructorul implicit este apelat mereu la creearea unui obiect, dar daca sunt apelati setterii se modifica atributele  
    // 62:
}
