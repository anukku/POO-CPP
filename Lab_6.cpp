#include <iostream>
using namespace std;
class aparat
{
private:
  int nr_butoane;
public:
  void set_nr_butoane(int snb)
  {
    nr_butoane = snb;
  }
  void get_nr_butoane()
  {
    cout << nr_butoane;
  }
};
class osciloscop: private aparat
{
private:
  int rezolutie;
public:
  /*
  void set_rezolutie(int sr)
  {
    rezolutie = sr;
  }
  int get_rezolutie()
  {
    return rezolutie;
  }
  */
  void setNR(int nx, int rx)
  {
    set_nr_butoane(nx);
    rezolutie = rx;  
  }
  void getNR()
  {
    cout << rezolutie <<endl;
    get_nr_butoane();
  }
};
int main()
{
  osciloscop Teck;
  Teck.setNR(25, 600);
  Teck.getNR();
  /*
  o1.set_rezolutie(1080);
  cout << o1.get_rezolutie();
  */

  return 0;
}

/*
clasa aparat cu atributul numar butoane, setter si getter pt nr de butoane
clasa osciloscop care sa fie mostenita public din clasa aparat cu atributul rezolutie care sa fie int, setter si getter pentru rezolutie 
in main un obiect de tip osciloscop sa apelam setterii si getterii pt rezolutie
*/
/*
un obiect de tip derivat poate sa apeleze metode din derivata care in corpul acestora pot apela la randul lor metode din clasa de baza 
*/