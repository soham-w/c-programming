// Check Vowels Count//

// Case sensitive 

#include<stdio.h>

int VowelsCount(char str[])   
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(( *str == 'a' ) || (*str == 'e' ) || ( *str == 'i' ) || (*str == 'o' ) ||  (*str == 'u' ))
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

    iRet = VowelsCount(Arr);

    printf("Count of Vowels : %d ",iRet);

    return 0;
}