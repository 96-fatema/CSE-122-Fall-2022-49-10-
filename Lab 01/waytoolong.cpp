//codeforces problem no :71A
//codeforces problem namen :Way Too Long Words

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int n,len;

cout<<"enter your number:";
cin>>n;

 for(int i=0;i<=n;i++)
 {
     char s[101];
     cin>>s;
 len=strlen(s);

   if(len<=10)
   {
  cout<<s<<endl;

   }else
   {
int f=len-2;
 cout<<s[0]<<f<<s[len-1]<<endl;
   }
}
return 0;
}
