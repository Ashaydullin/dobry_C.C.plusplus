#include <stdio.h>

int main(void)
{
    int inum = 0;
    int inum1 = 0;
    float fnum = 0;
    double dnum = 0;
    scanf("%d, %d, %*f, %lf", &inum, &inum1, &dnum);
    printf("%d %d %.2lf", inum, inum1, dnum);
    // здесь продолжайте программу

    return 0;
}