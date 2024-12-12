#include "Patrat.h"

int main() {

    vector<Patrat> patrate = {

        Patrat({Point(0, 0), Point(0, 2), Point(2, 2), Point(2, 0)}),
        Patrat({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)}),
        Patrat({Point(-2, -2), Point(-2, 0), Point(0, 0), Point(0, -2)}),
        Patrat({Point(3, 3), Point(3, 5), Point(5, 5), Point(5, 3)})

    };

    cout << "Patratele initiale:\n";

    for (const auto& patrat : patrate) { patrat.afisare(); }

    // Sortare crescatoare in functie de distanta de la origine la centrul figurii
    sort(patrate.begin(), patrate.end(), [](const Patrat& a, const Patrat& b) { return a.getDist() < b.getDist(); });

    cout << "\nPatratele sortate crescator dupa distanta de la origine:\n";

    for (const auto& patrat : patrate) { patrat.afisare(); }

    // Sortare descrescatoare in functie de distanta de la origine la centrul figurii
    sort(patrate.begin(), patrate.end(), [](const Patrat& a, const Patrat& b) { return a.getDist() > b.getDist(); });

    cout << "\nPatratele sortate descrescator dupa distanta de la origine:\n";

    for (const auto& patrat : patrate) { patrat.afisare(); }

    return 0;

}
