#include<stdio.h>
int n,m,b[20];// chinh hop chap m cua n
int count=0;
bool d[20];
void ghinhan()
{
	printf("\n");
	for(int i=1;i<=m;i++)
	printf("%d",b[i]);
	return ;
}
void xau(int k)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(!d[i])
		{
			b[k]=i;
			d[i]=true;// danh dau la gia tri i da duoc chiem giu
		if(k==m) 
		{
			ghinhan();
			count++;
		}
		else xau(k+1);
	    d[i]=false;// dua ve dang truoc khi duoc danh dau ,de xet tiep
	    }
	}
}
int main()
{
	for(int i=0;i<n;i++)
	d[i+1]=false;
	printf("hay nhap gia tri cua n va m \n");
	scanf("%d %d",&n,&m);
	xau(1);
	printf("\n tat ca co %d  ket qua ",count);
}
