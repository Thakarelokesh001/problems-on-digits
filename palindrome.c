#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int);

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number : \t");
    scanf("%d",&iValue);
    
    bRet = CheckPalindrome(iValue);
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

bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iStore = 0;
    int iTemp = iNo;
    
    
    while(iNo!=0)
    {
    iDigit = iNo%10;
    iStore = iStore*10+iDigit;
    iNo=iNo/10;
    }
//    printf("%d",temp);
    if(iStore == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
