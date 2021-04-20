#include <stdio.h>

int main()
{
	int arr[3] = { 10, 20, 30 };

	int* ptr = arr;

	printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);

	printf("포인터를 이용하여 배열 요소에 접근 : %d %d %d\n", ptr[0], ptr[1], ptr[2]);

	printf("배열의 이름을 이용한 배열의 크기 계산 : %d\n", sizeof(arr));

	printf("포인터를 이용한 배열의 크기 계산 : %d\n", sizeof(ptr));

	
	printf("\n");

	int arr2[3] = { 10, 20, 30 };

	printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr2[0], arr2[1], arr2[2]);

	printf("배열의 이름으로 포인터 연산을 해 배열 요소에 접근: %d %d %d\n", *(arr2 + 0), *(arr2 + 1), *(arr2 + 2));

	printf("\n");

	//포인터 배열

	int a = 10, b = 20, c = 30;

	int* arr3[3] = { &a, &b, &c };

	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		printf("%d\n", *arr3[i]);
	}

	printf("\n");

	//배열 포인터

	int arr4[2][3] =             // 배열의 선언
	{
		{10, 20, 30},
		{40, 50, 60}
	};

	printf("%d, %d", *arr4[0], *arr4[1]);

	int (*pArr)[3] = arr4;       // 배열 포인터의 선언  

	printf("%d\n", arr4[1][1]);  // 배열 이름으로 참조

	printf("%d\n", pArr[1][1]); // 배열 포인터로 참조
}