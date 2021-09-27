//Header File Inclusion
#include<stdio.h>

//Function Declaration
void Display(int);

//Entry Point Function
int main()
{
    int iValue=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    Display(iValue);  //Function Call
    return 0;
}

//Function Definition
void Display(int iNo)
{
    //Local Variables
    int iDigit=0;
//    iDigit = iNo%10; //1   //Expression
//    printf("%d\n",iDigit);
//    iNo = iNo/10;   //752
////    printf("%d\n",iNo);
//
//    iDigit = iNo%10;    //2
//    printf("%d\n",iDigit);
//    iNo=iNo/10; //75
//
//    iDigit = iNo%10;    //5
//    printf("%d\n",iDigit);
//    iNo = iNo/10;   //7
//
//    iDigit = iNo%10;    //7
//    printf("%d\n",iDigit);
//    iNo = iNo/10;   //0
    
    while(iNo!=0)   //while(iNo>0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
    
}
