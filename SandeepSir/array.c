#include <stdio.h>
#include <limits.h>

int main()
{
    //int ar[ ] = {1, 2, 3, 4, 5, 6, 9, 8, 7};
    int ar[10];
    int greatest = INT_MIN;
    int lowest = INT_MAX;
    int i, sum = 0, count;
    printf("Enter the count of numbers(must be less than 10): ");
    scanf("%d", &count);
    for(i = 0;i < count;i++)//for the values of the array
    {
        printf("Enter the value of ar[%d]: ", i);
        scanf("%d", &ar[i]);
    }
    for(i = 0; i < count;i++)//for greatest, loewst and sum 
    {
        sum += ar[i]; 
        if (ar[i] > greatest)
        {
            greatest = ar[i];
        }
        if (ar[i] < lowest)
        {
            lowest = ar[i];
        }
    }
    printf("The greatest number is %d\n", greatest);
    printf("The lowest number is %d\n", lowest);
    printf("The sum of all the numbers is %d\n", sum);
    printf("The average of all the numbers is %f\n", (float)sum / count);
    return 0;
}
