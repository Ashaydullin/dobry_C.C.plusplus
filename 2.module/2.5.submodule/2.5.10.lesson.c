#include <stdio.h>

int main(void)
{
    int num = 0;
    double dnum = 0;
    float fnum = 0;
    scanf("%d %lf %f", &num, &dnum, &fnum);
    printf("%d %.2lf %.2f", num, dnum, fnum);
    // здесь продолжайте программу

    return 0;
}