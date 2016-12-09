#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Shape
{
public:
	float l;
	Shape (float _l)
	{
		l=_l;
	}

    float gets();
	float getp();
};
class Circle:
	public Shape
{
public:
	Circle(float r):Shape(r)
	{
	}
	float gets()
	{
		return 3.14*(l*l);
	}
	 float getp()
	{
		
	return 2*3.14*l;
	}
};
class prymoug:
	public Shape
{
	float p;
public:
	prymoug(float t, float _p):Shape(t)
	{
		p=_p;
	}
	 float gets()
	{
		return l*p;
	}
	float getp()
	{
		return 2*(l+p);
	}
};
class tr:
	public Shape
{
	float w,c;
public:
	tr(float q, float _w, float _c):Shape(q)
	{
		w=_w;
		c=_c;
	}
	float gets()
	{
		float z;
		z=getp();
		z=z/2;
		return sqrt(z*(z-l)*(z-w)*(z-c));
	}
	float getp()
	{
		return l+w+c;
	}
};





void main()
{
	Circle A(5);
	prymoug D(3,5);
	tr H(1,2,3);

	cout<<"S="<<H.gets();
	cout<<"P="<<H.getp();
	cout<<" ";
	cout<<"S="<<D.gets();
	cout<<"P="<<D.getp();
	cout<<" ";
	cout<<"S="<<A.gets();
	cout<<"P="<<A.getp();
system("pause");
}
	
