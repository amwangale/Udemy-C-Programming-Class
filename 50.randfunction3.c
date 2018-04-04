#include <stdio.h>
#include <stdlib.h> /*for rand function*/

int main () {
    int k, i;

	srand(100); /*seed*/
    for(i = 1; i <= 10; i++) {
        k = rand();
        printf("%d\n", k);
    }
    return 0;
}

//executes same series of numbers when rerun so in next we use time
