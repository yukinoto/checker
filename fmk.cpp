#include <stdio.h>
#include <stdlib.h>

int Radm(int l,int r)
{
	if(l>=r)
		return -1;
	return ((rand()<<16)|rand())%(r-l)+l;
}

int main(int argc,char *argv[])
{
	int n,m,l,r;
	sscanf(argv[1],"%d",n);
	sscanf(argv[2],"%d",m);
	sscanf(argv[3],"%d",l);
	sscanf(argv[4],"%d",r);
	freopen("p333.in","r",stdin);
	printf("%d %d 571373\n",n,m);
	for(int i=1;i<n;i++)
		printf("%d ",Radm(l,r));
	printf("%d\n",Radm(l,r));
	for(int i=0;i<m;i++)
	{
		int f=Radm(1,4),x=Radm(2,n);
		printf("%d ",f);
		switch (f)
		{
			case 1:
				printf("%d %d %d\n",Radm(1,x),Radm(x,n+1),Radm(l,r));
				break;
			case 2:
				printf("%d %d %d\n",Radm(1,x),Radm(x,n+1),Radm(l,r));
				break;
			case 3:
				printf("%d %d\n",Radm(1,x),Radm(x,n+1));
				break;
		}
	}
	return 0;
}