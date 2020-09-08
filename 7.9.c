#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 ,num2 ;
    char c ;
    printf("enter a 12-hour time\n");
    scanf ("%d%c%d",&num1,&c,&num2);
    num1 = num1+12 ;
    printf("24-hour time = %d:%d",num1,num2);
    return 0;
}
