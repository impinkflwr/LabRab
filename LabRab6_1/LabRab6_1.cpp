#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack <char> steck;
	string text;
	cout << "Input string: ";
	cin >> text;

	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == '(' || text[i] == '[' || text[i] == '{')
		{
			steck.push(text[i]);
		}
		else if (text[i] == ')' || text[i] == ']' || text[i] == '}')
		{
			if (steck.empty())
			{
				cout << "It's wrong." << endl;
				return 1;
			}


			switch (text[i])
			{
			case ')':
				if (steck.top() == '(')
				{
					steck.pop();
				}
				else
				{
					cout << "It's wrong." << endl;
					return 1;
				}
				break;


			case ']':
				if (steck.top() == '[')
				{
					steck.pop();
				}
				else
				{
					cout << "It's wrong." << endl;
					return 1;
				}
				break;


			case '}':
				if (steck.top() == '{')
				{
					steck.pop();
				}
				else
				{
					cout << "It's wrong." << endl;
					return 1;
				}
				break;
			}
		}
	}
	cout << "It's right.";
	return 0;
}