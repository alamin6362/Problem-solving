#include<stdio.h>
int main ()
{
   int a[]={1,2,3,4,5,6,7,8,9},item =9;
   int left,right,mid;
   left=0;
   right=8;
        while (left<=right)
        {
            mid=(left+right)/2;
            if(a[mid]==item)
            {
                printf("%d",mid);
                return 0;
            }
            else if(a[mid]<item)
            {
                left=mid+1;
            }

        else{
            right=mid-1;
        }
    }


    return 0 ;
}
