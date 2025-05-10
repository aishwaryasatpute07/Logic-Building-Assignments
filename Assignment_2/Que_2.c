 
 // print 5 times marvellous on screen
  
 #include<stdio.h>\

 void Display(int iNo)
 {
    int iCnt = 0;
    iCnt = iNo;
    while(iNo >= 1)
    {
        printf("*");
        iNo--;
    }
 }
 int main()
 {
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
 }