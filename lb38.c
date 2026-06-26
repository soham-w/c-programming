// Reverse a string //

#include<stdio.h>


void strRevX(char *str)    
{
  char *start = str;
  char *end   = str;
  char  temp = 0;
  
  while(*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end  = temp;

    start++;
    end--;
  }
}

int main()
{
    char Arr[100];
   
    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);
    
    printf("Reverse String is : %s ",Arr);
    return 0;
}