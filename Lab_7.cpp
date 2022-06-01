#include <iostream>
using namespace std;
//clasa muncitor, atribut varsta, setter pt varsta
//clasa derivata, consctructor, inaltime, setter pt inaltime, getter pt varsta si inaltime
//in main obiect de tip constructor, ca sa seteze varsta si inaltimea prin cei doi setteri si sa afiseze ambele atribute prin getterul comun
class muncitor
{
protected:
  int varsta;
public:
  void set_varsta(int v)
  {
    varsta = v;
  }
  void Lucreaza(int x)
  {
    cout << "Lucreaza din baza" << endl;
  }
  void Mananca(int x1)
  {
    cout << "Mananca un int din baza" << endl;
  }
  void Mananca(char x1)
  {
    cout << "Mananca un char din baza" << endl;
  }
};

class constructor: public muncitor
{
private: 
  int inaltime;
public:
  void set_inaltime(int i)
  {
    inaltime = i;
  }
  int getter()
  {
    cout << varsta << endl;
    cout << inaltime << endl;
  }
  void Lucreaza(int x)
  {
    cout << "Lucreaza din derivata" << endl;
  }
  void Mananca(double x1)
  {
    cout << "Mananca un double din derivata" << endl;
  }
  void Mananca(string x1)
  {
    cout << "Mananca un string din derivata" << endl;
  }
};
int main()
{
  constructor c1;
  muncitor m1;
  c1.set_inaltime(10);
  c1.set_varsta(20);
  c1.getter();
  //c1.varsta = 35;
  //c1.inaltime = 2;
  m1.Lucreaza(100);
  c1.Lucreaza(200);
  c1.muncitor::Lucreaza(300);
  m1.Mananca(15);
  c1.Mananca(15.2);
  c1.Mananca(15);
  //m1.Mananca(15.2);
  c1.muncitor::Mananca(15);
  //c1.muncitor::Mananca(15.4);
  m1.Mananca('A');
  c1.Mananca("ceva");
  c1.muncitor::Mananca('B');
}
//un atribut sau o metoda protected este accesibil in clasa de baza in clasele derivate din clasa de baza dar nu sunt accesibile in main