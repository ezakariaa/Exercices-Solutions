#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{       
        float r, a;
        
        printf("Enter the radius:\t");
        scanf("%f",&r);
        
        a = PI*r*r;
        
        printf("Area of Circle is : %f\n", a );
        
        return(0);
        
}    
