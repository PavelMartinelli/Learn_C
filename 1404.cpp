/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main() {
char a;
int code = 5;
char alph[] = "abcdefghijklmnopqrstuvwxyz";
bool flag = true;
int temp;
while ((a = getc(stdin)) != '\n')
{
	for (int i = 0; i < 26; i++)
	{
		if (a == alph[i])
		{
			if (flag)
			{
				temp = i;
				i -= code;
				if (i < 0) i += 26;
				cout << alph[i];
				code = temp;
				flag = !flag;
			}
			else
			{

				while (i < code)
				{
					i += 26;
				}
				temp = i;
				i = i - code;
				code = temp;
				cout << alph[i];
			}

			break;
		}
	}
}

return 0;
}*/