#include <stdio.h>
int main()
{
	int a = 1, b = 0, c = 0, d = 0, n;
	int num1, num2;
	scanf_s("%d", &n);
	while (1)
	{
		num1 = a * 1000 + b * 100 + c * 10 + d;
		num2 = b * 1000 + c * 100 + d * 10 + a;
		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 9)
		{
			c = 0;
			b++;
		}
		if (num2 / num1 == n)
		{
			break;
		}
	}
	printf("Iskomoe chislo %d", num1);
	return 0;
}
