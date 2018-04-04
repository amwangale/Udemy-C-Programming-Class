//print half pyramid
#include <stdio.h>
int main()
{
    int n; //line numbers
    int i, j; //i = line number, j = column number in the line

    printf("Enter how many lines: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= i; ++j)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
