#include <stdio.h>
#include <math.h>

int main()
{       
    int a,b,r;

    printf("Enter the value of a:\t");
    scanf("%d", &a);

    b=a/30;

    printf("Month :%d\n", b);

    r=a%30;

    printf("Remaining Days: %d\n", r);

    return(0);

}
