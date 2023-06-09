#include <iostream>
using namespace std;


class MyClass
{
private:

	int size = 0;
	int* arr = nullptr;

public:

	MyClass(const int size = 20)
	{
		this->size = size;
		arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			bool alreadyThere = false;
			int a = rand() % size;

			do
			{
				for (int j = 0; j < i; j++)
				{
					alreadyThere = false;

					if (arr[j] == a)
					{
						a = rand() % size;
						alreadyThere = true;
						break;
					}
				}
			} while (alreadyThere);

			arr[i] = a;
		}
	}

	~MyClass()
	{
		size = 0;
		delete[] arr;
		arr = nullptr;
	}


	void print_arr()
	{
		for (int i = 0; i < size; i++)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}

	void find_min()
	{
		int min = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}

		cout << "\nMin = " << min << endl;
	}

	void find_max()
	{
		int max = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}

		cout << "\nMax = " << max << endl;
	}
};


int main()
{
	srand(time(0));

	MyClass a;

	a.print_arr();
	a.find_min();
	a.find_max();
}