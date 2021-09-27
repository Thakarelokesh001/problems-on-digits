#include<stdio.h>

int EvenDigitAddtion(int);

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number :\t");
    scanf("%d",&iValue);
    
    iRet = EvenDigitAddtion(iValue);
    printf("Sum of Even Digits is: %d \t",iRet);
    
    return 0;
}

int EvenDigitAddtion(int iNo)
{
    int iDigit=0;
    int iSum=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        iDigit = iNo%10;
        
        if(iDigit % 2 ==0)
        {
            iSum = iSum+iDigit;
        }
        iNo = iNo /10;
    }
    return iSum;
    
}

