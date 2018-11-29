#include<stdio.h>
#include<math.h>
int main()
{
	int n;bool R=false;// Bien R de danh dau xem n co phai la so nguyen to khong 
	printf("Nhap gia tri cua n \n");
	scanf("%d",&n);
	for (int i=2;i<=floor(sqrt(n));i++)
	
	{
		if(n%i==0) 
		{
			R=true;
			break;
		}
	}
	if(R)   printf("%d khong phai la so nguyen to ",n);
	else    printf("%d la so nguyen to \n",n);
	return 1;
}
