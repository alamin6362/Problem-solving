#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,1000,11} , pos,size=11;
    printf("which position you want to delete?");
    scanf("%d",&pos);
    for( int i=pos-1;i<=size-2;i++)
    {
        a[i]=a[i+1];
    }
    a[size-1]=NULL;
    for (int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }



    return 0;
}
