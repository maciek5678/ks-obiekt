#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "PlikTekstowy.h"
using namespace std;
class PlikZAdresatami: public PlikTekstowy
{

    int idOstatniegoAdresata;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
        void zmienNazwePliku(string staraNazwa, string nowaNazwa);
      void usunPlik(string nazwaPlikuZRozszerzeniem);
          int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
public:

PlikZAdresatami(string NAZWAPLIKUZADRESATAMI)
        :PlikTekstowy( NAZWAPLIKUZADRESATAMI) {};
    void dopiszAdresataDoPliku(Adresat adresat);
vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
int pobierzIdOstatniegoAdresata();
string pobierzNazwe();
void usunAdresataZPliku(int idAdresata);

    void edytujWybranaLinieWPliku(int idEdytowanegoUzytkownika,Adresat adresat);
};
#endif
