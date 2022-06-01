#include <iostream>
using namespace std;
class aparat
{
  private:
    int nr_butoane;
  public:
    aparat()
    {
      nr_butoane = 25;
      cout << "Constuctor implicit din baza" << endl;
    }
    aparat(int nb)
    {
      nr_butoane = nb;
      cout << "Constructor cu parametrii din baza" << endl;
    }
    ~aparat()
    {
      cout << "destructor aparat" << endl;
    }
};
class osciloscop: public aparat
{
  private:
    int rezolutie;
  public:
    osciloscop()
    {
      rezolutie = 200;
      cout << "Constructor implicit din derivata" << endl;
    }
    osciloscop(int r)
    {
      rezolutie = r;
      cout << "Constructor cu parametrii din derivata" << endl;
    }
    ~osciloscop(){cout << "destructor osciloscop" << endl;}
};
int main()
{
  osciloscop Teck;
  return 0;
}
/*
clasa aparat cu atributul nr butoane si cu un constructor implicit si unul cu parametrii
clasa osciloscop derivata in mod public din clasa aparat in care sa avem un singur atribut rezolutie
main obiect de tip osciloscop fara parametrii
un obiect de tip derivat are nevoie de doi constructori pentru a fi creat - 
- un constructor din baza + derivata
CAZUL 1
  obiec derivat in main fara parametrii solicita doi constructori: implicit din baza + implicit din derivata
  constructorul implicit din derivata poate avea doua presupuneri 
  1) s-a mostenit din baza (FALS!)
  2) l-a oferit compilatorul - 
CAZUL 2  
  obiect derivat cu parametru solicita
  1)constructor impicit din baza
  2)din derivata cu parametrii
TEMA : sa se gaseasca o metoda prin care la creearea unui obiect derivat cu parametru 
constructorul apelat din baza sa fie cel cu parametru nu cel implicit - tot operatorul :
-sa se verifice daca c de copiere se mosteneste
Daca in derivata avem doar constructor cu parametru compilatorul nu ne mai ofera unul implicit iar acesta nu se moseteneste


*/