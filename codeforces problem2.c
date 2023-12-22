#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
	{
	    float x ,y ,z;
	    scanf("%f %f",&x,&y);
	    z=x/2;
	    if(z<=y)
	    {
	        printf("Yes\n");
	    }
	    else{
	    printf("No\n");}
	}
	return 0;
}


