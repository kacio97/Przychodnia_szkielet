//
// Created by Kamil Stępień on 10.06.2021.
//

#include "Pacjent.h"

Pacjent::Pacjent(const string &imie, const string &nazwisko, char plec, int wiek) : imie(imie), nazwisko(nazwisko),
                                                                                    plec(plec), wiek(wiek) {}

Pacjent::Pacjent() {}

ostream &operator<<(ostream &o, Pacjent &p) {
    return o << "Imie: " << p.imie << "\nNazwisko: " << p.nazwisko << "\nPlec: " << p.plec << "\nWiek: " << p.wiek;
}

void Pacjent::setImie(const string &imie) {
    this->imie = imie;
}

void Pacjent::setNazwisko(const string &nazwisko) {
    this->nazwisko = nazwisko;
}

void Pacjent::setPlec(const char &plec) {
    this->plec = plec;
}

void Pacjent::setWiek(const int &wiek) {
    this->wiek = wiek;
}

string Pacjent::getImie() const {
    return this->imie;
}

string Pacjent::getNazwisko() const {
    return this->nazwisko;
}

char Pacjent::getPlec() const {
    return this->plec;
}

int Pacjent::getWiek() const {
    return this->wiek;
}
