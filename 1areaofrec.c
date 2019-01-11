#include <stdio.h> 

void main()
{

int width;          
int height;         

int area;           
int perimeter;  
    
	printf("enter the value of width = %d inches\n", width);
	scanf("%d",&width);
	
		printf("enter the value of height = %d inches\n", height);
	scanf("%d",&height);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);
	
		printf("enter the value of width = %d inches\n", width);
	scanf("%d",&width);
	
		printf("enter the value of height= %d inches\n", height);
	scanf("%d",&height);


    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	
}
