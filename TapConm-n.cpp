#include<stdio.h>
int m,n,count=0;
int b[20];
void ghinhan()
{
	printf("\n");
	for(int i=1;i<=m;i++)
	printf("%d",b[i]);
	return;
}
void xau (int k)
{
	int i;
	for(i=b[k-1]+1;i<=n-m+k;i++)
	{
		
		{
			b[k]=i;
			if(k==m)
			{
				 ghinhan();
				 count++;
			}
			else xau(k+1);
		}
	}
}
int main()
{

	b[0]=0;
	printf("nhap n va m ");
	scanf("%d  %d",&n,&m);
	xau(1);
	printf("\n %d",count);
	return 1;
	
}
