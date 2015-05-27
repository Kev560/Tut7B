#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> intVector;
	const int k = 10;

	for (int i = 0; i < k; i++)
	{
		intVector.push_back(i);
	}

	for (int j = 0; j < k; j++)
	{
		cout << intVector[j] << "\n" << endl;
	}

	system("pause");
	return 0;
}