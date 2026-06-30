#include <stdio.h>
#include <stdlib.h>

int lenofstr(char *pstr)
{
  int count;
  for(count = 0; pstr[count] != '\0'; count++);
  return count;
}

void concat(char *pstr, char *pstr2)
{
  int len = lenofstr(pstr);
  int i;
  for(i = 0; pstr2[i] != 0; i++)
  {
    pstr[len + i] = pstr2[i];
  }
  pstr[len + i] = '\0';  // <-- add this
}

int main()
{
  // char buffer[100];
  // char buffer2[100];
  printf("enter how many elements of array you want in buffer: ");
  int n1;
  scanf("%d", &n1);
  char *buffer = (char*)malloc(sizeof(char)*n1);
  printf("enter how many elements of array you want in buffer2: ");
  int n2;
  scanf("%d", &n2);
  char *buffer2 = (char*)malloc(sizeof(char)*n2);
  char ent;
  scanf("%c", &ent);
  printf("Enter the original string: ");
  gets(buffer);
  printf("enter the string to append: ");
  gets(buffer2);
  concat(buffer, buffer2);
  puts(buffer);
  return 0;
}

