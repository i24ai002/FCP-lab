#include<stdio.h>
int main()
{
    int num,q,sum=0,temp;
    printf("enter number\n");
    scanf("%d",&num);
    temp=num;
    
    while(num>0)
    {
        q = (num%10);
        sum = (sum*10)+q;
        num = (num/10);
    }    
        
        if(temp==sum)
        {
            printf("palindrone");
        }
        else
        {
            printf("not a palindrone");
        }
    
    return 0;
}