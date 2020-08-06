#include <iostream>
#include <fstream> //Dodajemy biblioteke do pracy z plikiem

using namespace std;
string imie;
string nazwisko;
int numer_tel;

int main()
{
    cout << "Podaj imie :" << endl; cin>>imie;
     cout << "Podaj nazwisko :" << endl; cin>>nazwisko;
      cout << "Podaj numer telefonu :" << endl; cin>>numer_tel;
fstream plik; //Dodajemy zmienna plikowa o dowolnej nazwie

      plik.open("wizytowka.txt", ios::out|ios::app); //otwieramy plik, ios::app dajemy po to abyysmy mogli dopisywac dane do txt.

      plik<<imie<<endl; //zapisanie danych do txt
        plik<<nazwisko<<endl;
          plik<<numer_tel<<endl;

    plik.close(); //zamykanie pliku, Zelent mowi ze mozna jeszcze dac plik.clear(),
    plik.clear();


    return 0;
}
