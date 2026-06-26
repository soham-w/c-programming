// Count of Small letter in string //

#include<stdio.h>

int strcapital(char str[])
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(( *str >= 'a' ) && (*str <= 'z' ))
       {
         iCount++;
       }
       str++;                 
        
    }
   return iCount;
}

int main()
{
    char Arr[20];
    int iRet  = 0;
   
    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strcapital(Arr);

    printf("Count of capital character : %d ",iRet);

    return 0;
}