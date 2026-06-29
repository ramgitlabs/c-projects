#include <stdio.h>

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
  char buffer[100];
  char buffer2[100];
  printf("Enter the original string: ");
  gets(buffer);
  printf("enter the string to append: ");
  gets(buffer2);
  concat(buffer, buffer2);
  puts(buffer);
  return 0;
}

