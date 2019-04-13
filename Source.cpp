#include<iostream> //library files for input output in c++
#include<string>//library files for string
using namespace std; //sexually transsmitted diseases aka STD

string encrypt(string, int);//predefining function

int main(){
	string inp = ""; //input string
	int n;//index integer/number
	cout << "Input string that needs to be encrypted : ";//notifying user to input string
	getline(cin,inp);//accepting input string
	cout << "Input encryption index : ";// notifying user to input index
	cin>>n;//accepting index

	cout<<encrypt(inp, n)<<endl; //function

	system("pause"); //pausing system 
	return 0;
}
string encrypt(string s,int d) // function
{
	string alp = "ABCDEFGHIJKLMNOPQRSTUVWXY"; //alphabat string
	string num = "0123456789"; //number string
	string out=""; //output string
	for (int x = 0; x <= s.length()-1; ++x) //main loop to check individual string value in the input
	{
		for (int c = 0; c <= num.length() - 1; ++c) //sub lopp to go though number string
		{
			if (s[x] == num[c]) //checking whether current input character is a number character individually
			{
				out = out + num[c]; //iff matching adding them to the out put string
			}
		}
		for (int y = 0; y <= alp.length() - 1; ++y) //sub loop to check individual string char in alp
		{
			if (y + d > 25)
			{
				out = out + alp[(y + d)-26]; //if incrementing position goes beyond 25 substract it with 25
			}
			else 
			{
				out = out + alp[y + d]; //if same incrementing the char position of the alp value by required shift value
			}
		}
	}
	return out; //peace out
}
