#include <iostream>
using namespace std;
class mancare
{
private:
  int pret;
  string gust;
public:
  friend float Scumpire(mancare *pizza)
  {
    float pret_nou;
    pret_nou = pizza->pret*1.70;
    return pret_nou;

  }
  int get_pret()
  {
    return pret;
  }
  string get_gust()
  {
    return gust;
  }
  mancare(int p, string g)
  {
    pret = p;
    gust = g;
    cout << "Constructor cu parametrii" << endl;
  }
  mancare(mancare &m)
  {
    pret = m.pret;
    gust = m.gust;
    cout << "Constructor de copiere" << endl;
  }
  ~mancare()
  {
    cout << "Obiectul a fost sters!" << endl;
  }
  private:
friend float Scumpire(mancare m);
};
float Scumpire(mancare m)
  {
  float var;
  var = m.pret * 1.70;
  return var;
  }
int main()
{
  mancare pizza(10, "Buna");
  pizza.get_gust();
  pizza.get_pret();
  float pret_nou;
  pret_nou = Scumpire(&pizza);
  cout << pret_nou << endl;
  cout << Scumpire(pizza) << endl;
}
//obiect de tip mancare pizza
//destructor copiere parametrii
//metoda
//functie friend care se numeste scumpire care afiseaza pretul scumpit cu 70% (*1.7)
/*
friend float Scumpire(mancare m)
{
  m.pret = m.pret * 1.70;
  return m.pret;
}
in main ---> cout Scumpire(pizza);
*/
/*
friend float Scumpire(mancare m)
{
  float var;
  var = m.pret * 1.70;
  return var;
}
*/
/*
friend float Scumpire(mancare m); ---> in clasa
float Scumpire(mancare m) ---> in main
{
  float var;
  var = m.pret * 1.70;
  return var;
}
*/
// orice functie friend poate accesa atributele clasei indiferent de ce modificator(private, public) au
// indiferent de modificatorul de acces din interiorul clasei pt functia friend apelul functiei friend va fi posibil neconditionat 