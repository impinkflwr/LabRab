#include <iostream>
#include <deque>
#include <cstring>

using namespace std;

bool Palindrom(char* text)
{
	deque <char> dek;

	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == ' ')
		{
			i++;
		}
		dek.push_back(text[i]);
	}

	while (dek.size() >= 2)
	{
		if (tolower(dek.front()) != tolower(dek.back()))
		{
			cout << "It's not paliindrome." << endl;
			cout << endl;
			return false;
		}
		else
		{
			(dek.pop_front());
			(dek.pop_back());
		}

	}

	cout << "It's palindrome." << endl;
	cout << endl;
	return true;
}

int main()
{
	int choice = 0;
	while (true)
	{
		cout << "Tasks: \n"
			<< "1. Checking a string for a palindrome; \n"
			<< "2. Search for a convex hull of points. \n" << endl;
		cout << "Input number of the task: "; cin >> choice;
		switch (choice)
		{
		case 1:
		{
			char text[255];
			cin.ignore();
			cout << "Input string: "; cin.getline(text, 255);
			Palindrom(text);
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}