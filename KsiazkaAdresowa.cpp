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
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.logowanieUzytkownika());

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();

}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.wylogowanieUzytkownika());
    adresatMenedzer.wyczyscWektor();

}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();


}
void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();


}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();


}
void KsiazkaAdresowa::wczytajUzytkownikowZPliku()
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}


