#include <stdio.h>
#include <stdlib.h> /*for rand function*/
#include <time.h> /*for time function*/
int main () {
    int k, i;
	long t;
	t = time (NULL); /*call time function in seconds since last epoch*/
	srand(t);
    for(i = 1; i <= 10; i++) {
        k = rand() % 100; /*print 10 random numbers between 0 and 99*/
        printf("%d\n", k);
    }
    return 0;
}

//executes same series of numbers when rerun so in next we use time
