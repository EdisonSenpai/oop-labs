#include "Sort.h"

Sort::Sort(int count, int min, int max) : count(count) {

	this->elements = new int[count];

    // random numbers seed generator setting 
    srand(time(nullptr));

	for (auto i = 0; i < count; i++)
		this->elements[i] = rand() % (max - min + 1) + min;

}

Sort::Sort(initializer_list<int> list) : count(static_cast<int>(list.size())) {

    this->elements = new int[count];

    for (auto i = 0; i < count; i++)
        if (i < list.size())
            this->elements[i] = *(list.begin() + i);
   
}

Sort::Sort(int* array, int count) : count(count) {

    this->elements = new int[count];

    for (auto i = 0; i < count; i++)
        this->elements[i] = array[i];

}

Sort::Sort(const char* str) : count(0) {

    const char* ptr = str;

    while (*ptr != '\0') {

        if (*ptr == ',')
            count++;

        ptr++;

    }

    count++;

    this->elements = new int[count];

    ptr = str;

    auto i = 0;

    while (*ptr != '\0') {

        if (*ptr >= '0' && *ptr <= '9') {

            this->elements[i] = 0;

            while (*ptr >= '0' && *ptr <= '9') {

                this->elements[i] = this->elements[i] * 10 + (*ptr - '0');

                ptr++;

            }

            i++;

        }
        else
            ptr++;

    }

}

Sort::Sort(int first, ...) : count(1) {

    va_list args;

    va_start(args, first);

    auto next = va_arg(args, int);

    while (next != -1) {

        count++;

        next = va_arg(args, int);

    }

    this->elements = new int[count];

    va_start(args, first);

    this->elements[0] = first;

    for (auto i = 1; i < count; i++)
        elements[i] = va_arg(args, int);

    va_end(args);

}

Sort::~Sort() {

    delete[] this->elements;

}

void Sort::InsertSort(bool ascendent) {

    for (auto i = 1; i < count; i++) {

        auto current = elements[i];
        auto j = i - 1;

        while (j >= 0 && ((ascendent && elements[j] > current) || (!ascendent && elements[j] < current))) {
            
            this->elements[j + 1] = elements[j];

            j--;

        }

        elements[j + 1] = current;

    }

}

void Sort::QuickSort(bool ascendent) {

    QuickSortHelper(elements, 0, count - 1, ascendent);

}

void Sort::QuickSortHelper(int arr[], int left, int right, bool ascendent) {

    if (left < right) {

        auto pivotIndex = Partition(arr, left, right, ascendent);
        QuickSortHelper(arr, left, pivotIndex - 1, ascendent);
        QuickSortHelper(arr, pivotIndex + 1, right, ascendent);

    }

}

int Sort::Partition(int arr[], int left, int right, bool ascendent) {

    auto pivot = arr[right]; // The pivot is chosen to be the last element
    auto i = left - 1;

    for (auto j = left; j < right; j++) {

        if (ascendent) {

            if (arr[j] < pivot) {

                i++;

                Swap(arr[i], arr[j]);

            }

        }
        else {

            if (arr[j] > pivot) {

                i++;

                Swap(arr[i], arr[j]);

            }

        }

    }

    Swap(arr[i + 1], arr[right]);

    return i + 1;

}

void Sort::Swap(int& a, int& b) {

    auto temp = a;
    a = b;
    b = temp;

}

void Sort::BubbleSort(bool ascendent) {

    auto swapped = true;
    auto j = 0;

    while (swapped) {

        swapped = false;

        j++;

        for (auto i = 0; i < count - j; i++) {

            if ((ascendent && elements[i] > elements[i + 1]) || (!ascendent && elements[i] < elements[i + 1])) {

                Swap(elements[i], elements[i + 1]);

                swapped = true;

            }

        }

    }

}

void Sort::Print() {

    for (int i = 0; i < count; i++)
        cout << elements[i] << " ";
    
    cout << '\n';

}

int Sort::GetElementsCount() {

    return this->count;

}

int Sort::GetElementFromIndex(int index) {

    if (index >= 0 && index < count)
        return elements[index];

    return -1;

}

// Copy constructor
Sort::Sort(const Sort& other) : count(other.count) {
    this->elements = new int[count];
    for (int i = 0; i < count; i++) {
        this->elements[i] = other.elements[i];
    }
}

// Move method
void Sort::Move(Sort& other) {
    if (this != &other) {
        delete[] this->elements;
        this->elements = other.elements;
        this->count = other.count;
        other.elements = nullptr;
        other.count = 0;
    }
}

// Verification method
bool Sort::IsNull()const {

    return (this->elements == nullptr);

}