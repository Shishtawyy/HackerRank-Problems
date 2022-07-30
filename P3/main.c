#include <stdio.h>

int main() {

    int num,sum;
    scanf("%d", &num);
    for (;;) {
        sum = sum + (num % 10);
        num /= 10;
        if (num == 0)
        {
            printf("%d",sum);
            break;

        }
    }
    return 0;
}
