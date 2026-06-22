// Accept number from user and Display odd Digits only//

#include<stdio.h>

void CountEvenDigit(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
     iNo = -iNo;
    }
    

    while(iNo>0)
    {
       iDigit = iNo % 10;
       iNo = iNo/10;

       if((iDigit % 2 )!=0)
       {
        printf("Odd number is %d \n",iDigit);
       }

    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    CountEvenDigit(iValue);
    

    return 0;
}