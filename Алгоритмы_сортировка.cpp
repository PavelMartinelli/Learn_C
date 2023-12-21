/*#include <iostream>

using namespace std;

void PrintArray(int* pArray, int n)
{
	for (int i = 0; i < n; ++i)
		cout << pArray[i] << " ";
	cout << endl;
}

void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}



void BubbleShort(int* pArray, int n) //O(n^2)
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = 0; j < n - i - 1; ++j)
			if (pArray[j] > pArray[j + 1])
				Swap(pArray[j], pArray[j + 1]);
}

void ShakerSort(int* pArray, int n) //O(n^2) Шейкерная сортировка
{
	//Идем с двух сторон указателями Left и Reight
	//В итоге сначало всплывает самый большой 
	// потом самый маленький элемент
	int left = 1;
	int right = n - 2;
	while (left <= right)
	{
		for (int i = right; i >= left; --i)
			if (pArray[i] < pArray[i - 1])
				Swap(pArray[i], pArray[i - 1]);
		left++;

		for (int i = left; i <= right; ++i)
			if (pArray[i] > pArray[i + 1])
				Swap(pArray[i], pArray[i + 1]);
		right--;
	}
}

void SelectionSort(int* pArray, int n) // O(n^2) Сортировка выбором
{
	//Находим минимальный элемент массива и потом меняем его с первым
	//Нет выйграща в скорости. 
	// Зато сокращается число обменов в масииве
	for (int i = 0; i < n - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < n; ++j)
			if (pArray[j] < pArray[min])
				min = j;

		Swap(pArray[i], pArray[min]); // n - 1
	}
}

void InsertionSort(int* pArray, int n) //O(n^2) //Сортировка вставками
{
	for (int i = 1; i < n; ++i)
	{
		int current = pArray[i];

		int j;
		for (j = i - 1; j >= 0 && pArray[j] > current; --j)
			pArray[j + 1] = pArray[j];

		pArray[j + 1] = current;
	}
}

void HoareSort(int* pArray, int left, int right) // O(n*log(n))
{
	int l = left;
	int r = right;
	int mid = pArray[(l + r) / 2]; //опорный элемент
	do
	{
		while (pArray[l] < mid)
			++l;

		while (pArray[r] > mid)
			--r;

		if (l <= r)
		{
			Swap(pArray[l], pArray[r]);
			++l;
			--r;
		}
	} while (l < r);

	if (left < r)
		HoareSort(pArray, left, r);

	if (l < right)
		HoareSort(pArray, l, right);
}

void HoareSort(int* pArray, int n) // Сортирока хоара(быстрая сортировка)
{
	HoareSort(pArray, 0, n - 1);
}

int main()
{
	int n = 20;
	int* pArray = new int[n] {34, 56, 12, 32, 11, 14, 19, 7, 3, 9, 15, -1, 0, 44, 32, 78, 157, 33, 1, 42};

	PrintArray(pArray, n);
	//BubbleShort(pArray, n);
	//ShakerSort(pArray, n);
	//SelectionSort(pArray, n);
	//InsertionSort(pArray, n);
	HoareSort(pArray, n);

	PrintArray(pArray, n);

	delete[] pArray;
}*/