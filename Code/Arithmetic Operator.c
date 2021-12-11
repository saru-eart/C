/*#include <stdio.h>
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
}*/

/*
//Question-1 :Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("\nEnter Your Basic Salary : ");
    scanf("%f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra;
    printf("\nBasic Salary : %0.2f",bs);
    printf("\nDA : %0.2f",da);
    printf("\nHRA : %0.2f",hra);
    printf("\nGross Salary : %0.2f",gs);
    return 0;
}*/

/* //Question-2 :The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include<stdio.h>
int main()
{
    float km,m,cm,ft,i;
    printf("Enter The Kilometer : ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n KM : %0.2f",km);
    printf("\n M  : %0.2f",m);
    printf("\n CM : %0.2f",cm);
    printf("\n IN : %0.2f",i);
    printf("\n FT : %0.2f",ft);
    return 0;
} */