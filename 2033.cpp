/*.#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;
þþþþþ
int main()
{
	int costs[6];
	char friends[6][21];
	char devices[6][21];
	char ans[21];
	unsigned int index[6];
	unsigned int counters[6]{ 1, 1, 1, 1, 1, 1 };
	for (int i = 0; i < 6; i++)
	{
		cin >> friends[i] >> devices[i] >> costs[i];
		index[i] = i;
	}


	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - 1 - i; j++)
		{
			if (costs[index[j]] > costs[index[j + 1]]) swap(index[j], index[j + 1]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			//cout << devices[i] << " " << devices[j] << endl;
			if (strcmp(devices[index[i]], devices[index[j]]) == 0) counters[index[i]]++;
		}
	}
	int most_common = 0;
	unsigned int index_most_common = 0;
	for (int i = 0; i < 6; i++)
	{
		//cout << counters[i] << endl;
		if (most_common < counters[index[i]])
		{
			most_common = counters[index[i]];
			index_most_common = index[i];
		}
	}

	int Min_cost = costs[index_most_common];
	strcpy_s(ans, devices[index_most_common]);
	for (int i = 0; i < 6; i++)
	{
		//cout << counters[index[i]] << " " << devices[index[i]] << endl;
		if (counters[index[i]] == most_common)
		{

			if (Min_cost > costs[index[i]])
			{
				Min_cost = costs[index[i]];

				strcpy_s(ans, devices[index[i]]);
			}
		}
	}

	cout << ans;






	return 0;
}*/