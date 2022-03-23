#include <iostream>
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
    string display_4() // 11
    {
        if (stare_pistol == true)
            cout << "functional";
        else
            cout << "stricat";
    }
    string display_5() // 12
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
            cout << "Eroare pune_piedica";
        else
            piedica = true;
    }
    void scoate_piedica() // 15
    {
        if (piedica == false)
            cout << "Eroare scoate_piedica";
        else
            piedica = false;
    }
    void incarca1() // 16
    {
        if (nr_curent_gloante == nr_maxim_gloante)
            cout << "Eroare incarca1";
        else
            nr_curent_gloante = nr_maxim_gloante;
    }
    void incarca2(int g) // 17, 18
    {
        if (nr_curent_gloante + g > nr_maxim_gloante)
        {
            nr_curent_gloante = nr_maxim_gloante;
            cout << "Eroare incarca2";
        }
        else
            nr_curent_gloante = nr_curent_gloante + g;
    }
    void trage() // 19
    {
        if (nr_curent_gloante >= 1 && stare_pistol == true && piedica == true)
            nr_curent_gloante -= 1;
        else
        {
            stare_pistol = false;
            cout << "Eroare trage";
        };
    }
    void trage_repetat(int repetari) // 20
    {
        while (repetari > 0)
        {
            nr_curent_gloante -= 1;
            repetari -= 1;
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
    void categorie_pret() // 21
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
    PISTOL() // 22
    {
        nr_maxim_gloante = 7;
        marca = "Glock";
        pret = 45;
        stare_pistol = true;
        piedica = true;
        cout << "Constructor implicit" << endl;
    }
    PISTOL(int MAX, string MAR, int PRE, bool STA_P, bool PIE)
    {
        nr_maxim_gloante = MAX;
        marca = MAR;
        pret = PRE;
        stare_pistol = STA_P;
        piedica = PIE;
        cout << "Constructor cu parametrii";
    }
    PISTOL(const PISTOL &ob)
    {
        nr_maxim_gloante = ob.nr_maxim_gloante;
        marca = ob.marca;
        pret = ob.pret;
        stare_pistol = ob.stare_pistol;
        piedica = ob.piedica;
    }
};
int main()
{
    return 0;
}
