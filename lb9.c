#include<stdio.h>

unsigned long int Factorial(int iNo)
{    
   int iCnt = 0;
   unsigned long int iFact = 1;


    for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
         
        iFact = iFact * iCnt;
     }
    return iFact;

}

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("%lu is factorial",iRet);  // format spcifier %lu for long unsigned//

    return 0 ;
}