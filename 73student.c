#include <stdio.h>
struct student
{
    char name[50];
    int age;
    int roll;
    float marks;
} s[10];

int main()
{
    int i;

    printf("Enter information of students:\n");

    for(i=0; i<3; ++i)
    {
        s[i].roll = i+1;

        printf("\nFor roll number%d,\n",s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        
         printf("Enter age: ");
        scanf("%f",&s[i].age);
      

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    
    for(i=0; i<3; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
         printf("age: %.1f",s[i].age);
        printf("\n");
	
    }
    return 0;
}




