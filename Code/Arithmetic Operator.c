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

/* //Question-3 :If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nEnter Five Marks : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5.0;
    printf("\nTotal : %d",total);
    printf("\nAverage : %0.2f",avg);
    return 0;
} */

/* //Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees
#include<stdio.h>
int main()
{
    float f,c;
    printf("\nEnter The Temperature : ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0); // (32°F - 32)*5/9
    printf("\nResult : %f",c);

    return 0;
} */

/* //The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle
#include<stdio.h>
int main()
{
    float l,b,r_area,r_peri,r,c_area,cir;
    printf("\nEnter Length & Breadth :");
    scanf("%f%f",&l,&b);
    printf("\nEnter Radius :");
    scanf("%f",&r);
    r_area=l*b;
    r_peri=(2*(l+b));
    c_area=3.14*r*r;
    cir=2*3.14*r;
    printf("\nArea of Rectangle : %0.2f",r_area);
    printf("\nPerimeter of Rectangle : %0.2f",r_peri);
    printf("\nArea of Circle : %0.2f",c_area);
    printf("\nCircumference of Circle : %0.2f",cir);

    return 0;
} */

/* //Question-6 :Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
// this interchanging values in programming is called as "swapping" 
#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d", &a, &b); //5 10
    printf("\n A : %d   B : %d", a, b);
    a = a + b; //15
    b = a - b; //5
    a = a - b; //10
    printf("\n A : %d   B : %d", a, b);
    return 0;
} */

/* //Question-7 :If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)

#include<stdio.h>
int main()
{
    int a,b,d,f,sum=0;
    printf("\nEnter 5 Digit No : ");
    scanf("%d",&a);//12345
    b=a/10;//1234
    sum+=a%10;//5
    d=b/10;//123
    sum+=b%10;//4
    f=d/10;//12
    sum+=d%10;//3
    sum+=f/10;//1
    sum+=f%10;//2
    printf("\nTotal : %d",sum);
    return 0;
} */

/* //Question-8 :If a five-digit number is input through the keyboard, write a program to reverse the number

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,result;
    printf("\nEnter 5 Digit No : ");
    scanf("%d",&a);//12345
    b=a/10;//1234
    c=a%10;//5
    d=b/10;//123
    e=b%10;//4
    f=d/10;//12
    g=d%10;//3
    h=f/10;//1
    i=f%10;//2
    result=(c*10000)+(e*1000)+(g*100)+(i*10)+h;
    printf("\nReverse of 5 Digit No %d is  : %d",a,result);

    return 0;
} */

// If the four digit number is input through keyboard, write a program to obtain the sum of the firt and last digits

#include<stdio.h>

int main (){
    int a,b,c,d,e,f,g,h;
    printf("Print the four digit number : ");
    scanf ("%d",&a); // 1234
    b = a/10; // 123
    c = a%10; //4
    d = b/10; //12
    e = b%10; //3
    f = d/10; //1
    g = d%10; //2
    h = f+c;
    printf("\nSum of digits : %d",h);
    return 0;
}