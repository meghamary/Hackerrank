#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,x,y,z,q,i;
    scanf("%d",&q);
    for(i=0;i<q;i++){
    scanf("%d",&x);scanf("%d",&y);scanf("%d",&z);
   a=abs(z-y);
    b=abs(z-x);
    if(a<b)
        printf("Cat B");
    else if(a>b)
        printf("Cat A");
    else if(a==b)
        printf("Mouse C");
    }
return 0;

}
