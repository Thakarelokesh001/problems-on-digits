#include<stdio.h>

int ReverseDigits(int);

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number :\t");
    scanf("%d",&iValue);
    
    iRet = ReverseDigits(iValue);
    printf("Reverse Digits are: %d \t",iRet);
    
    return 0;
}

int ReverseDigits(int iNo)
{
    int iDigit=0;
    int iRev=0;
    
//    if(iNo<0)
//    {
//        iNo=-iNo;
//    }
    
    while(iNo!=0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iRev = (iRev * 10) + iDigit;
        iNo = iNo /10;
    }
    return iRev;
    
}


