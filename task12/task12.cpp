// проверка возрастает ли последовательность

#include <iostream>
using namespace std;
int main()
{
	int n,x,fl,prev;
	fl = 1;
	scanf_s("%d", &n);
	scanf_s("%d", &prev);
	for (int i = 0; (i < n-1)&&(fl==1); i++)
	{
		scanf_s("%d", &x);
		if (prev>=x)
		{
			fl = 0;
		}
	}
	if (fl==1)
	{
		printf("yavlyaetsya");
	}
	else
	{
		printf("ne yavlyaetsya");
	}
}