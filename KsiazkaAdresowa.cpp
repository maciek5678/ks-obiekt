#include "KsiazkaAdresowa.h"

using namespace std;
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer=new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

    }


}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();

}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
   uzytkownikMenedzer.wylogowanieUzytkownika();
   delete adresatMenedzer;
   adresatMenedzer=NULL;

}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer->dodajAdresata();


}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer->wyswietlWszystkichAdresatow();


}
void KsiazkaAdresowa::wczytajUzytkownikowZPliku()
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    if(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika()!=0)
        return true;
        else
        return false;
}

