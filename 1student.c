
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int age;
    float marks;
} s;

int main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    
    printf("enter age: ");
    scanf("%d",&s.age);

    printf("Enter marks: ");
    scanf("%f", &s.marks);


    printf("Displaying Information:\n");

    printf("Name: ");
    puts(s.name);

    printf("Roll number: %d\n",s.roll);

    printf("Marks: %.1f\n", s.marks);
    
    printf("age:%d\n",s.age);

    return 0;
}
