#include<stdio.h>
int main()
{
int i,b[5]={1,2,3,4,5},arr_count,arr[50],c[5],max,ans;
int c1=0,c2=0,c3=0,c4=0,c5=0;
scanf("%d",&arr_count);
for(i=0;i<arr_count;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<arr_count;i++)
{
    if(arr[i]==1)
    {
        c1++;
    }

        if(arr[i]==2)
    {
        c2++;
    }
        if(arr[i]==3)
    {
        c3++;
    }
    if(arr[i]==4)
    {
        c4++;
    }
    if(arr[i]==5)
    {
        c5++;
    }

}
c[1]=c1;c[2]=c2;c[3]=c3;c[4]=c4;c[5]=c5;
max=c[1];
for(i=2;i<6;i++)
{
    if(max<c[i])
    {
        max=c[i];
        ans=i;
    }
}
printf("%d",ans);
}
