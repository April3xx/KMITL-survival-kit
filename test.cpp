#include <stdio.h>
#include <string.h>
int main () {
int i=9,j=10,*a=&i,*b=&j;
*a = *a * *a +*b;
printf("%d*****%d",*a,*b);
}