#include<stdio.h>
#include<conio.h>
//so common register it is...
void printa(int *a){
    printf("***********************\n");
    printf("address of pointer a %u\n",&a);
    printf("value in pointer a %u\n",a);
    printf("value being referenced to in pointer a %u\n",*a);
    printf("***********************\n");
}
void printb(int *b){
    printf("address of pointer b %u\n",&b);
    printf("value in pointer b %u\n",b);
    printf("value being referenced to in pointer b %u\n",*b);
    printf("***********************\n");
}
void printc(int *c){
    printf("address of pointer c %u\n",&c);
    printf("value in pointer c %u\n",c);
    printf("value being referenced to in pointer c %u\n",*c);
    printf("***********************\n");
}
void printz(int a , int b,int c,int d,int e,int f, int g, int h, int i, int j, int k,int l,int m){
    printf("%u\n",&a);
    printf("%u\n",&b);
    printf("%u\n",&d);
    printf("%u\n",&e);
    printf("%u\n",&f);
    printf("%u\n",&g);
    printf("%u\n",&h);
    printf("%u\n",&i);
    printf("%u\n",&j);
    printf("%u\n",&k);
    printf("%u\n",&l);
    printf("%u\n",&m);
}
int main(){
    int a = 1;
    int b = 2;
    int c = 3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13;
    printf("************************\n");
    printf("address of int a : %u \n",&a);
    printf("value of int a   : %u \n",a);
    printf("address of int b : %u \n",&b);
    printf("value of int b   : %u \n",b);
    printf("address of int c : %u \n",&c);
    printf("value of int c   : %u \n",c);
    printf("************************\n");
    printa(&a);
    printb(&b);
    printc(&c);
    printz(a,b,c,d,e,f,g,h,i,j,k,l,m);

}