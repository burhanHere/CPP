#include<iostream>
using namespace std;
int flip();

int main()
{
	int coin = 0, counter = 0, tails = 0, heads = 0;
	for (counter = 1; counter <= 100; counter++)
	{
		coin = flip();

		if (coin == 0)
		{
			cout << "T ";
			tails = tails + 1;
		}
		else if (coin == 1)
		{
			cout << "H ";
			heads = heads + 1;
		}
	}

	cout << endl;
	cout << "Tails was tossed " << tails << " times" << endl;
	cout << "Heads was tossed " << heads << " times" << endl;


}
int flip()
{
	return rand() % 2;
}