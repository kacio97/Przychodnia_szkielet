#include "Przychodnia.h"

int main() {

    Przychodnia przychodnia;
    string imie, nazwisko;
    char plec;
    int wiek;
    int opcja = 0;
    char operacja;

    while (true) {
        cout << "\n \tPRZYCHODNIA PRAWIE ZDROWY PACJENT\t" << endl;
        cout << "\t\t*+ MENU +*\t" << endl;
        cout << "\tOpcja 1: Dodaj nowego pacjenta\t" << endl;
        cout << "\tOpcja 2: Pokaz liste pacjentow\t" << endl;
        cin >> opcja;
        switch (opcja) {
            case 1: {
                cout << "Wporawdz dane dla nowego pacjenta !" << endl;
                cout << "Podaj imie [bez polskich znakow]: ";
                cin >> imie;
                cout << "Podaj nazwisko [bez polskich znakow]: ";
                cin >> nazwisko;
                while (true) {
                    cout << "Podaj plec [m/M lub k/K]: ";
                    cin >> plec;
                    if (plec == 'm' || plec == 'M' || plec == 'k' || plec == 'K') {
                        break;
                    } else {
                        cout << "Podano niepoprawna plec, dozwolone tylko [m/M lub k/K] !!\t" << endl;
                    }
                }
                cout << "Podaj wiek: ";
                cin >> wiek;
                cout << "\nCZY CHCESZ ZAPISAC DANE PACJENTA [t/T lub n/N]: \t";
                while (true) {
                    cin >> operacja;
                    if (operacja == 't' || operacja == 'T') {
                        przychodnia.dodajPacjenta(imie, nazwisko, plec, wiek);
                        break;
                    } else if (operacja == 'n' || operacja == 'N') {
                        cout << "\nDODAWANIE ANULOWANE !" << endl;
                        break;
                    } else {
                        cout << "CZY CHESZ ZAPISAC DANE PACJENTA [t/T lub n/N]: ";
                    }
                }
                break;
            }
            case 2: {
                if (przychodnia.getListaPacjentow().empty()) {
                    cout << "Pusta lista pacjentow !\n" << endl;
                }
                cout << przychodnia;
                break;
            }
            default: {
                cout << "Nieznana opcja\n" << endl;
                break;
            }
        }
    }

    return 0;
}
