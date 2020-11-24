#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void) {
const int col=5, Low=-100, High=100;
int sum=0;
srand(time(0));
int a[col];
for (int i=0; i<col; i++)
a[i]=Low+rand()%(High-Low+1);
for(int i = 0; i < col; i++) //введення данних
{
  if(a[i]<0)
  sum+=a[i];
}
for (int i=0; i<col; i++) 
printf("a[%d]=%d\n", i, a[i]);
printf("суму від’ємних елементів масиву:%d", sum);
int ma,mi,dob=1;
int min = a[0];
int max = a[0];
for(int i=0; i<col; i++)  //макс. число
{
  if(a[i]<min)
  {
    min=a[i];
  }
}
for(int i=0; i<col; i++) //індекс макс. числа
{
  if(min==a[i])
  {
    mi=i;
  }
}
for(int i=col-1; i>=0; i--) //мін. число
{
  if(a[i] > max)
   {
   max = a[i];
   }
}
for(int i=col-1; i>=0; i--) //індекс мін. числа
{
  if(max==a[i])
   {
   ma=i;
   }
}
if(ma>mi)
{
for(int i=mi+1; i<ma; i++)
{
    dob*=a[i];
}
printf("\nдобуток елементів масиву, розташованих між максимальним і мінімальним елементами:%d",dob);
}
else if(ma<mi)
{
for(int i=ma+1; i<mi; i++)
{
    dob*=a[i];
}
printf("\nдобуток елементів масиву, розташованих між максимальним і мінімальним елементами:%d",dob);
}
  return 0;
}