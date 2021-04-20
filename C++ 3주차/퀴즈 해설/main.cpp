#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int countMatchedNumberLetterInString(const char* str, int digit);
void excludeRedundantLetters(char* _data);
int countWords(const char* str);
bool examinePairedParenthesis(const char* str);
void convertString(char* input);

int main()
{
	//1번문제

	int count = countMatchedNumberLetterInString("112233443311334913201234", 4);

	printf("%d", count);

	printf("\n");

	//2번문제

	char data[100] = "Hello World";

	excludeRedundantLetters(data);

	printf("%s", data);

	printf("\n");

	//3번문제

	int nWords = countWords("Hello World. Here is the train\n  fgs");

	printf("%d", nWords);

	printf("\n");

	//4번 문제

	bool result = examinePairedParenthesis("())(");

	printf("%s", result == true ? "true" : "false");

	printf("\n");

	//5번문제

	char input[100] = "Hello World. Nice to Meet you.";

	convertString(input);

	printf("%s\n", input);
}

int countMatchedNumberLetterInString(const char* str, int digit) //1번
{
	char change = digit + 48; // 형변환

	int len = strlen(str); //str의 길이 반환

	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == change)
		{
			count++;
		}
	}

	return count;
}

void excludeRedundantLetters(char* _data) //2번
{
	int len = strlen(_data); //_data길이 반환

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (_data[i] == _data[j]) //중복 문자가 있으면
			{
				for (int k = j; k < len; k++)
				{
					_data[k] = _data[k + 1]; //한 칸씩 땡김

					if (_data[k] == '\0')
					{
						break; //마지막이 NULL문자면 break
					}
				}
			}

			else if (_data[j] == '\0')
			{
				break; //마지막이 NULL문자면 break
			}
		}		
	}

	char word[100] = ""; //복사할 저장 공간

	bool isWord = true; //중복 판별

	int idx = 0; //word의 idx값

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < idx; j++)//중복문자 판별
		{
			if (word[j] == _data[i]) // 중복문자가 존재하면
			{
				isWord = false;

				break;
			}
		}

		if (isWord) //중복문자가 존재 하지않으면 복사
		{
			word[idx] = _data[i];

			idx++;
		}

		else //존재하면 복사X
		{
			isWord = true;
		}		
	}

	for (int i = 0; i < strlen(word); i++) //word를 _data에 복사
	{
		_data[i] = word[i];
	}

	_data[strlen(word)] = NULL; //문자열이 끝나는 부분
}

int countWords(const char* str) //3번
{
	int count = 0; //공백 갯수

	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i + 1] == ' ' || str[i +1] == '\t' || str[i + 1] == '\n') //자기자신의 앞이 공백이거나 탭이거나 엔터 일때
		{
			if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') //자기 자신이 공백, 탭, 엔터가 아닐때
			{
				count++;
			}			
		}
	}

	if (str[len - 1] == ' ' || str[len - 1] == '\t' || str[len - 1] == '\n') //문자의 끝이 공백일때
	{
		return count;
	}

	else //문자의 끝이 공백이 아닐때
	{
		return count + 1;
	}
}

bool examinePairedParenthesis(const char* str) //4번
{
	int len = strlen(str);

	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (i == 0 && str[i] == ')') //시작 부분이 ')' 일 때
		{
			return false;
		}

		else
		{
			if (str[i] == '(')
			{
				count++;
			}

			else if(str[i] == ')')
			{
				count--;
			}
		}
	}
	
	if(count != 0 || str[len - 1] == '(') // 괄호의 갯수가 서로 같이 않고 문자열의 끝이 '(' 일때
	{
		return false;
	}

	else
	{
		return true;
	}
}

void convertString(char* _input) //5번
{
	for (int i = 0; i < strlen(_input); i++) //문자열의 길이가 달라지므로 계속 할당
	{
		if (_input[i] == ' ') //공백일때
		{
			for (int j = strlen(_input); j > i; j--)
			{
				_input[j + 2] = _input[j]; //문자를 뒤에서 부터 2칸씩 밈
			}


			//공백이 있던곳에 %20 할당
			_input[i] = '%';
			_input[i + 1] = '2';
			_input[i + 2] = '0';
		}
	}

	char word[100] = ""; //복사할 공간

	int idx = 0; //word의 idx값

	int len =  strlen(_input);

	for (int i = 0; i < len; i++)
	{
		if (_input[i] == ' ') //공백일때
		{

			//word에 %20 할당
			word[idx] = '%';
			idx++;
			word[idx] = '2';
			idx++;
			word[idx] = '0';
			idx++;
		}

		else //공백이 아닐 때
		{
			//_input을 word에 복사
			word[idx] = _input[i];

			idx++;
		}		
	}

	for (int i = 0; i < strlen(word); i++) //할당된 word를 다시 _input에 복사
	{
		_input[i] = word[i];
	}
}
