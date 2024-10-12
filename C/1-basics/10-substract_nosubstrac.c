#include <stdio.h>
#include <stdlib.h>

int main()
{       
        int a,b,c;
        
        printf("Enter the value a: \n");
        scanf("%d",&a);
        printf("Enter the value b: \n");
        scanf("%d",&b);
        
        c = a + ~b +1;
        
        printf("Difference of two integers: %d\n", c );
        
        return(0);
        
}  
