#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int student[50];
    int frequency[11] = {0};
    int i, random_num; 
    for (i = 0; i < 50; i++)
    {
        random_num = (rand() % 100) + 1;
        student[i] = random_num;
    }
    for (i = 0; i < 50; i++)
    {
        printf("student[%d] = %d\n", i, student[i]);
    }
    for (i = 0; i < 50; i++)
    {
        frequency[student[i] / 10]++;
    }
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", frequency[i]);
    }
    return 0;
}