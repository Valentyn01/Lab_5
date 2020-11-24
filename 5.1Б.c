#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int a[10];
int i;
for (i=0;i<10;i++)
{

scanf("%d\n",&a[i]);
}
for (i=0;i<10;i++)
{
if(a[i]%2!=0 && a[i]<10)
printf("a[%d]: %d\n",i,a[i]);
}

	return 0;
}