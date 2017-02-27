#include <stdio.h>

void sum(int a, int b, int *p)
{
	*p = a + b;
}
void reverse(int *arr, int size)
{
	int i;
	for (i = size; i >= 0; i--)
	{
		printf("%d\n", *(arr + i));
	}
}


int main()
{
	printf("EXERCICI 1\n");

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int *p =&arr[0];
	int x;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = (int)(p++);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	getchar();

	printf("EXERCICI 2\n");

	int a, b,s;
	
	printf("Entra el val1:\n");
	scanf_s("%d", &a);
	printf("Entra el val2:\n");
	scanf_s("%d", &b);

	sum(a, b, &s);

	printf("La suma es %d\n", s);

	getchar();
	getchar();

	printf("EXERCICI 3\n");
	int arr_1[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Entra el val%d:\n",i);
		scanf_s("%d", &arr_1[i]);
	}

	reverse(arr_1, 10);


	getchar();
	getchar();
	return 0;
}
