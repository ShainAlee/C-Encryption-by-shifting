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
	int balance = s;//there is actually no use of creating this variable...You can just execute with s replaceds as balance

	int type[10] = {0};//initailizing all array type elements with 0

	for (int x = 0; x <= 9; ++x)//loop to go through the money[] elements
	{
			while (balance-money[x] >= 0)//if substraction of balance and money is greater then 0 the loop will execute
			{
				balance = balance - money[x];//substratcting money from balance
				type[x] += 1; //incrementing type in x element
			}
	}
	for (int out = 0; out <= 9; ++out)//fancy output loop
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
