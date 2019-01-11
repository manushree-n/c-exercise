#include <stdio.h>
int main() 
{
	int a;
	float b,average;
	
	printf("Input total distance in km: ");
	scanf("%d",&a);
	
	printf("Input total fuel spent in liters: ");
	scanf("%f", &b);
	
	average=a/b;
	printf("Average consumption  %.3f ",average);

}
