#include<stdio.h> 
  
void funct() 
{ 
    printf("apple"); 
} 
  
int main(void) 
{ 
    printf("address of function main() is :%p\n", main); 
    printf("address of function funct() is : %p\n", funct); 
    return 0; 
} 
