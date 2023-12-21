/*#include <iostream>

using namespace std;

int LinearSearch(int* pArray, int n, int key) //O(n)
{
	for (int i = 0; i < n; ++i)
		if (pArray[i] == key)
			return i;

	return -1;
}

int BinaryRecursiveSearch(int* pArray, int left, int right, int key) //O(log n)
{
	if (right < left)
		return -1;

	int midd = left + (right - left) / 2;

	if (key == pArray[midd])
		return midd;

	if (key < pArray[midd])
		return BinaryRecursiveSearch(pArray, left, midd - 1, key);

	return BinaryRecursiveSearch(pArray, midd + 1, right, key);
}



int BinarySearch(int* pArray, int n, int key) //O(log n)
{
	return BinaryRecursiveSearch(pArray, 0, n, key);
}

int BinaryCycleSearch(int* pArray, int n, int key) //O(log n)
{
	if (n == 0)
		return -1;

	int left = 0;
	int right = n;

	int midd = 0;
	while (true)
	{
		double factor = 1/2;

		int diff = right - left;

		midd = left + factor * diff;

		if (left > right)
			return -1;

		if (key < pArray[midd])
		{
			right = midd - 1;
			continue;
		}

		if (key > pArray[midd])
		{
			left = midd + 1;
			continue;
		}
		if(key == pArray[midd])
			return midd;
	}
}

int InterpolationSearch(int* pArray, int n, int key) //O(log(log(n)))
{
	if (n == 0)
		return -1;

	int left = 0;
	int right = n;

	int midd = 0;
	while (true)
	{
		//double factor = 1 / 2;

		double factor = (key - pArray[left]) / (pArray[right] - pArray[left]);

		int diff = right - left;

		midd = left + factor * diff;
		//midd = (left + right) / 2;
		if (left > right)
			return -1;

		if (key < pArray[midd])
		{
			right = midd - 1;
			continue;
		}

		if (key > pArray[midd])
		{
			left = midd + 1;
			continue;
		}

		return midd;
	}
}

int IndexOf(char* dataString, char ch)
{
	int k = strlen(dataString) - 1;
	while (k > -1)
	{
		if (dataString[k] == ch)
			return k;
		--k;
	}
	return -1;
}

int SearchSubstring(char* dataString, int n, char* templateString, int m) //O(N^2)
{
	int index = -1;
	for (int i = 0; i < n; ++i)
	{
		int j = 0;
		while (dataString[i + j] == templateString[j] && i + j < n && j < m)
			++j;

		if (j == m)
		{
			index = i;
			break;
		}
	}
	return index;
}

int SearchBMHSubstring(char* dataString, int n, char* templateString, int m) //Î(N)
{
	if (n == 0 || m == 0)
		return -1;

	int* pIndex = new int[m];

	for (int i = 0; i < m; ++i)
	{
		char ch = templateString[i];
		int length = m - i - 1;
		pIndex[i] = length;
	}
	pIndex[m - 1] = strlen(templateString);

	int i = m - 1;

	int j = i;
	int k = i;

	while (i < n)
	{
		k = i;
		j = m - 1;

		while (j > -1 && dataString[k] == templateString[j])
		{
			k--;
			j--;
		}

		if (j == -1)
			return k + 1;

		char currentChar = dataString[i];
		int index = IndexOf(templateString, currentChar);
		if (index == -1)
			index = m - 1;

		i += pIndex[index];
	}
	return -1;
}

int main()
{
	char data[] = "test data";
	char sample[] = "test";

	int index1 = SearchSubstring(data, strlen(data), sample, strlen(sample));
	cout << "Position for substring \"" << sample << "\" in \"" << data << "\" is " << index1 << endl;

	int index2 = SearchBMHSubstring(data, strlen(data), sample, strlen(sample));
	cout << "Position for BHM substring \"" << sample << "\" in \"" << data << "\" is " << index1 << endl;

	cout << endl;

	int* pArrayEmpty = new int[0];
	int* pArrayOne = new int[1] {0};
	int* pArrayTwo = new int[2] { 1, 2 };
	int* pArrayThree = new int[3] { 1, 2, 3 };

	int n = 20;
	int* pArray = new int[n] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

	int key = 20;

	int* pTestArray = pArray;
	int testArraySize = n;

	int keyPosition1 = LinearSearch(pTestArray, testArraySize, key);
	cout << "Linear search position for number " << key << " is " << keyPosition1 << endl;

	int keyPosition2 = BinaryCycleSearch(pTestArray, testArraySize, key);
	cout << "Binary cycle search position for number " << key << " is " << keyPosition2 << endl;

	int keyPosition3 = BinarySearch(pTestArray, testArraySize, key);
	cout << "Binary recursive search position for number " << key << " is " << keyPosition3 << endl;

	int keyPosition4 = InterpolationSearch(pTestArray, testArraySize, key);
	cout << "Interpolation search position for number " << key << " is " << keyPosition4 << endl;


	delete[] pArrayEmpty;
	delete[] pArrayOne;
	delete[] pArrayTwo;
	delete[] pArray;
}*/