#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("Quanto?");
    scanf("%d", &x);

    printf("%c\n", x);

    if(x==1)
        printf("um\n");
    
    return x;
}

