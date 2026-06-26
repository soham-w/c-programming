// Last Occurance //

#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str, char Ch)    
{
    int iCnt = 1, iPos = -1;
    
   
    while(*str != '\0')
    {
        if(*str == Ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    
    return iPos;
    
                    
}

int main()
{
    char Arr[100];
    int iRet  = 0;
    char cValue = '\0';
   
    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter which character do you want search : \n");
    scanf(" %c",&cValue);

    iRet = CheckOccurance(Arr,cValue);
    if(iRet == -1)
    {
      printf("There is Such a letter");
    }
    else
    {
      printf(" Last Occurance of letter is : %d",iRet);
    }

    return 0;
}