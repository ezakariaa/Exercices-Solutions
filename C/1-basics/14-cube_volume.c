#include <stdio.h>
#include <math.h>

int main()
{       
    int l, b, h, v;

    printf("Enter the value of l:\t");
    scanf("%d", &l);

    printf("Enter the value of b:\t");
    scanf("%d", &b);
   
    printf("Enter the value of h:\t");
    scanf("%d", &h);
    
    v = l*b*h;

    printf("Volume of Cube:\t%d\n", v);

    return(0);
}
