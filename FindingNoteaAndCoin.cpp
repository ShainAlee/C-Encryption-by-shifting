#include<iostream>
using namespace std;

void findNoteandCoins(int s);
int main()
{
	int salary;
	cout << "Please enter the salary amount : ";
	cin >> salary;

	findNoteandCoins(salary);
	system("pause");

}
void findNoteandCoins(int s)
{
	int money[10];
	money[0] = 5000;
	money[1] = 1000;
	money[2] = 500;
	money[3] = 100;
	money[4] = 50;
	money[5] = 20;
	money[6] = 10;
	money[7] = 5;
	money[8] = 2;
	money[9] = 1;
	int balance = s;

	int type[10] = {0};//initailizing all array elements with 0

	for (int x = 0; x <= 9; ++x)
	{
		switch (x)
		{
		case 0:
			while (balance-money[0] >= 0)
			{
				balance = balance - money[0];
				type[0] += 1;
			}
		case 1:
			while (balance - money[1] >= 0)
			{
				balance = balance - money[1];
				type[1] += 1;
			}
		case 2:
			while (balance - money[2] >= 0)
			{
				balance = balance - money[2];
				type[2] += 1;
			}
		case 3:
			while (balance - money[3] >= 0)
			{
				balance = balance - money[3];
				type[3] += 1;
			}
		case 4:
			while (balance - money[4] >= 0)
			{
				balance = balance - money[4];
				type[4] += 1;
			}
		case 5:
			while (balance - money[5] >= 0)
			{
				balance = balance - money[5];
				type[5] += 1;
			}
		case 6:
			while (balance - money[6] >= 0)
			{
				balance = balance - money[6];
				type[6] += 1;
			}
		case 7:
			while (balance - money[7] >= 0)
			{
				balance = balance - money[7];
				type[7] += 1;
			}
		case 8:
			while (balance - money[8] >= 0)
			{
				balance = balance - money[8];
				type[8] += 1;
			}
		case 9:
			while (balance - money[9] >= 0)
			{
				balance = balance - money[9];
				type[9] += 1;
			}
		}
	}
	for (int out = 0; out <= 9; ++out)
	{
		if (out < 6)
		{
			cout <<" "<< type[out] << " of Note Rs " << money[out] << endl;
		}
		else
		{
			cout <<" "<< type[out] << " of Coin Rs " << money[out] << endl;
		}
		
	}
}
