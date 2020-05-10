#include <stdio.h>
#include <conio.h>
#include<string.h>
void test(int i){
    i+=200;
   // printf("i in func %d",i);
    
}

int main(){

  int i =20;

  test(i);

  printf("i in main%d",i);
  
  //pass by value
}
