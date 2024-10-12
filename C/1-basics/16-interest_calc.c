#include <stdio.h>
#include <math.h>

int main()
{       
    float i,p,r,n;

    printf("Enter the value of p:\t");
    scanf("%f", &p);
    printf("Enter the value of r:\t");
    scanf("%f", &r);
    printf("Enter the value of n:\t");
    scanf("%f", &n);
    
    i=(p*r*n)/100;

    printf("Remaining Days: %f\n", i);

    return(0);

}
