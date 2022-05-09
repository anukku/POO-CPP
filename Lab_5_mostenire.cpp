#include <iostream>
using namespace std;
class pasare
{
  int picioare;
  public:
  void set_p(int p)
  {
    picioare = p;
  }
  int get_picioare()
  {
    return picioare;
  }
};
class randunica: public pasare
{
  string culoare;
  public:
  void set_culoare(string c)
  {
    culoare = c;
  }
  string get_culoare()
  {
    return culoare;
  }
};
int main()
{
  pasare p1;
  p1.set_p(4);
  cout << p1.get_picioare() << endl;
  randunica r1;
  r1.set_culoare("verde");
  cout << r1.get_culoare();
  r1.set_p(2);
  cout << r1.get_picioare() << endl;
  //p1.set_culoare("rosu");
  //cout << p1.get_culoare();
}
// folosim mostenirea claselor atunci cand dorim sa reutilizam un cod existent
// clasa de baza si clasa derivata
//clasa unde        |  clasa unde vom
//definimi atribute |  refolosi atributele
//plus metode       |  si metodele fara sa le redefinim
//clasa din care    |  clasa unde se
//se mostenesc      |  mostenesc elemente