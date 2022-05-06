#include<stdio.h>
int search(int a[]);
int main()
{
    int a[10],b;
    for (int i=1;i<=10;i++)
    {
        printf("please enter the no. ");
        scanf("%i",&a[i]);
    }
    search(a);
    return 0;
}
int search(int a[])
{
    int b;
    printf("please enter the no to be searched: ");
    scanf("%i",&b);
    for (int  j=1;j<=10;j++)
    {
        if (a[j]==b)
        {
            printf("the no found on %i location of the array.",j);
        }
    }
    return 0;
}