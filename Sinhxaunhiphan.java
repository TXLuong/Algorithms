
package sinhxaunhiphan;
import java.util.Scanner;
public class Sinhxaunhiphan {
    public StringBuffer n;
    public char bool0='0',bool1='1';
    Sinhxaunhiphan(){
    }
    public void setter(StringBuffer str)
    {
        this.n=str;
    }
    public void sinhketiep()
    {
        int i;
        int l=this.n.length();
        for(i=l-1;i>=0;i--)
        {
            if(this.n.charAt(i)==bool0) // find character in string that is "0"
            {
                this.n.setCharAt(i, bool1);// if can find then set there like 1 instead 0
                break;
            }
            else this.n.setCharAt(i, bool0);// if find character 1 in string then we'll set it is 0
        }
        if(i<0) this.n.insert(0,bool1);
        System.out.println(this.n);
     
    }
    public static void main(String[] args) {
        
        StringBuffer a=new StringBuffer();
        Scanner keyboard = new Scanner(System.in);
        a.append(keyboard.nextLine());
        Sinhxaunhiphan Xau =new Sinhxaunhiphan();
        Xau.setter(a);
        Xau.sinhketiep();
        
    }
    
}
