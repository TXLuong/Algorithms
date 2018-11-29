#include <bits/stdc++.h>
using namespace std;
class ::Sinh
{
	public: string s;
	        Sinh(string str)
	{
		s=str;
	}
	        void inxauketiep()
	{
		int l=s.length();
		int i=l;
		while(i>1&&s[i]=="0")
		{
			i--;
		}
		s[i]=1;
		for(;i<=l;i++)
		{
			s[i]=0;
		}
		cout<<this.s<<endl;
	}
};
int main()
{
	Sinh S=new Sinh("1001011");
	S.inxauketiep();
}

