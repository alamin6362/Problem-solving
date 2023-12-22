#include<stdio.h>
int main ()
{
    int a;
    float max,v;
    while(scanf("%d",&a)!=EOF){
        max=11;
        while(a--){
            scanf("%f",&v);
            if(v<max){
                max=v;
            }
        }
        printf("%.2f",max);
    }




    return 0;
}
