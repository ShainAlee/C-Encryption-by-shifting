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
			while (balance-money[x] >= 0)
			{
				balance = balance - money[x];
				type[x] += 1;
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
