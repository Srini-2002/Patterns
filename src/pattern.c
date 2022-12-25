#include<stdio.h>
void main()
{
    //1)
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }

    printf("\n");
    //2)
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j<=5;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");
        for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");


    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>i;k--)
        printf(" ");
        for(int j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");

        for(int i=1;i<=5;i++)
    {
        for(int k=1;k<i;k++)
        printf(" ");
        for(int j=5;j>=i;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");

    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");


    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");


    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>i;k--)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");



    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");


    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        printf("%c",j+96);
        printf("\n");
    }
printf("\n");


    for(int i=5;i>=1;i--)
    {
        for(int k=i;k>1;k--)
        printf(" ");
        for(int j=5;j>=i;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");



    for(int i=5;i>=1;i--)
    {
        for(int k=i;k>1;k--)
        printf(" ");
        for(int j=i;j<=5;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");



    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<i;k++)
        printf(" ");
        for(int j=i;j<=5;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");



    for(int i=5;i>=1;i--)
    {
        for(int k=i;k<5;k++)
        printf(" ");
        for(int j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    printf("\n");


    int k=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        printf("%d ",k++);
        printf("\n");
    }

    printf("\n");



    for(int i=1;i<=5;i++){
        for(int k=5;k>=i;k--)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("%d ",j);
        printf("\n");
    }

    printf("\n");


    for(int i=1;i<=5;i++){
        for(int k=5;k>=i;k--)
        printf(" ");
        for (int a=1;a<=4;a++)
         for(int b=a;b>=1;b--)
         printf("%d",a);
         printf("\n");
        for(int j=1;j<=i;j++)
        printf("%d ",j);
        printf("\n");
    }

    printf("\n");
}