#include<stdio.h>

int b[20];// In ra chuoi nhi phan khong chua k bit 0 lien tiep

int n;// Do dai chuoi nhi phan

int countZero=0;// Bien toan cuc de dem so bit 0 lien tiep

int count=0;// Dem chuoi nhi phan thoa man bai toan

int  k;// Nhap tu ban phim,  

void ghinhan();//

int xau(int m);// ham Backtrack

int main()

{
	
	printf("Nhap gia tri cua n=   va  k=  \n");
	
	scanf("%d",&n);
	
	scanf("%d",&k);
	
	xau(1);
	
	printf("\n So chuoi nhi phan khong chua k bit 0 lien tiep la :%d",count);
    
	
	return 1;
}
void ghinhan()

{
	count++;

	printf("\n");
	
	for(int i=1;i<=n;i++)
	{
		printf("%d",b[i]);
	}
	return;
}
int xau (int m)
{
     if(countZero==k-1)
     {
     	b[m]=1;
     	if(m==n) ghinhan();
     	else 
     	{
     		countZero=0;
     		xau(m+1);
		}
	 }
	 else
     {
     	{
     		b[m]=0;
     		if(m==n) ghinhan();
     		else 
     		{
     			countZero++;
     		    xau(m+1);
			}
		}
		{
			b[m]=1;
			if(m==n) ghinhan();
			else 
			{
				countZero=0;
				xau(m+1);
			}
		
		}
	 }
}

























