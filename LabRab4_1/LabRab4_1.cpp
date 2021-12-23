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

int find_substring1(const char* str_for_search_in, const char* substring, int start_position)
{
	bool tumbler;
	for (int i = start_position; i < strlen(str_for_search_in) - strlen(substring) + 1; i++)
	{
		tumbler = false;
		for (int j = 0; j < strlen(substring); j++)
		{
			if (str_for_search_in[i + j] == substring[j])
			{
				tumbler = true;
			}
			else
			{
				tumbler = false;
				break;
			}
		}
		if (tumbler == true)
		{
			return i;
		}
	}
	return 0;
}

void find_substring2(const char* str_for_search_in, const char* substring)
{
	int start_position = 0, temp, n = 0;
	while (true)
	{
		temp = find_substring1(str_for_search_in, substring, start_position);
		if (temp == 0)
		{
			break;
		}
		else
		{
			cout << "[ " << ++n << " ] = " << temp << endl;
			start_position = temp + 1;
		}
	}
	return;
}

void encrypt(char* str_for_encrypt, int key)
{
	for (int i = 0; i < strlen(str_for_encrypt); i++) {
		if ('a' <= str_for_encrypt[i] && str_for_encrypt[i] <= 'z') { 
			if (str_for_encrypt[i] + key > 'z') // Если происходит выход за пределы алфавита
				str_for_encrypt[i] = 'z' - str_for_encrypt[i] + 'a' + key - 1; // Переносимся в начало и применяем ключ
			else str_for_encrypt[i] += key; 
		}
		else if ('A' <= str_for_encrypt[i] && str_for_encrypt[i] <= 'Z') { // Тот же принцип, но для верхнего регистра
			if (str_for_encrypt[i] + key > 'Z') 
				str_for_encrypt[i] = 'Z' - str_for_encrypt[i] + 'A' + key - 1;
			else str_for_encrypt[i] += key;
		}
		else if (str_for_encrypt[i] == ' '); 
	}
	return; 
}

void marks(char* string)
{
	bool tumbler = false;
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == '"')
		{
			if (tumbler = false)
			{
				cout << "| ";
			}
			else
			{
				cout << " |";
				tumbler = !tumbler;
				i++;
			}
		}
		if (tumbler == true)
		{
			cout << string[i];
		}
	}
	return;
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
				cout << endl;
			}
			break;

		}

		case 2:
		{
			char text[255];
			char text_s[255];

			cout << "Input string: "; cin.ignore(); cin.getline(text, 255);
			char* str_for_search_in = text;
			cout << "Input substring: "; cin.ignore(); cin.getline(text_s, 255);
			char* substring = text_s;
			find_substring2(str_for_search_in, substring);
			delete[] text;
			delete[] text_s;
			break;
		}

		case 3:
		{
			int key;
			char string[255];

			cout << "Input string: "; cin.ignore(); cin.getline(string, 255);
			cout << "Input a key: "; cin >> key;

			encrypt(string, key);
			char* str_for_encrypt = new char[strlen(string) + 1];
			str_for_encrypt = string + '\0';
			cout << "Encrypted string: " << str_for_encrypt << endl;
			cout << endl;

			break;
		}

		case 4:
		{
			char text[255];

			cout << "Input string: "; cin.ignore(); cin.getline(text, 255);
			char* string = text;
			marks(string);
			
			delete[] text;
			break;
		}

		default:
			return 0;
		}
	} 
}