#include "Math.h"

int main() {

	cout << "Add(2, 3) = " << Math::Add(2, 3) << '\n';
	cout << "Add(2, 3, 4) = " << Math::Add(2, 3, 4) << '\n';
	cout << "Add(2.5, 3.6) = " << Math::Add(2.5, 3.6) << '\n';
	cout << "Add(2.5, 3.6, 4.7) = " << Math::Add(2.5, 3.6, 4.7) << '\n';

	cout << "Mul(2, 3) = " << Math::Mul(2, 3) << '\n';
	cout << "Mul(2, 3, 4) = " << Math::Mul(2, 3, 4) << '\n';
	cout << "Mul(2.5, 3.6) = " << Math::Mul(2.5, 3.6) << '\n';
	cout << "Mul(2.5, 3.6, 4.7) = " << Math::Mul(2.5, 3.6, 4.7) << '\n';

	cout << "Add(4, 1, 2, 3, 4) = " << Math::Add(4, 1, 2, 3, 4) << '\n';
	
	// Met I. Folosind siruri de caractere constatnte

	/*
	const char* str1 = "Hello";
	const char* str2 = " World";
	const char* str3 = Math::Add(str1, str2);

	if (str3 != nullptr) {
		cout << "Add(\"Hello\", \"World\") = " << str3 << '\n';
		delete[] str3;
	} else {
		cout << "Add(\"Hello\", \"World\") = nullptr" << '\n';
	}
	*/

	// Met II. Folosind alocarea dinamica pentru siruri de caractere (RECOMANDAT!)

	char buf[250];

	cout << "Type your first string: ";
	cin.getline(buf, 250); 
	// folosim cin.getline() deoarece cin sau scanf() nu vor lua si ce se afla dupa un spatiu sau enter

	char* str1 = new char[strlen(buf) + 1];

	if (!str1) {

		cout << "Memory allocation error!";
		exit(-1);

	}
	else
		strcpy(str1, buf);

	fflush(stdin); 
	// eliberam memoria (recomandat cand folosim cin.getline())

	cout << "Type your second string: ";
	cin.getline(buf, 250);

	char* str2 = new char[strlen(buf) + 1];

	if (!str2) {

		cout << "Memory allocation error!";
		exit(-1);

	}
	else
		strcpy(str2, buf);

	char* str3 = Math::Add(str1, str2);

	if (str3 != nullptr) {

		cout << "Add(\"" << str1 << "\", \"" << str2 << "\") = " << str3 << '\n';
		delete[] str3;

	}
	else
		cout << "Add(\"" << str1 << "\", \"" << str2 << "\") = nullptr" << '\n';

	return 0;

}