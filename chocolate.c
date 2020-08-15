#include<stdio.h>
void main()
{

int i,count=0,j,p,s[50],d,m,s_count;
scanf("%d",&s_count);
for(i=1;i<=s_count;i++)
{
    scanf("%d",&s[i]);
}
scanf("%d",&m);scanf("%d",&d);
    for(i=1;i<=s_count;i++)
    {
        p=0;
        for(j=i;j<=m;j++)
        {
            p=p+s[j];
        }


            if(p==d)
            {
            count++;
            }

        m=m+1;
    }
printf("%d",count);

}
