//
// Created by Kamil Stępień on 10.06.2021.
//

#include "Przychodnia.h"

const vector<Pacjent> &Przychodnia::getListaPacjentow() const {
    return listaPacjentow;
}

Przychodnia::Przychodnia() {
    listaPacjentow.resize(0);
}

void Przychodnia::dodajPacjenta(const string &imie, const string &nazwisko, char plec, int wiek) {
    Pacjent *p = new Pacjent(imie, nazwisko, plec, wiek);
    listaPacjentow.push_back(*p);
}

ostream &operator<<(ostream &o, Przychodnia &p) {
    for (int i = 0; i < p.listaPacjentow.size(); i++) {
        o << "============================================" << endl;
        o << "Pozycja: " << i + 1 << endl;
        o << p.listaPacjentow[i] << endl;
        o << "============================================" << endl;
    }
    return o;
}
