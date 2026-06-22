// Accept number from user and Count Even Digits only//

#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0; 

    if(iNo<0)
    {
     iNo = -iNo;
    }

    while(iNo>0)
    {
       iDigit = iNo % 10;
       iNo = iNo/10;

       if((iDigit % 2 )== 0)
       {
         iCount++;
       }

    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);
    printf("Count of Even digit is %d",iRet);

    return 0;
}