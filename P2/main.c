#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    for (int i=n1; i<(n2)+1; i++) {
        switch(i) {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            default:
                if (i % 2)
                    printf("odd\n");
                else
                    printf("even\n");
        }
    }
    return 0;
}