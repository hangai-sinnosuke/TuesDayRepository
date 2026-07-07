#include<iostream>

using namespace std;

void even(int num[], int size);
void odd(int num[], int size);

int main(void)
{
	cout << "Šï”‚Æ‹ô”‚Ì”»•Ê" << endl;

	int num[10];
	//“ü—Í‚ð10‰ñ‚·‚é
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];

	}
	cout << "================" << endl;
	even(num,10);

	odd(num,10);



	return 0;
}
//Šï”‚Ì”»•Ê
void odd(int num[], int size)
{
	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0)
		{
			cout << num[i] << "\n";
		}
	}
	cout << "Šï”" << endl;
}
//‹ô”‚Ì”»•Ê
void even(int num[], int size)
{
	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 != 0)
		{
			cout << num[i] << "\n";
		}
	}
	cout << "‹ô”" << endl;
}