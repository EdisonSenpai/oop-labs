#include "student.hpp"

int main() {

    Student *stud;

    stud = new Student[1];

    cin >> stud[0];
    cout << stud[0];

    /*for (int i = 0; i < 5; i++)
        if (stud[i].get_varsta() > 22)
            cout << stud;*/

    return 0;

}
