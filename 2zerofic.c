#include<stdio.h>
 
int main()
{
    int num, count, total = 0;    
    printf("Enter an Integer:\t");
    scanf("%d", &num);
    count = 5;
    while((num/count) >= 1)  
    {   
        total = total + num/count;
        count = count * 5;
    }   
    printf("Total Number of Trailing Zeroes: \t%d", total);
    printf("\n");
    return 0;
}
