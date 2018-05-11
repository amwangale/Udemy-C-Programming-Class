#include <stdio.h>
int main()
{
	int x[4][3] ={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
	int i, j; //for backwards column
	for(i = 0; i <=3; ++i) //i = 3, i >= 0, --i
	{
		for (j = 2; j >= 0; --j) //j = 0; j < 3; ++j
		{
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
