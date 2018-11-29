#include<iostream>
#include<string>
using namespace std;
class ::Sinhketiep
{
	public : string str;
	public :Sinhketiep(string s)
	{
		str=s;
    }
    public :void setxauketiep()
    {
    	int i;
    	int l=str.length();
    	i=l;
    	while(i>0&&str[i]!="0") i--;
    	str[i]=1;
    	while(i<l-1) str[i]=0;
	}
	public :void display()
	{
		cout<<str;
	}
public static void main()
{
	Sinhketiep Sinh=new Sinhketiep("10000111001010111");
	Sinh.display;
	Sinh.setxauketiep();
	Sinh.display();
	
}
};
	
	
	
	
	
	
	
