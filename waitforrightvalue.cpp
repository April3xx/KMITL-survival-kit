#include<stdio.h>
#include <conio.h>
int main(){
    int number;
            do{
                printf("pls input ur number asshole :");
                scanf("%d",&number);
            }
            while(!((2<=number)&&(number<=25)) );
            
    printf("good job motherfucker ur number is %d",number);
    getch();
    return(0);
}