#include<stdio.h>
#include <conio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);

    for(i=1;i<num+1;i++)
    {
        for(j=i;j>0;j--)
        {
         printf("0");   
        }
        printf("\n");
    }
    getch();
    return(0);
}