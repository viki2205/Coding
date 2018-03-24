#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks;
} a;
int main()
{
printf("Enter information:\n");
printf("Enter name: ");
scanf("%s",a.name);
printf("\nEnter roll number:");
scanf("%d",&a.roll);
printf("\nEnter marks: ");
scanf("%f",&a.marks);
printf("\n");
printf("Displaying Information:\n");
printf("\nName:%s",a.name);
printf("\nroll number:%d",a.roll);
printf("\nMarks: %.1f",a.marks);
return 0;
}
