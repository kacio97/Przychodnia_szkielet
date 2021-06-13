//
// Created by Kamil Stępień on 10.06.2021.
//

#ifndef PRZYCHODNIA_PRZYCHODNIA_H
#define PRZYCHODNIA_PRZYCHODNIA_H

#include "Naglowkowe.h"
#include "Pacjent.h"

class Przychodnia {
private:
    vector<Pacjent> listaPacjentow;

public:

    Przychodnia();

    const vector<Pacjent> &getListaPacjentow() const;

    void dodajPacjenta(const string&, const string&, char, int);

    friend ostream &operator<<(ostream &o, Przychodnia &p);
};


#endif //PRZYCHODNIA_PRZYCHODNIA_H
