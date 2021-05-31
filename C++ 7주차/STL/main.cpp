#include <iostream>

#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	string s1 = "o2cube";
	string s2 = "i2p";

	s1.size();
	s1.length();

	vector<int> v = {2, 3, 4, 5, 1, 6, 8, 7, 9};

	/*for (int i = 1; i < 6; i++)
	{
		v.push_back(i);
	}*/

	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;
}