#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "bursa.hpp"

class Student : public Bursa {

    int varsta;
    char *nume;

public:

    Student ();
    Student (int, char*, int, char*);
    Student (const Student&);
    ~Student ();

    void set_varsta(int);
    int get_varsta()const;

    Student &operator = (const Student&);

    friend istream &operator >> (istream&, Student&);
    friend ostream &operator << (ostream&, const Student&);

};

#endif // STUDENT_HPP_INCLUDED
