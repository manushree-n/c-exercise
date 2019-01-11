#include <stdio.h> 
void main()
 {
   int radius;
   float area, perimeter;    
    
    printf("enter the value of radius=%d\n",radius);
    scanf("%d",&radius);

   perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);
   
    printf("enter the value of radius=%d\n",radius);
    scanf("%d",&radius);
	
	area = 3.14*radius*radius;
	printf("Area of the Circle = %f square inches\n", area);

}
