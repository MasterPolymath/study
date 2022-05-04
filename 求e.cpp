//比较一下思路差在哪

//#include <stdio.h>
//
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int item = 1;
//		for (int j = i; j >= 1; j--)
//		{
//			item *= j;
//		}
//		sum += 1.0 / item;
//	}
//	printf("%.10lf", sum);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double fm = 1, sum = 1;

	int i;
	for (i = 1; i <= n; i++)
	{
		fm *= i;
		sum += 1.0 / fm;
	}

	printf("%.10lf\n", sum);
	return 0;
}
