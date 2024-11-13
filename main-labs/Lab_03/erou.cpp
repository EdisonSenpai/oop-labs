#include "erou.hpp"

Erou :: Erou () {

    nume = NULL;
    strcpy (this -> abilitate, "");
    arma = NULL;
    this -> nr_vieti = 0;

}

Erou :: Erou (const char *nume, const char abilitate[], const char *arma, const int nr_vieti) {

    this -> nume = new char[strlen(nume) + 1];
    isNull (this -> nume);
    strcpy (this -> nume, nume);

    strcpy (this -> abilitate, abilitate);

    this -> arma = new char[strlen(arma) + 1];
    isNull (this -> arma);
    strcpy (this -> arma, arma);

    this -> nr_vieti = nr_vieti;

}

Erou :: ~Erou () {

    delete []this -> nume;
    delete []this -> arma;

}

Erou :: Erou (const Erou &obj) {

    this -> nume = new char[strlen(obj.nume) + 1];
    isNull (this -> nume);
    strcpy (this -> nume, obj.nume);

    strcpy (this -> abilitate, obj.abilitate);

    this -> arma = new char[strlen(obj.arma) + 1];
    isNull (this -> arma);
    strcpy (this -> arma, obj.arma);

    this -> nr_vieti = obj.nr_vieti;

}

void Erou :: afisare () {

    cout << "Nume: " << nume << '\n';
    cout << "Abilitate: " << abilitate << '\n';
    cout << "Arma: " << arma << '\n';
    cout << "Numar vieti: " << nr_vieti << '\n';

}

void Erou :: modif (const char *m_nume, const char m_abilitate[], const char *m_arma, const int m_nr_vieti) {

    if (this -> nume)
        delete []this -> nume;

    this -> nume = new char[strlen(m_nume) + 1];
    isNull (this -> nume);
    strcpy (this -> nume, m_nume);

    strcpy (this -> abilitate, m_abilitate);

    if (this -> arma)
        delete []this -> arma;

    this -> arma = new char[strlen(m_arma) + 1];
    isNull (this -> arma);
    strcpy (this -> arma, m_arma);

    this -> nr_vieti = m_nr_vieti;


}

char *Erou :: getArma () {

    return this -> arma;

}

int getNrVieti (const Erou &obj) {

    return obj.nr_vieti;

}

char *getNume (const Erou &obj) {

    return obj.nume;

}

void interschimbare (Erou &obj_1, Erou &obj_2) {

    Erou aux (obj_1);
    obj_1.modif (obj_2.nume, obj_2.abilitate, obj_2.arma, obj_2.nr_vieti);
    obj_2.modif (aux.nume, aux.abilitate, aux.arma, aux.nr_vieti);

    //Useless code :>

    /*if (!obj_1.nume || !obj_2.nume) {

        cout << "Nothing to interchange at name.";

    }

    if (!obj_1.arma || !obj_2.arma) {

        cout << "Nothing to interchange at weapon.";

    }

    Erou aux (obj_1);

    delete []obj_1.nume;
    delete []obj_1.arma;

    obj_1.nume = new char[strlen(obj_2.nume) + 1];
    obj_1.arma = new char[strlen(obj_2.arma) + 1];

    strcpy (obj_1.nume, obj_2.nume);
    strcpy (obj_1.arma, obj_2.arma);
    strcpy (obj_1.abilitate, obj_2.abilitate);
    obj_1.nr_vieti = obj_2.nr_vieti;

    strcpy (obj_2.nume, aux.nume);
    strcpy (obj_2.arma, aux.arma);
    strcpy (obj_2.abilitate, aux.abilitate);
    obj_2.nr_vieti = aux.nr_vieti;*/


}

void isNull (void *p) {

    if (!p) {

        cout << "Allocation failed!";

        exit(-1);

    }

}

void getLowHero (Erou *v, int &lowest, int &lowest_poz) {

    for (int i = 1; i < 4; i++) {

        if (getNrVieti(v[i]) < lowest) {

            lowest = getNrVieti(v[i]);
            lowest_poz = i + 1;

        }

    }

}

void sortAfterWeapon (Erou *v) {

    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            if (strcmp(v[i].getArma(), v[j].getArma()) > 0)
                interschimbare (v[i], v[j]);

}
