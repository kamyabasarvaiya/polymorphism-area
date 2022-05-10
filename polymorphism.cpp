#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

class circle
{
	public:
		float r,a;
		void area()
		{
			cout<<"\nENTER RADIUS OF THE CIRCLE : ";
			cin>>r;
			a=3.14*r*r;
			cout<<"\nAREA OF THE CIRCLE : "<<a;
			cout<<"\n";
			ofstream fout;
			fout.open("circle.txt",ios::app);
			fout<<"\nRADIUS : "<<r<<"\tAREA : "<<a;
			fout.close();
		}
};

class square
{
	public:
		float s,a;
		void area()
		{
			cout<<"\nENTER SIDE OF THE SQUARE : ";
			cin>>s;
			a=s*s;
			cout<<"\nAREA OF THE SQUARE : "<<a;
			cout<<"\n";
			ofstream fout;
			fout.open("square.txt",ios::app);
			fout<<"\nSIDE : "<<s<<"\tAREA : "<<a;
			fout.close();
		}
};

class rectangle
{
	public:
		float l,b,a;
		void area()
		{
			cout<<"\nENTER LENGTH OF THE RECTANGLE : ";
			cin>>l;
			cout<<"\nENTER BREADTH OF THE RECTANGLE : ";
			cin>>b;
			a=l*b;
			cout<<"\nAREA OF THE RECTANGLE : "<<a;
			cout<<"\n";
			ofstream fout;
			fout.open("rectangle.txt",ios::app);
			fout<<"\nLENGTH : "<<l<<"\tBREADTH : "<<b<<"\tAREA : "<<a;
			fout.close();
		}
};

class triangle
{
	public:
		float l,h,a;
		void area()
		{
			cout<<"\nENTER LENGTH OF THE TRIANGLE : ";
			cin>>l;
			cout<<"\nENTER HEIGHT OF THE TRIANGLE : ";
			cin>>h;
			a=(l*h)/2;
			cout<<"\nARE OF THE TRIANGLE : "<<a;
			cout<<"\n";
			ofstream fout;
			fout.open("triangle.txt",ios::app);
			fout<<"\nLENGTH : "<<l<<"\tHEIGHT : "<<h<<"\tAREA : "<<a;
			fout.close();
		}
};

int main()
{
	cout<<"\n%%%%%%%%%% AREA CONVERSION %%%%%%%%%%";
	cout<<"\n\n";
	int ch;
	circle c;
	square s;
	rectangle r;
	triangle t;
	while(ch<=5)
	{
		cout<<"\nPRESS 1 TO FIND AREA OF A CIRCLE";
		cout<<"\nPRESS 2 TO FIND AREA OF A SQUARE";
		cout<<"\nPRESS 3 TO FIND AREA OF A RECTANGLE";
		cout<<"\nPRESS 4 TO FIND AREA OF A TRIANGLE";
		cout<<"\nPRESS 5 TO EXIT";
		cout<<"\nENTER YOUR CHOICE : ";
		cin>>ch;
		if(ch==1)
		{
			c.area();
		}
		if(ch==2)A
		{
			s.area();
		}
		if(ch==3)
		{
			r.area();
		}
		if(ch==4)
		{
			t.area();
		}
		if(ch==5)
		{
			cout<<"\n********** END OF THE PAGE **********";
			break;
		}
	}
}
