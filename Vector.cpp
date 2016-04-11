#include<iostream>
#include<string>
#include<functional>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> vect;

	for (int k = 0; k < 20; k++)
	{
		vect.push_back(k + 1);
	}

	sort(vect.begin(), vect.end(), greater<int>());

	for (int k = 0; k < 20; k++)
	{
		cout << vect[k] << endl;
	}

}