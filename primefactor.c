#include<stdio.h>
int main()
{
    int num,fact;
    printf("\n Enter the Number ");
    scanf("%d",&num);
    printf("\n The Factors of %d are ",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            printf(" %d",i);
    }
    printf(" \n The Prime Factor Are ");
    if(num%2==0)

    {
        printf(" 2 ");
    }
    for(int i=3;i<=num;i++)
    { int flag=0;
        if(num%i==0)
            for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
                fact=i;
            }
        }
        if(flag==1)
            printf("%d ",fact);
    }

printf("\n");
return 0;
}
