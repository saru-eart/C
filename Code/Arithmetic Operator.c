#include <stdio.h>
int main()
{
    int a, b, c;
    float x;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nTotal : %d", c);
    c = a - b;
    printf("\nDifference : %d", c);
    c = a * b;
    printf("\nMul : %d", c);
    x = (float)a / (float)b; // input shoud be convert as float, Then only we can get correct value
    printf("\nDiv : %0.2f", x);
    c = a % b;
    printf("\nMod : %d", c); //Modulus – It returns the remainder after the division Eg: 10 % 2 = 0 (Here remainder is zero). If it is 10 % 3 then it will be 1
    return 0;
}