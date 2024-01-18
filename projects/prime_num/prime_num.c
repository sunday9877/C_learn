#include <stdio.h>

int main(void)
{
    int primes [100] = {2,3};
    int count = 101, i, j, p = 2, res, res1;

    res = 0;

    for (i = 5; i < count; i=i+2){
        for (j = 0; j < p; j++){
            res = i % primes[j];
            if (res == 0){
                goto s1;
            }

        }
        primes[p] = i;
        p += 1;
        s1: res = 0;
    }

    int k;
    for (k = 0; k<100; k++){
        if (primes[k] !=0){
            printf("%d\n",primes[k]);
        } else{
            break;
        }
    }

    printf("finished1");

    return 0;

}
