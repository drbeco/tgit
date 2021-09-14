#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("Quanto?");
    scanf("%f", &x);

    printf("%d\n", x);

    if(x==1)
        printf("um\n");
    
    return x;
}

