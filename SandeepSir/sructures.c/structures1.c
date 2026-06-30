#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct person
{
    char name[50];
    int age;
    char address[100];
    struct date dob;
};


int main()
{
    struct person p1, p2;
    
    printf("Enter the name of p1: ");
    fgets(p1.name, sizeof(p1.name), stdin);
    printf("Enter the age of p1: ");
    scanf("%d", &p1.age);
    scanf("%c");//to read enter
    printf("Enter the address of p1: ");
    fgets(p1.address, sizeof(p1.address), stdin);
    printf("Enter the date of birth(day/month/year): ");
    scanf("%d/%d/%d", &p1.dob.day, &p1.dob.month, &p1.dob.year);
    scanf("%c");//to read enter
    printf("Enter the name of p2: ");
    fgets(p2.name, sizeof(p2.name), stdin);
    printf("Enter the age of p2: ");
    scanf("%d", &p2.age);
    scanf("%c");//to read enter
    printf("Enter the address of p2: ");
    fgets(p2.address, sizeof(p1.address), stdin);
    printf("Enter the date of birth(day/month/year): ");
    scanf("%d/%d/%d", &p2.dob.day, &p2.dob.month, &p2.dob.year);
    printf("detailes of p1: \n");
    printf("name: %sage: %d\naddress: %sD.O.B: %d/%d/%d\n", p1.name, p1.age, p1.address, p1.dob.day, p1.dob.month, p1.dob.year);
    printf("detailes of p2: \n");
    printf("name: %sage: %d\naddress: %sD.O.B: %d/%d/%d\n", p2.name, p2.age, p2.address, p2.dob.day, p2.dob.month, p2.dob.year);
    return 0;
}
