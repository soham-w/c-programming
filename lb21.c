// Accept a number from user and check Frequency of that element //

#include<stdio.h>
#include<stdlib.h>

int CheckFrequency(int Arr[],int iSize ,int iNo)
{
    int iFrequency = 0 ;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
      if(Arr[iCnt] == iNo)
       {
          iFrequency++;
       }
    }
  return iFrequency;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0,  iNum = 0, iRet = 0, i = 0;

    printf("Enter how elements do you want to print: \n");
    scanf("%d",&iLength);

    ptr = (int*)calloc(iLength,sizeof(int));
    
    printf("Enter a Elements of array :\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter number  you want check frequency :\n");
    scanf("%d",&iNum);

    iRet = CheckFrequency(ptr,iLength,iNum);
    printf("the Frequency of %d is : %d ",iNum,iRet);
    
    free(ptr);
    
    return 0 ;
}