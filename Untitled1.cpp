#include<iostream>
using namespace std;
int n;
int b[20];// mang luu cac hoan vi 
bool d[20];// mang luu cac so da duoc danh dau
void ghinhan();// in ra 1 ket qua
void try(int k);// Ham Backtrack
// ham main
int main()
{
	cin<<n;
	try(n);
}
void ghinhan()
{
	cout<<"\n";
	for(int i=1;i<=n;i++)
	cout<<b[i];
}
void try(int k)
{
	int i
	for( i=0;i<=n-1;i++)
	{
		if(!d[k]) b[k]=
	}
}
