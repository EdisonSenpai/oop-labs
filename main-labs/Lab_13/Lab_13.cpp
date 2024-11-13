#include "persoana.hpp"

int main() {

	Persoana pers1(25, 0, "Tudor");
	Persoana pers2(20, 1, "Edi");
	Persoana pers3(15, 0, "Andrei");

	vector<Persoana> v{ pers1, pers2 };

	cout << "///Prima afisare///\n\n";

	for (auto& x : v)
		x.afisare();

	v.push_back(pers3);

	cout << "\n\n///A doua afisare dupa push_back()///\n\n";

	for (auto& x : v)
		x.afisare();

	sort(v.begin(), v.end());

	cout << "\n\n///Afisare dupa sortare///\n\n";

	for (auto& x : v)
		x.afisare();

	//Persoana p(22, 1, "Victor");

	unordered_map<Persoana*, bool> m;

	for (auto& x : v) {
		m.insert({ &x, x.isStudent() });
	}

	unordered_map<Persoana*, bool>::iterator i;

	for (i = m.begin(); i != m.end(); i++)
		cout << '\n' << i->first << " " << i->second << '\n';

	cout << "\n\n///Afisare dupa mapare doar studenti///\n\n";

	for (auto& x : m) {

		if(x.second)
			x.first->afisare();

	}

	return 0;

}
