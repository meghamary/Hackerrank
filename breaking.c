#include<stdio.h>
void main()
{
int i, high,low,scores[20],scores_count,result_count[2];
scanf("%d",&scores_count);
for(i=0;i<scores_count;i++)
{
    scanf("%d",&scores[i]);
}
high=scores[0];low=scores[0];
result_count[0]=0;
result_count[1]=0;
    for(i=1;i<scores_count;i++)
    {
        if (scores[i]>high)
        {
            high=scores[i];
            result_count[0]++;
        }
    }
     for(i=1;i<scores_count;i++)
    {
        if(scores[i]<low)
        {
            low=scores[i];
            result_count[1]++;
        }
    }

   printf("%d %d",result_count[0],result_count[1]);

}
