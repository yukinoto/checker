#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>

int main(int argc,char *argv[])
{
	while(true)
	{
		char cache[50];
		sprintf(cache,"fmk");
		for(int i=1;i<argc;i++)
			sprintf(cache+strlen(cache)," %s",argv[i]);
		system(cache);
		printf("State :\n");
		clock_t start,end;
		start=clock();
		system("p3373");
		end=clock();
		printf("My :%dms\n",end-start);
		start=clock();
		system("ans");
		end=clock();
		printf("Ans :%dms\n",end-start);
		system("fc p3373.out ans.out");
		system("pause");
		printf("\n");
	}
	return 0;
}
