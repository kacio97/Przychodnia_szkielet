//
// Created by Kamil Stępień on 10.06.2021.
//

#ifndef PRZYCHODNIA_PACJENT_H
#define PRZYCHODNIA_PACJENT_H

#include "Naglowkowe.h"

class Pacjent {
private:
    string imie, nazwisko;
    char plec;
    int wiek;
public:

    Pacjent();

    Pacjent(const string &imie, const string &nazwisko, char plec, int wiek);

    void setImie(const string &imie);

    void setNazwisko(const string &nazwisko);

    void setPlec(const char &plec);

    void setWiek(const int &wiek);

    string getImie() const;

    string getNazwisko() const;

    char getPlec() const;

    int getWiek() const;

    friend ostream &operator<<(ostream &o, Pacjent &p);
};


#endif //PRZYCHODNIA_PACJENT_H
