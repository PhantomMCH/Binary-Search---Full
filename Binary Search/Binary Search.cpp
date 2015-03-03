#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

bool BinarySearch (char *array[10], int size, char* value)
{
	if (size == 0)
		return false;
	
	else
	{
		int i, j, k;
		i = 0;
		j = size - 1;

		while (i < j)
		{
			k = (i + j) / 2;

			if ((strcmp(value,array[k])<0))
				j = k-1;
			else if ((strcmp(value,array[k+1])>=0))
				i = k+1;
			else
				i = j = k;
		}
		return (!strcmp(value,array[i])) ? true : false;
	}
}
int main()
{
	system("cls");
	char* strings [10]={"Ball", "Boat", "Boss", "Lamb", "Last", "Loss", "Lost", "Mall", "Most", "Tall"};

	if (BinarySearch(strings, 10, "Most"))
		cout << "The word is found.\n";
	else  cout << "The word is not found.\n";
}