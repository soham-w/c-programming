//Find First Ocuurance of user entered letter //

#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char str[], char Ch)    
{
    
    bool bFlag = false;
    int iCnt = 1;
   
    while(*str != '\0')
    {
        if(*str == Ch)
        {
            bFlag  = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
                    
}

int main()
{
    char Arr[100];
    bool iRet  = false;
    char cValue = '\0';
   
    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter which character do you want search : \n");
    scanf(" %c",&cValue);

    iRet = CheckOccurance(Arr,cValue);
    if(iRet != -1)
    {
        printf("Letter  Occured at postition %d",iRet);
    }
    else
    {
        printf("%c not Occured",cValue);
    }

    return 0;
}