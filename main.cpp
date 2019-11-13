#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <string.h>
using namespace std;



int main()
{
	int n;

	int i, j;
	char** mass;

	cout << "Enter n " << endl;
	cin >> n;

	mass = new char*[n]; //выделение памяти
	
	for (int i = 0; i < n; i++) 
		mass[i] = new char[n];

	for (i = 0; i < n; i++) 
	{
		cout << "Enter " << i + 1 << " word" << endl;
		cin >> mass[i];
	}

	cout << "mass" << endl;
	for (i = 0; i < n; i++)
		cout << mass[i] << " ";
	cout << endl;

	for (i = 0; i < n - 1; i++) 
		for (j = i + 1; j < n ; j++)
		{
			if (strcmp(mass[i], mass[j]) > 0) 
			{
				char* temp = new char[n];
				strcpy(temp, mass[i]);
				strcpy(mass[i], mass[j]); 
				strcpy(mass[j], temp); 
			}
		}
	cout << "Sorted mass" << endl;
	for (i = 0; i < n; i++)
		cout << mass[i] << " ";
	cout << endl;
	cout << "Sorted mass with elems that meet ONCE" << endl;
	int count = 0; 
	for (i = 0; i < n; i++)
	{
		char* temp = mass[i]; 

		for (j = 0; j < n; j++)
			if (*temp == *mass[j]) 
				count++;
		if (count == 1) 
			cout << temp << " ";
		count = 0;  
	}
	cout << endl;
	system("pause");
}
