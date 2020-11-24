#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int a[8];
int i;
for (i=0;i<8;i++)
{

scanf("%d\n",&a[i]);
}
for (i=0;i<8;i++)
{
if(a[i]%2==0)
printf("a[%d]: %d\n",i,a[i]);
}

	return 0;
}