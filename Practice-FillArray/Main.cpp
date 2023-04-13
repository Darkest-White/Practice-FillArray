#include <iostream>
using namespace std;


int main()
{
	srand(time(0));

	int t = 0;

	const int SIZE = 20;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		bool alreadyThere = false;
		int a = rand() % SIZE;

		do
		{
			for (int j = 0; j < i; j++)
			{
				alreadyThere = false;

				if (arr[j] == a)
				{
					a = rand() % SIZE;
					alreadyThere = true;
					break;
				}
			}
		} while (alreadyThere);

		arr[i] = a;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Arr[" << i << "] = " << arr[i] << endl;
	}

	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	cout << "\n";
	cout << "Min = " << min << endl;

	system("pause");
}