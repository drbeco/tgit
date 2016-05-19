#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("Quanto?");
    scanf("%d", &x);

    printf("%d\n", &x);
    
    return x;
}

