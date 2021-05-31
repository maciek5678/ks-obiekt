#include "Adresat.h"
void Adresat::ustawID(int noweID)
{
    if (noweID>=0)
        id=noweID;
}
void Adresat::ustawIdUzytkownika(int noweIdUzytkownika)
{
    idUzytkownika=noweIdUzytkownika;
}
void Adresat::ustawImie(string noweImie)
{
    imie=noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko)
{
    nazwisko=noweNazwisko;
}
void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu)
{
    numerTelefonu=nowyNumerTelefonu;
}
void Adresat::ustawAdres(string nowyAdres)
{
    adres=nowyAdres;
}
void Adresat::ustawEmail(string nowyEmail)
{
    email=nowyEmail;
}

int Adresat::pobierzID()
{
    return id;
}
int Adresat::pobierzIdUzytkownika()
{
    return idUzytkownika;
}
string Adresat::pobierzImie()
{
    return imie;
}
string Adresat::pobierzNazwisko()
{
    return nazwisko;
}
string Adresat::pobierzAdres()
{
    return adres;
}
string Adresat::pobierzNumerTelefonu()
{
    return numerTelefonu;
}


string Adresat::pobierzEmail()
{
    return email;
}
