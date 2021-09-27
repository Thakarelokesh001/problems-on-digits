#include<stdio.h>
#include<stdbool.h>

int ReverseDigit(int);
bool CheckPalindrome(int,int);

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number : \t");
    scanf("%d",&iValue);
    
    bRet = ReverseDigit(iValue);
//    printf("%d",iRet);
    
    if(bRet==true)
    {
        printf("Number is a Palindrome\n");
    }
    else
    {
        printf("Number is not a Palindrome\n");
    }
    
    return 0;
}

int ReverseDigit(int iNo)
{
    int iDigit=0;
    int iStore = 0;
    int iTemp = iNo;
    bool bRet = false;
    
    while(iNo!=0)
    {
    iDigit = iNo%10;
    iStore = iStore*10+iDigit;
    iNo=iNo/10;
    }
    bRet = CheckPalindrome(iStore,iTemp);
    return bRet;
}

bool CheckPalindrome(int iNo,int iTemp)
{
    if(iNo==iTemp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

