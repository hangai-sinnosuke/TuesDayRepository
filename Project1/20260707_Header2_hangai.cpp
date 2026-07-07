#include<iostream>
#include"20260707_Function2_hangai.h"
using namespace std;

void Game(int player,int cpu)
{

}


int InputCheck(int min, int max)
{
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "–‡–Ú" << endl;

		int player;

		while (true)
		{
			cin >> player;
			if (min > player || max < player)
			{
				cout << "“ü—ÍƒGƒ‰[" << endl;
			}
			else
			{
				break;
			}
			return player;
		}
	}
}