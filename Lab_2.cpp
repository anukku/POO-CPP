//sa se creeze clasa dreptunghi cu atributele lungime, latime, culoare (lungimea latimea sa fie int, culoarea sa fie string, sa se creeze setteri si getteri pt fiecare atribut, sa se creeze metoda arie, in functia main sa se creeze doua obiecte de tip dreptunghi, doar pt primul obiect sa se apeleze setterii si getterii, iar la getteri caracteristicile dreptunghiuliu sa se afiseze intr o caracteristica compacta si pt obiectul 2 nu afisati nimic)
#include <iostream>
using namespace std;
class Dreptunghi
{
private:
int arie;
int lungime;
int latime;
string culoare;
public:
void set_lungime(int l1)
{
  lungime = l1;
}
void set_latime(int l2)
{
  latime = l2;
}
void set_culoare(string c)
{
  culoare = c;
}
int get_lungime()
{
 return lungime;
}
int get_latime()
{
  return latime;
}
string get_culoare()
{
  return culoare;
}
int get_arie()
{
  return lungime * latime;
}
Dreptunghi()
  {
    latime = 12;
    lungime = 15;
    culoare = "albastru";
    cout << "Apel automat constructor implicit" << endl;
  }
Dreptunghi(int Lx, int ly, string cx)
  {
    lungime = Lx;
    latime = ly;
    culoare = cx;
    cout << "Apel automat constructor cu parametrii" << endl;
  }
Dreptunghi(const Dreptunghi&ob)
{
  lungime = ob.lungime;
  latime = ob.latime;
  culoare = ob.culoare;
  cout << "Apel constructor de copiere" << endl;
}
};
int main()
{
  Dreptunghi dreptunghi_1;
  Dreptunghi dreptunghi_2;
  Dreptunghi dreptunghi_3(7.5, 5.5, "Red");
  Dreptunghi dreptunghi_5;
  Dreptunghi dreptunghi_6 = dreptunghi_5;//creeaza obiectele D6 si D7
  Dreptunghi dreptunghi_7 = dreptunghi_5;//copiaza din D5 in D6 si in D7
  dreptunghi_1.set_lungime(5);
  dreptunghi_1.set_latime(10);
  dreptunghi_1.set_culoare("Verde");
  cout << dreptunghi_1.get_lungime() << " " << dreptunghi_1.get_latime() << " " << dreptunghi_1.get_culoare() << " " << dreptunghi_1.get_arie();
  return 0;
}
// Constructor alocarea de valori pt atribute
//- fara tip de data
//- nume : exact numele clasei
//- parametrii : 0
//- corp : atribuiri de valori concrete pentru atribute
// UN CONSTRUCTOR NU SE APELEAZA DIRECT DE CATRE PROGRAMATOR : se apeleaza automat la creearea obiectului
// se ofera automat de catre compilator daca noi nu scriem niciunul
// dreptunghi(){latime = 12; lungime = 15; culoare = "verde"; cout << "Apel automat constructor implicit"}
// pentru fiecare obiect in functia main se apeleaza un constructor deci se afiseaza si eventualul mesaj din acel constructor de atatea ori cate obiecte avem 
// compilatorul isi da seama de constructorul pe care trebuie sa-l apeleze ca sa creeze obiectul in functie de numarul de parametrii precizati la creearea obiectului
//
// Constructorul cu parametrii - este o metoda - se scrie in clasa
// - fara tip de data
// - nume : exact numele clasei
// - parametrii : != 0 , nr de parametrii depinde de numarul de atribute ale clasei (exact nr de atribute, tipul parametrilor este identic cu tipul atributelor, ordinea parametrilor conteaza: la declaratie sa avem aceeasi ordine ca la creearea obiectului)
// - corp : atribuiri de tip parametru atribut(x) = parametru(x)
// eroarea urmatoare : No matching function for call Dreptunghi::Dreptunghi inseamna ca compilatorul solicita clasei dreptunghi un constructor cu 4 parametrii, acesta avand un constructor doar cu 3 parametrii,inseamna ca numarul acestora nu se potriveste deci obiectul nu este creat
//
// Constructorul de copiere : preia valori existente ale atributelor unui obiect vechi si le aloca unui obiect nou
// este tot o metoda/functie
// - tip de data: nu are (nici macar void)
// - nume: exact numele clasei
// - parametrii: 1 [o referinta constanta la un obiect de tipul clasei] - un obiect vechi
// - corp: atribut(x) = obiect.atribut(x) (partea nou = partea veche)
// dreptunghi d9 si dupa d9 = d5 
// Intrebari: Folosesc sau nu constructorul de copiere scris de programator? Realizeaza copiere sau nu?