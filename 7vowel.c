#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int  Vowels,Consonant;
     
    printf("Enter a string: ");
    gets(str);
     
    ptr=str;
     
   Vowels=Consonant=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
           Vowels++;
        else
            Consonant++;
       
        ptr++;
    }
     
    printf("Total number of VOWELS: %d, CONSONANT: %d\n",Vowels,Consonant);        
    return 0;
}
