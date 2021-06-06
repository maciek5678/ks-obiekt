#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"
using namespace std;
class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
public:
    AdresatMenedzer(string nazwaPlikuZAdresatami,int idZalogowanegoUzytkownika)
    :plikZAdresatami( nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika){
        adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();

void edytujAdresata();

void wyszukajAdresatowPoImieniu();
void wyszukajAdresatowPoNazwisku();

};
#endif
