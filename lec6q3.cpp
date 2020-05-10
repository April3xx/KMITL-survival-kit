#include <stdio.h>
#include <conio.h>

int main()
{
    int count;                                           //declare variables
    char sentence[100];                                  //declare variables
                                           
    printf("Enter sentence: ");                          //just print
    scanf("%[^\n]", sentence);
    
    while(sentence[count]!='\0'){                      //while sentence isn't end do code 

        printf("%c", sentence[count]);                  //print each char in sentence in the same line
        if(count%10==9) printf("\n");                   //if count to 9 go new line eg.. 
                                                        // 0  1  2  3  4  5  6  7  8  9
                                                        //10 11 12 13 14 15 16 17 18 19 and so on
        count++;                        
    }

    getch();                                                       
                                                            // u see those repeating 0 1 2 3 4 5 6 7 8 9 right? 
    return 0;                                              // the algo here is if count%(a+1)==a when a is the max number per line
}
// testcase >> You are the wind beneath my wings.
// char sentence[10]=catcat;
// c a t c a t '\0'
// 0 1 2 3 4 5 6 7 8 9
// 10 11 12

// AM PM /12 
