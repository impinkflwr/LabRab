#include <iostream>
#include <deque>
#include <string>

using namespace std;

bool Palindrom()
{
	deque <char> dek;
	string text;
	cout << "Input string: ";
	cin >> text;

	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == ' ')
		{
			i++;
		} 
		else
		{
			dek.push_back(text[i]);
		}
	}
	while (dek.size() > 1)
	{
		if (dek.front() == dek.back())
		{
			dek.pop_back();
			dek.pop_front();
		}
		else
		{
			cout << "It's not palindrome." << endl;
			cout << endl;
			return false;
		}
		cout << endl;
	}
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
			Palindrom();
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}