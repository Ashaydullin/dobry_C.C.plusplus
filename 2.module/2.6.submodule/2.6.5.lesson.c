#include <stdio.h>

int main(void)
{
    int res1 = 6 * (1 / 3) * (1 / 3);
    double res2 = 15.0 * (1 / 3);
    double perfect = res1 - res2; 
    printf("%lf", perfect); // здесь продолжайте программу

    return 0;
}