#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <cstdlib>

using namespace std;


class Adresat
{
    int id;
    int idUzytkownika ;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;
public:
    void ustawID(int noweID);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawAdres(string nowyAdres);
    void ustawEmail(string nowyEmail);
    int pobierzID();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzAdres();
    string pobierzNumerTelefonu();
    string pobierzEmail();



};
#endif
