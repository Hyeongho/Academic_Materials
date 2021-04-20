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
	//1������

	int count = countMatchedNumberLetterInString("112233443311334913201234", 4);

	printf("%d", count);

	printf("\n");

	//2������

	char data[100] = "Hello World";

	excludeRedundantLetters(data);

	printf("%s", data);

	printf("\n");

	//3������

	int nWords = countWords("Hello World. Here is the train\n  fgs");

	printf("%d", nWords);

	printf("\n");

	//4�� ����

	bool result = examinePairedParenthesis("())(");

	printf("%s", result == true ? "true" : "false");

	printf("\n");

	//5������

	char input[100] = "Hello World. Nice to Meet you.";

	convertString(input);

	printf("%s\n", input);
}

int countMatchedNumberLetterInString(const char* str, int digit) //1��
{
	char change = digit + 48; // ����ȯ

	int len = strlen(str); //str�� ���� ��ȯ

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

void excludeRedundantLetters(char* _data) //2��
{
	int len = strlen(_data); //_data���� ��ȯ

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (_data[i] == _data[j]) //�ߺ� ���ڰ� ������
			{
				for (int k = j; k < len; k++)
				{
					_data[k] = _data[k + 1]; //�� ĭ�� ����

					if (_data[k] == '\0')
					{
						break; //�������� NULL���ڸ� break
					}
				}
			}

			else if (_data[j] == '\0')
			{
				break; //�������� NULL���ڸ� break
			}
		}		
	}

	char word[100] = ""; //������ ���� ����

	bool isWord = true; //�ߺ� �Ǻ�

	int idx = 0; //word�� idx��

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < idx; j++)//�ߺ����� �Ǻ�
		{
			if (word[j] == _data[i]) // �ߺ����ڰ� �����ϸ�
			{
				isWord = false;

				break;
			}
		}

		if (isWord) //�ߺ����ڰ� ���� ���������� ����
		{
			word[idx] = _data[i];

			idx++;
		}

		else //�����ϸ� ����X
		{
			isWord = true;
		}		
	}

	for (int i = 0; i < strlen(word); i++) //word�� _data�� ����
	{
		_data[i] = word[i];
	}

	_data[strlen(word)] = NULL; //���ڿ��� ������ �κ�
}

int countWords(const char* str) //3��
{
	int count = 0; //���� ����

	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i + 1] == ' ' || str[i +1] == '\t' || str[i + 1] == '\n') //�ڱ��ڽ��� ���� �����̰ų� ���̰ų� ���� �϶�
		{
			if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') //�ڱ� �ڽ��� ����, ��, ���Ͱ� �ƴҶ�
			{
				count++;
			}			
		}
	}

	if (str[len - 1] == ' ' || str[len - 1] == '\t' || str[len - 1] == '\n') //������ ���� �����϶�
	{
		return count;
	}

	else //������ ���� ������ �ƴҶ�
	{
		return count + 1;
	}
}

bool examinePairedParenthesis(const char* str) //4��
{
	int len = strlen(str);

	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (i == 0 && str[i] == ')') //���� �κ��� ')' �� ��
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
	
	if(count != 0 || str[len - 1] == '(') // ��ȣ�� ������ ���� ���� �ʰ� ���ڿ��� ���� '(' �϶�
	{
		return false;
	}

	else
	{
		return true;
	}
}

void convertString(char* _input) //5��
{
	for (int i = 0; i < strlen(_input); i++) //���ڿ��� ���̰� �޶����Ƿ� ��� �Ҵ�
	{
		if (_input[i] == ' ') //�����϶�
		{
			for (int j = strlen(_input); j > i; j--)
			{
				_input[j + 2] = _input[j]; //���ڸ� �ڿ��� ���� 2ĭ�� ��
			}


			//������ �ִ����� %20 �Ҵ�
			_input[i] = '%';
			_input[i + 1] = '2';
			_input[i + 2] = '0';
		}
	}

	char word[100] = ""; //������ ����

	int idx = 0; //word�� idx��

	int len =  strlen(_input);

	for (int i = 0; i < len; i++)
	{
		if (_input[i] == ' ') //�����϶�
		{

			//word�� %20 �Ҵ�
			word[idx] = '%';
			idx++;
			word[idx] = '2';
			idx++;
			word[idx] = '0';
			idx++;
		}

		else //������ �ƴ� ��
		{
			//_input�� word�� ����
			word[idx] = _input[i];

			idx++;
		}		
	}

	for (int i = 0; i < strlen(word); i++) //�Ҵ�� word�� �ٽ� _input�� ����
	{
		_input[i] = word[i];
	}
}
