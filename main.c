#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k;
    float sumW;
    sumW=0.0;
    printf("entre la valeur n\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        sumW=(sumW+1)*k/sqrt(n+k);
    }
    printf("sumW= %f",sumW);

    return 0;
}
