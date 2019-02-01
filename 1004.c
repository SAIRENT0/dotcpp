#include <stdio.h>

int main(void)
{
	int i, n[55] = {0, 1, 2, 3};
	for(i = 4; i < 55; i++)
		n[i] = n[i-1] + n[i-3];

	while(scanf("%d", &i))
	{	
		if(i == 0)
			break;

		if(i >= 55)
			break;

		printf("%d\n", n[i]);
		
	}

   return 0;
}
