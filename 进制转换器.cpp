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
cout<<"* 1-ʮ������ת�������� *"<<endl;
cout<<"* 2-ʮ������ת�˽����� *"<<endl;
cout<<"* 3-ʮ������ת16������ *"<<endl;
cout<<"*----------------------*"<<endl;
cout<<"* 4-��������תʮ������ *"<<endl;
cout<<"* 5-�˽�����תʮ������ *"<<endl;
cout<<"* 6-16������תʮ������ *"<<endl;
cout<<"*----------------------*"<<endl;
cout<<"* 0-  ��  ��  ��  ��   *"<<endl;
cout<<"************************"<<endl;
cout<<"������һ������ѡ���Ӧ�Ĺ��ܣ�";
cin>>x;
if(x>=1 && x<=3)
{
	cout<<"������һ��ʮ��������";
	cin>>n;
	if(x==1)
	{
		cout<<"ʮ������ "<<n<<" ��Ӧ�Ķ�������Ϊ��";
		ten_two(n);
	}
	else if(x==2)
	{
		cout<<"ʮ������ "<<n<<" ��Ӧ�İ˽�����Ϊ��";
		ten_eight(n);
	}
	else
	{
		cout<<"ʮ������ "<<n<<" ��Ӧ��16������Ϊ��";
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
			cout<<"������һ��16��������";
			gets(d16);
		}
		d10=rev16(d16,16);
		cout<<"16������ "<<d16<<" ��Ӧ��ʮ������Ϊ��";
		cout<<d10<<endl;
	}
	else if(x==4)
	{
		cout<<"������һ������������";
		cin>>d2;
		d10=rev2_8(d2,2);
		cout<<"�������� "<<d2<<" ��Ӧ��ʮ������Ϊ��";
		cout<<d10<<endl;
	}
	else
	{
		cout<<"������һ���˽�������";
		cin>>d8;
		d10=rev2_8(d8,8);
		cout<<"�˽����� "<<d8<<" ��Ӧ��ʮ������Ϊ��";
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

	



