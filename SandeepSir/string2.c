#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define x 5
int main()
{
    char *allstrings;

    char* messages[x];
    int i;
    int len = 0;
    printf("NOTE: enter only one word which is less than 10 characters\n");
    for(i = 0; i < x; i++)
    {
        messages[i] = (char*)malloc(sizeof(char)*10);
        printf("Enter messages[%d]: ", i);
        gets(messages[i]);
        len += strlen(messages[i]) + 1;
    }
    allstrings = (char*)malloc(sizeof(char)*(len + 1));
    allstrings[0] = '\0';
    for(i = 0; i < x; i++)
    { 
        strcat(allstrings, messages[i]);
        strcat(allstrings, " "); 
    }
    // strcpy(allstrings, messages[0]);
    // for(i = 1; i < x; i++)
    // {
    //     strcat(allstrings, messages[i]);
    // }
    puts(allstrings);
    //printf("%s", allstrings);
    for(i = 0; i < x; i++)
    {
        free(messages[i]);
    }
    free(allstrings);
    
}
