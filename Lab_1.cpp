#include <iostream>
using namespace std;
class Tastatura
{
public:
	int nr_taste;//atributele clasei
	string marca;
	
	void Set_taste(int t2)
	{
		nr_taste = t2;
	}
	void set_m(string m8)
	{
		marca = m8;
	}
		int GNR()
	{
		return nr_taste;
	}
		string GM()
	{
		return marca;
	}
		void Upgrade(int P1)
	{
		nr_taste = nr_taste + P1;
	}

};

int main() 
{
	Tastatura A4tech; //am creat obiectul A4tech Tastatura
	Tastatura logitech;
	logitech.Set_taste(102); // obiectul logitech apeleaza setterul pt taste alocand valoare 102 pt nr de taste
	logitech.set_m("Logi");
	cout<<logitech.GNR()<<endl;
	cout<<logitech.GM()<<endl;

	A4tech.Set_taste(105);
	A4tech.set_m("A4T");
	cout<<A4tech.GNR()<<endl;
	cout<<A4tech.GM()<<endl;	
	
	logitech.Upgrade(8);
	cout<<logitech.GNR()<<endl;
}
