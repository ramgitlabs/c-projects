#include <stdio.h>

int wordcount(char *pstr)
{
    int i, spaces = 0;
    for (i = 0; pstr[i] != '\0'; i++)
    {
        if (pstr[i] == ' ')
        {
            spaces++;
        }
    }
    return (spaces + 1);
}

int main()
{
    printf("pls don't give spaces at the end of your string!!!!!!!!!!!\n");
    char buffer[100];
    gets(buffer);
    printf("%s\n", buffer);
    int noofwords = wordcount(buffer);
    printf("no of word in ur string: %d\n", noofwords);
}
