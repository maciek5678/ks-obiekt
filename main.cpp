#include <iostream>
#include <windows.h>
#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
     KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt","Adresaci.txt");
        while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany()==false)
        {
            char wybor;
            wybor = MetodyPomocnicze::wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else{
                char wybor;
                    wybor = MetodyPomocnicze::wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
        ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':

                break;
            case '3':

                break;
            case '4':
        ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':

                break;
            case '6':

                break;
            case '7':

                break;
            case '8':
                 ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}
