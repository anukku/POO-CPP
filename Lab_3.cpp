#include <iostream>
using namespace std;

class pistol
{
private:
    int nr_gloante;
    string stare;

public:
    int get_nr_gloante()
    {
        return nr_gloante;
    }
    string get_stare()
    {
        return stare;
    }
    pistol();                /*{
                       nr_gloante = 0;
                       stare = "neincarcat";
                   cout << "Constructor implicit" << endl;
                   }*/
    pistol(int a, string b); /*{
        nr_gloante = a;
        stare = b;
    cout << "Constructor cu parametrii" << endl;
    }*/
    pistol(pistol &ob);      /*{
             nr_gloante = ob.nr_gloante;
             stare = ob.stare;
         cout << "Constructor de copiere" << endl;
       }*/
    ~pistol()
    {
        cout << "Obiectul  a fost sters" << endl;
    }
};
pistol ::pistol()
{
    nr_gloante = 0;
    stare = "stricat";
    cout << "Constructor implicit" << endl;
}
pistol ::pistol(int a, string b)
{
    nr_gloante = a;
    stare = b;
    cout << "Constructor cu parametrii" << endl;
}
pistol ::pistol(pistol &ob)
{
    nr_gloante = ob.nr_gloante;
    stare = ob.stare;
    cout << "Constructor de copiere" << endl;
}
pistol f10(pistol &p)
{
    cout << " x " << endl;
    return p;
}
int main()
{
    pistol P1;
    pistol P2(20, "functional");
    pistol P3(P2);
    pistol P4;
    P4 = P3;
    cout << "Pistolul 1 are " << P1.get_nr_gloante() << " gloante si este " << P1.get_stare() << "." << endl;
    cout << "Pistolul 2 are " << P2.get_nr_gloante() << " gloante si este " << P2.get_stare() << "." << endl;
    cout << "Pistolul 3 are " << P3.get_nr_gloante() << " gloante si este " << P3.get_stare() << "." << endl;
    cout << "Pistolul 4 are " << P4.get_nr_gloante() << " gloante si este " << P4.get_stare() << "." << endl;
    f10(P1);
    return 0;
}
/* nr gloante si stare(string)
getter pt fiecare
constructori in lab 2
main: cate un biect pt fiecare constructor
sa se afiseze caract pistol intr-o fraza compacta de genul pistol p1 are x nr gloante si este incarcat
fiecare contructor are un mesaj de informare
*/
// OPERATORUL DE REZOLUTIE -> ::
/*
! operatorul de rezolutie precizeaza apartenenta unei metode la o clasa
! permite scrierea definitiei unei metode inafara clasei pastrand declaratia in interiorul clasei
*/
// DESTRUCTOR
/*
! elibereaza memoria pentru obiecte
! sterge spatiul ocupat de atributele obiectului inclusiv obiectul in sine
! un destructor nu se apealeaza direct de catre programator si este apelat automat de catre compilator
! tip de data, nume, parametrii, corp
! recomandabil in corp ar trebui pus un mesaj de informare
! destructorul va fi apelat automat pentru atatea obiecte cate are clasa declarate in functia main
*/
// FUNCTII NEMEMBRE ALE CLASEI
/*
! nu apartin clasei
! nu se scriu in interiorul clasei
! nu se aplica operatorul de rezolutie
! return-ul din functia nemembra p10 copiaza datele obiectului P1 la o alta adresa din memoria RAM astfel incat obiectul P1 va avea doua exemplare, original si copie
! dupa creearea copiei obiectului P1 aceasta copie se sterge imediat, ca atare se apeleaza destructorul dupa care se mai apeleaza destructorul de atatea ori cate obiecte aveam in functia main
*/