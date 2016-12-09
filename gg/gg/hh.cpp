#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char s1[]="1234567",s2[]="abcdefg",s3[]="ABCDEFG",p[15],f[15],g[15],e x[15],j[15],k[15],w[15];
	int l=strlen(s3);
	//strcat(s1,s2);
	//strcat(s1,s3);

	strncpy(p,s1+1,4);
	p[4]='\0';
	//printf("%s",d);
	strncpy(f,s2+3,1);
	f[1]='\0';
    //printf("%s",f);
	strncpy(g,s3+3,l-3);
	g[l-3]='\0';
	//printf("%s",g);
	strcat(p,f);
	strcat(p,g);
	printf("stroca p %s \n",p);
	strncpy(e,s1,1);
	e[1]='\0';
	//printf("%s",h);
	strncpy(j,s2+1,3);
	j[3]='\0';
	//printf("%s",j);
	strncpy(k,s2+2,3);
	k[3]='\0';
	//printf("%s",k);
	strncpy(w,s3+2,3);
	w[3]='\0';
	//printf("%s",w);
	strcat(x,j);
	strcat(x,p);
	strcat(x,k);
	strcat(x,w);
	printf("stroca x %s \n",x);
	system("pause");
}