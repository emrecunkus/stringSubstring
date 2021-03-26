#include <stdio.h>
#include <string.h>

int main()
{
printf("ilk cümleyi girin:");

  char str[] = "String1 subString1 Strinstrnd subStr ing1subString";
  char sub[] = "subString";

  char *p1, *p2, *p3;
  int i=0,j=0,flag=0;

  p1 = str;
  p2 = sub;

  for(i = 0; i<strlen(str); i++)
  {
    if(*p1 == *p2)
      {
          p3 = p1;
          for(j = 0;j<strlen(sub);j++)
          {
            if(*p3 == *p2)
            {
              p3++;p2++;
            } 
            else
              break;
          }
          p2 = sub;
          if(j == strlen(sub))
          {
             flag ++;
           // printf("\n kere var %d\n",flag);
          }
      }
    p1++; 
  }
  if(flag==0)
  {
       printf("Substring NOT found");
  }
  
  
  printf("how many duplicate : %d ", flag);
return (0);
}
