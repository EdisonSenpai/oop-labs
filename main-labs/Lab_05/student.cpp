#include "student.hpp"

Student :: Student () : Bursa () {

    this -> varsta = 0;
    this -> nume = NULL;

}

Student :: Student (int Var, char *Num, int Val, char *Tip) : Bursa (Val, Tip) {

    varsta = Var;

    this -> nume = new char[strlen(Num)+1];

    if (!nume) {

        cout << "Allocation failed!";
        exit (-1);

    }

    strcpy (nume, Num);

}

Student :: Student (const Student &obj) : Bursa (obj) {

    varsta = obj.varsta;

    nume = new char[strlen(obj.nume)+1];
    strcpy (nume, obj.nume);

}

Student :: ~Student () {

    delete []nume;

}

Student &Student :: operator = (const Student &obj) {

    Bursa :: operator = (obj);
    this -> varsta = obj.varsta;

    if (this -> nume)
        delete []this -> nume;

    this -> nume = new char[strlen(obj.nume)+1];
    strcpy (this -> nume, obj.nume);

    return *this;

}

int Student :: get_varsta()const {

    return varsta;

}

istream &operator >> (istream &devi, Student &s) {

    devi >> (Bursa&)s; // operator>>(devi, (Bursa&) s);

    char buf[20];
    cout << "Dati numele: ";
    devi >> buf;
    if (s.nume)
        delete []s.nume;
    s.nume = new char [strlen(buf)+1];
    strcpy (s.nume, buf);

    cout << "Dati varsta: ";
    devi >> s.varsta;

    return devi;

}

ostream &operator << (ostream &dev, const Student &s) {

    dev << (Bursa&)s; // operator<<(dev, (Bursa&) s);

    dev << " Nume: " << s.nume << "\tVarsta: " << s.varsta;

    return dev;

}
