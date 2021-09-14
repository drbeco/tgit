#include <stdio.h>
#include <stdlib.h>

int main(vid)
{
    int x;

    printf("Quanto?");
    scanf("%.2f", &x);

    printf("%d\n", x);

    if(x==1)
        printf("um\n");
    
    return x;
}

