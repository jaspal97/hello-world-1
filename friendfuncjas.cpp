#include<iostream>
using namespace std;
class convertor
{	
	float l;
	public:
	inline int getgcd(int a, int b)
	{
		if(a==0)
			return b;
		return getgcd(b%a,a);
	}
	convertor(int len)
	{
		l=len;	
	}
	friend void convert(convertor c,int);
};
void convert(convertor c, int i)
{
	float new_l;
	switch (i)
	{
		case 1:new_l=2.54*c.l;
		cout<<"Converted length: "<<new_l<<" cm ";
		break;
		case 2:new_l=1.60934*c.l;
		cout<<"Converted length: "<<new_l<<" km ";
		break;
		case 3:new_l=0.6213*c.l;
		cout<<"Converted length: "<<new_l<<" miles ";
		break;
		case 4:new_l=0.3937*c.l;
		cout<<"Converted length: "<<new_l<<" inch ";
		break;
	}
	cout<<endl;
}
int main()
{
	cout<<"Jaspreet 161210023\n";
	int i;
	float len;
	cout<<"Unit of length? \n1.Inch\n2.Mile\n3.Kilometre\n4.Centimetre\n";
	cin>>i;
	cout<<"Enter length :";
	cin>>len;
	convertor c(len);
	convert(c,i);
	return 0;	
}//updated by jaspal97
	
