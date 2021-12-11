#include <stdio.h>

int main()
{
    int a = 10;
    char b = '$';  // singl quatation is charactor and double quatation is decimal value
    float c = 12.5f; // literal 'f' used to assigned as float type. without this literal assigned as double
    long int d = 2582l; // literal 'l' used to assigned as float type. without this literal assigned as integer
    int aa = 0x41;
    float cc = 253e-2f;
    printf("%d \n %d \n%0.2f", a, b, c); // %d is nomite the interger type print of variable
    return 0;
}