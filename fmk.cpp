#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

int Radm(int l,int r)
{
	return ((rand()<<16)|rand())%(r-l)+l;
}

int main(int argc,char *argv[])
{
	srand(time(NULL));
	int n,m,l,r;
	sscanf(argv[1],"%d",&n);
	sscanf(argv[2],"%d",&m);
	if(argc>=4)
	{
		sscanf(argv[3],"%d",&l);
		sscanf(argv[4],"%d",&r);
	}
	else
	{
		l=10,r=100;
	}
	freopen("p3373.in","w",stdout);
	printf("%d %d 571373\n",n,m);
	for(int i=1;i<n;i++)
		printf("%d ",Radm(l,r));
	printf("%d\n",Radm(l,r));
	for(int i=0;i<m;i++)
	{
		int f=Radm(1,4),x=Radm(2,n+1);
		if(f==1||f==2)
			printf("%d %d %d %d\n",f,Radm(1,x),Radm(x,n+1),Radm(l,r));
		else
			printf("%d %d %d\n",f,x=Radm(1,n+1),Radm(x,n+1));
	}
	return 0;
}
