#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <iostream>
#include <cstdarg>
#include <cstdlib>
#include <ctime>

using namespace std;

class Sort {

private:

	int* elements;
	int count;

	void QuickSortHelper(int arr[], int left, int right, bool ascendent = false);
	int Partition(int arr[], int left, int right, bool ascendent = false);
	void Swap(int& a, int& b);
 
public:

	Sort(int count, int min, int max);
	Sort(const Sort& other);
	Sort(initializer_list<int> list);
	Sort(int* array, int count);
	Sort(const char* str);
	Sort(int first, ...);
	~Sort();

	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);

	void Print();

	int GetElementsCount();
	int GetElementFromIndex(int index);

	void Move( Sort& other);
	bool IsNull()const;

};

#endif // !SORT_H_INCLUDED
