/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

bool Cheack(string& str)
{
	int n = str.length();
	string arr[] = { "eno", "tuo", "tuptuo", "notup", "ni", "tupni" };
	string pars = "";
	for (int i = 0; i < n ; i++)
	{
		pars += str[i];
		for (int i = 0; i < 6; i++)
		{
			if (arr[i] == pars)
			{
				pars = "";
				break;
			}
		}
	}

  if (pars.empty()) return 1;
  else return 0;

}

void Revers(string& str)
{
	int n = str.length();
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		swap(str[i], str[j]);
	}
}


int main() {
    int N;
	cin >> N;
	cin.get();
	string* arr = new string[N];
	string alph[] = { "out", "puton", "in", "one" };
	string oldWord = "";
	string pars="";
	bool flag = false;
	char a;
	for (int i = 0; i < N; i++)
	{
		while (true) 
		{
		a = getc(stdin);
			
			if (a == '\n') break;
			pars += a;
		}

		Revers(pars);
		//cout << pars;
		if (Cheack(pars)) cout << "YES" << endl;
		else cout << "NO" << endl;
		pars = "";
		
		
	}
    return 0;
}*/