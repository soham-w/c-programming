// Find Length of string  //

#include<stdio.h>
 

int StrLenX(char *str)       
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter your full name : \n");
    scanf("%[^'\n]s",Arr);
    iRet = StrLenX(Arr);    

    printf("String length is : %d ",iRet);

    return 0;

}