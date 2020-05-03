#include <stdio.h>
#include<string.h>
int main()
{
    int count;                                           //declre variables
    char sentence[100];                                  //declre variables
                                           
    printf("Enter sentence: ");                          //just print
    scanf("%[^\n]", sentence);
    
    while(sentence[count]!= NULL){                      //while sentence isn't end do code 

        printf("%c", sentence[count]);                  //print each char in sentence in the same line
        if(count%10==9) printf("\n");                   //if count to 9 go new line eg.. 
                                                        // 0  1  2  3  4  5  6  7  8  9
                                                        //10 11 12 13 14 15 16 17 18 19 and so on
        count++;                           
    }
                                                           // u see those repeating 0 1 2 3 4 5 6 7 8 9 right? 
    return 0;                                              // the algo here is if count%(a+1)==a when a is the max number per line
}
// testcase >> You are the wind beneath my wings.