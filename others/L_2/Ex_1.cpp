#include "Sort.h"

int main() {

    Sort sort1(10, 0, 100);
    sort1.Print();

    Sort sort2 = { 10, 20, 30, 40, 50 };
    sort2.Print();

    int array[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    Sort sort3(array, 8);
    sort3.Print();

    Sort sort4("10,20,30,40,50");
    sort4.Print();

    Sort sort5(10, 5, 100, 25, 50, 75, 10, 95, 30, 60, -1);
    sort5.Print();

    sort1.InsertSort();
    sort1.Print();

    sort2.QuickSort();
    sort2.Print();

    sort3.BubbleSort();
    sort3.Print();

    cout << sort4.GetElementsCount() << '\n';
    cout << sort4.GetElementFromIndex(3) << '\n';
    cout << sort4.GetElementFromIndex(10) << '\n';

    cout << "\n//Copy & Move//\n\n";

    // create a Sort object
    Sort sort6(7, 0, 100);
    cout << "Original list: ";
    sort6.Print();
    cout << '\n';

    // create a new Sort object using the copy constructor
    Sort sort7(sort6);
    cout << "Copied list: ";
    sort7.Print();
    cout << '\n';

    // create a new Sort object using the move method
    Sort sort8(5, 0, 50);
    sort8.Move(sort6);
    cout << "Moved list: ";
    sort8.Print();
    cout << '\n';

    // verify if the old object still exists
    cout << "\n->Verification of the old object if it still exists\n\n";
    if (sort6.IsNull()) {
        cout << "Object not available. Deleted or moved." << endl;
    }
    else {
        sort6.Print();
    }

    return 0;

}