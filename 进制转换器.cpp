#include<iostream>
using namespace std;
void ten_two(int n)
{
	int a[15],i;
	for(i=0;n!=0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	for(i=i-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}
void ten_eight(int n)
{
	int a[15],i;
	for(i=0;n!=0;i++)
	{
		a[i]=n%8;
		n=n/8;
	}
	for(i=i-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}
void ten_16(int n)
{
	int a[15],i;
	char c;
	for(i=0;n!=0;i++)
	{
		a[i]=n%16;
		n=n/16;
	}
	for(i=i-1;i>=0;i--)
		if(a[i]<10)
			cout<<a[i];
		else
		{
			c='A'+a[i]-10;
			cout<<c;
		}
	cout<<endl;
}
int cf(int a,int n)
{
	int i,x=1;
	for(i=1;i<=n;i++)
		x=x*a;
	return x;
}
int two_ten(int x)
{
	int i,n=0;
	for(i=0;x!=0;i++)
	{
		n=n+x%10*cf(2,i);
		x=x/10;
	}
	return n;
}
int rev2_8(int n,int d)
{
int x=0,i;
for(i=0;n!=0;i++)
{
x=x+n%10*cf(d,i);
n=n/10;
}
return x;
}
int rev16(char s[],int d)
{
	int x=0,i,n;
	n=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
	if(s[i]>='0' && s[i]<='9')
	x=x+(s[i]-'0')*cf(d,n-1-i);
	else
	x=x+(s[i]-'A'+10)*cf(d,n-1-i);
	}
	return x;
}
int main()
{
int d10,d2,d8,n,x;
char d16[10];
while(1)
{
cout<<"************************"<<endl;
cout<<"* 1-十进制数转二进制数 *"<<endl;
cout<<"* 2-十进制数转八进制数 *"<<endl;
cout<<"* 3-十进制数转16进制数 *"<<endl;
cout<<"*----------------------*"<<endl;
cout<<"* 4-二进制数转十进制数 *"<<endl;
cout<<"* 5-八进制数转十进制数 *"<<endl;
cout<<"* 6-16进制数转十进制数 *"<<endl;
cout<<"*----------------------*"<<endl;
cout<<"* 0-  退  出  程  序   *"<<endl;
cout<<"************************"<<endl;
cout<<"请输入一个数字选择对应的功能：";
cin>>x;
if(x>=1 && x<=3)
{
	cout<<"请输入一个十进制数：";
	cin>>n;
	if(x==1)
	{
		cout<<"十进制数 "<<n<<" 对应的二进制数为：";
		ten_two(n);
	}
	else if(x==2)
	{
		cout<<"十进制数 "<<n<<" 对应的八进制数为：";
		ten_eight(n);
	}
	else
	{
		cout<<"十进制数 "<<n<<" 对应的16进制数为：";
		ten_16(n);
	}
}
else if(x>=4 && x<=6)
{
	if(x==6)
	{
		gets(d16);
		while(strlen(d16)==0)
		{
			cout<<"请输入一个16进制数：";
			gets(d16);
		}
		d10=rev16(d16,16);
		cout<<"16进制数 "<<d16<<" 对应的十进制数为：";
		cout<<d10<<endl;
	}
	else if(x==4)
	{
		cout<<"请输入一个二进制数：";
		cin>>d2;
		d10=rev2_8(d2,2);
		cout<<"二进制数 "<<d2<<" 对应的十进制数为：";
		cout<<d10<<endl;
	}
	else
	{
		cout<<"请输入一个八进制数：";
		cin>>d8;
		d10=rev2_8(d8,8);
		cout<<"八进制数 "<<d8<<" 对应的十进制数为：";
		cout<<d10<<endl;
	}
}
else
	break;
system("pause");
system("cls");
}
return 0; 
}

	



