// In the Array convert Negative number into Positive //

#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{   
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
       if(Arr[i] < 0) 
        {
          Arr[i] = - Arr[i];         
        }                     
    }    
} 
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    
    printf("Enter a number of Elememts that you wantt to enter :");
    scanf("%d",&iCount);                

    Brr = (int*)calloc(iCount,sizeof(int));  
    
    printf("Enter the elemenst: \n");
    for(i = 0; i < iCount; i++)
    {
       scanf("%d",&Brr[i]);
    }

    Updator(Brr,iCount);
    
    printf("Updated elements Are : \n");
    for(i = 0; i < iCount; i++)
    {
       printf("%d\n",Brr[i]);
    }


    free(Brr);
    
    return 0; 

    
}