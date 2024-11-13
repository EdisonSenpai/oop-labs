#include "fractie.hpp"

int main() {

    Fractie f (8,6), f1 (f), f2 (3,5), fr, f3 (5,6), f4 (1,2), f5 (3,4);

    cout << "\n//Calculator fractie - Editia 2022\n";
    cout << (char)0xA9 << "EdisonSenpai. All rights reserved.\n\n";

	cout << " Numaratorul a este : " << f.getA () << '\n';
	cout << " Numitorul b este : " << f.getB () << '\n';

	cout << " Fractia este " << f.getValoare () << '\n';
	fr = f.getInv ();
	cout << " Inversul fractiei este: " << " a = " << fr.getA () << "  " << "b = " << fr.getB () << '\n';

	f1.setdata (12,7);
	cout << " Modificare val f1: " << " a = " << f1.getA () << "  " << "b = " << f1.getB () << '\n';

	cout << '\n';

	fr = f + f2;
	cout << " Operatorul + : " << " a = " << fr.getA () << "  " << "b = " << fr.getB () << '\n';

	fr = f - f2;
	cout << " Operatorul - : " << " a = " << fr.getA () << "  " << "b = " << fr.getB () << '\n';

	fr = f * f2;
	cout << " Operatorul * : "<<" a = "<<fr.getA()<<"  "<<"b = "<<fr.getB()<<'\n';

	fr = f / f2;
	cout<<" Operatorul / : "<<" a = "<<fr.getA()<<"  "<<"b = "<<fr.getB()<<'\n';

	f2 = operator-(f2);
	cout<<" Opusul lui f2 : "<<" a = "<<f2.getA()<<"  "<<"b = "<<f2.getB()<<'\n';

	f1.operator+=(f3);
	cout<<" Operatorul += : "<<" a = "<<f1.getA()<<"  "<<"b = "<<f1.getB()<<'\n';

	f1.operator-=(f3);
	cout<<" Operatorul -= : "<<" a = "<<f1.getA()<<"  "<<"b = "<<f1.getB()<<'\n';

	f1.operator*=(f3);
	cout<<" Operatorul *= : "<<" a = "<<f1.getA()<<"  "<<"b = "<<f1.getB()<<'\n';

	f1.operator/=(f3);
	cout<<" Operatorul /= : "<<" a = "<<f1.getA()<<"  "<<"b = "<<f1.getB()<<'\n';

	cout<<'\n';

	cout<<" Operatorul boolean == : "<<(f4.operator==(f5))<<'\n';

	cout<<" Operatorul boolean != : "<<(f4.operator!=(f5))<<'\n';

	cout<<" Operatorul boolean < : "<<(f4.operator<(f5))<<'\n';

	cout<<" Operatorul boolean <= : "<<(f4.operator<=(f5))<<'\n';

	cout<<" Operatorul boolean > : "<<(f4.operator>(f5))<<'\n';

	cout<<" Operatorul boolean >= : "<<(f4.operator>=(f5))<<'\n';

	/*Fractie f,g,h;

    f.setdata(1,2);
    h.setdata(5,10);
    f.afisareFractie();
    cout << '\n';
    h.afisareFractie();
    cout << "\n\nNumaratorul fractiei este " << f.getA () << " si numitorul ei este " << f.getB () << ".\n";

    g = f.getInv ();
    cout << "\nInversa fractiei date este:\n";
    g.afisareFractie();
    cout << "\n\nSuma este:\n";
    (f+h).afisareFractie();
    cout << "\n\nDiferenta este:\n";
    (f-h).afisareFractie();
    cout << "\n\nNegativa ei este:\n";
    (-f).afisareFractie();

    if (f == h)
        cout << "\nTrue";
    else
        cout << "\nFalse";*/

	return 0;

}
