#include <iostream>
using namespace std;
int main()
{
	int attempt = 0;
	int epin;
	int cpin;
	//create pin
	cout << "Create your PIN:";
	cin >> epin;
	cout << "pin saved\n\n";

	//login access
	do
	{
		cout << "Enter Pin:";
		cin >> cpin;
		if (epin == cpin)
		{
			cout << "login success\n";
			break;

		}
		else
		{
			attempt++;
			if (attempt < 4)
			{
				cout << "incorrect pin\n";
				cout << "you have " << 4 - attempt << " attempts remaining.\n\n";
			}
		}

	} while (attempt < 4);
	if (attempt == 4)
	{
		cout << "too many failed attempt!\n";
		cout << "try again in few mins\n";
	}

}