#include "Shape.h"

#include <iostream>
#include <string>

using namespace std;

void Calculator(float _a, float _b, char _c, float* pta);
void StringSum(string _s, int* _result);
bool Palindrome(string _s);

int main()
{
	Shape s(2, 2, 3);

	cout << s.GetRectangle() << endl;

	cout << s.GetCircle() << endl;

	float a, b;
	char c;
	float result;

	cin >> a >> c >> b;

	Calculator(a, b, c, &result);

	cout << result << endl;

	string str1 = "1234";
	int strsum = 0;

	StringSum(str1, &strsum);

	cout << strsum << endl;

	string str2;

	cin >> str2;

	cout << boolalpha;

	cout << Palindrome(str2) << endl;
}

void Calculator(float _a, float _b, char _c, float* _result)
{
	switch (_c)
	{
	case '+':
		*_result = _a + _b;
		break;

	case '-':
		*_result = _a - _b;
		break;

	case '*':
		*_result = _a * _b;
		break;

	case '/':
		*_result = _a / _b;
		break;

	default:
		break;
	}
}

void StringSum(string _s, int* _result)
{
	int s = stoi(_s);

	/*for (int i = 0; i < _s.size(); i++)
	{
		*_result += _s[i] - '0';
	}*/

	while (s != 0)
	{
		*_result += s % 10;

		s /= 10;
	}
}

bool Palindrome(string _s)
{
	int len = _s.size();

	for (int i = 0; i < len / 2; i++)
	{
		if (_s[i] != _s[len - i - 1])
		{
			return false;
		}
	}

	return true;
}
