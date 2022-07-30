#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (;;)
    {
        printf("%d",n);
        n-=1;
        if(n==0)
        {
            printf("\n");
            break;
        }
    }
    return 0;
}