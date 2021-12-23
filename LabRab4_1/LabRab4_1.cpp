#include <iostream>
#include <cstring>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;

bool Palindrom(char* str)
{
	int i, j;
	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{	
		if (str[i] == ' ') {
			i++;
		}
		if (str[j] == ' ') {
			j--;
		}
			if (tolower(str[i]) != tolower(str[j]))
			{
				return false;
			}
		}
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice = 0;
	while (true)
	{
		cout << "List of tasks: " << endl
			<< "1. Checking a string for a palindrome;" << endl
			<< "2. Searching for a substring in a string;" << endl
			<< "3. Caesar's Cipher;" << endl
			<< "4. Text output from quotation marks." << endl;
		cout << "Choose the task number: "; cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int const maxchar = 255;
			char str[255];
			//cout << "Enter the text: "; cin >> str;
			cin.ignore();
			cin.getline(str, 255);
			if (strlen(str) > maxchar)
			{
				cout << "The input is too long. Maximum 255 characters." << endl;
			}
			else
			{
				cout << Palindrom(str) << endl;
			}
			break;

		}
		default:
			return 0;
		}
	} 
}