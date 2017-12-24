#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("Quanto?");
    scanf("%d", &x);

    printf("%lu\n", x);

    if(x==1)
        printf("um\n");
    
    return x;
}

