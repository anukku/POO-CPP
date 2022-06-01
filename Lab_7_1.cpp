// polimorfism - refolosirea unei functii de cel putin 2 oricu acelasi nume
//1) SUPRASCRIERE - metode
//contine semnatura identica dar corp diferit
//exista un singur criteriu in functie de care se alege functia suprascrisa
//compilatorul analizeaza tipul de data al obiectului care apeleaza functia 
//si va executa acea functie din clasa din care apartine obiectul
//EXCEPTIE: putem obliga compilatorul ca pentru un obiect derivat sa apeleze functie
//suprascrisa din baza folosind operatorul de rezolutie
//2) SUPRAINCARCARE - operatori sau metode
//contine tip de data + nume functie = identice
//parametri diferiti
//corp diferit
//la supraincarcare exista doua criterii de alegere a functiei
//1) compilatorul de uita prima data la tipul obiectului cu care se apeleaza functia
//2) in clasa din care apartine acel obiect cauta o versiune a functiei care are acelasi tip de parametru cu cel de la apel 
// mostenire multipla - doua clase de baza si cel putin o clasa derivata