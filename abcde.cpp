#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
static int q=0,w=0,e=0,d=0,rem=0;
string a1,b1,temp;
cin>>a1;
cin>>b1;
if(a1<b1){temp=a1;a1=b1;b1=temp;}


const char *a=a1.c_str();
const char *b=b1.c_str();
int le1,le2;
le1=a1.length();
le2=b1.length();
for(int i=0;i<le1;i++)
{
int p=0;
for(int j=0;j<le2;j++)
{
if(p!=0)
continue;
else if(a[i]==b[j])
{q++;p++;}
}
}
rem=(le1+le2)-(2*q);
cout<<endl<<a1<<endl<<b1<<endl<<le1<<","<<le2<<endl<<q<<endl<<rem<<endl;
rem=fabs(rem);
cout<<rem<<endl;

char ab[]={'A','B','C','D','E','F'};
if(rem==0)goto END;
static int pop=0,top=1;
A:{if(pop==5)goto END;else if(ab[0]==' ')goto B;else if(rem==top){ab[0]=' ';top=1;pop++;goto B;}else {top++;goto B;}}
B:{if(pop==5)goto END;else if(ab[1]==' ')goto C;else if(rem==top){ab[1]=' ';top=1;pop++;goto C;}else {top++;goto C;}}
C:{if(pop==5)goto END;else if(ab[2]==' ')goto D;else if(rem==top){ab[2]=' ';top=1;pop++;goto D;}else {top++;goto D;}}
D:{if(pop==5)goto END;else if(ab[3]==' ')goto E;else if(rem==top){ab[3]=' ';top=1;pop++;goto E;}else {top++;goto E;}}
E:{if(pop==5)goto END;else if(ab[4]==' ')goto F;else if(rem==top){ab[4]=' ';top=1;pop++;goto F;}else {top++;goto F;}}
F:{if(pop==5)goto END;else if(ab[5]==' ')goto A;else if(rem==top){ab[5]=' ';top=1;pop++;goto A;}else {top++;goto A;}}
END:
cout<<endl<<ab[0]<<ab[1]<<ab[2]<<ab[3]<<ab[4]<<ab[5]<<endl;
return 0;
}
