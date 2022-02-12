#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int rand_genNo=0,cout=0,num;
    int stime;
    long ltime;
    ltime = time(NULL);
    stime = (unsigned) ltime/2;
    srand(stime);
    rand_genNo=rand()%1000;
     while(1)
    {
        
        cout+=1;
        printf("\n\nGuess a number from (0 to 5): ");
        scanf("%d",&num);
        if(rand_genNo==num){
            printf("Congratulations, you have guessed a correct number.");
            break;
        }
        else if(rand_genNo<num){
            printf("Generated number is less than entered number, try your luck again...");
        }
        else if(rand_genNo>num){
            printf("Generated number is greater than entered number, try your luck again...");
        }
        if(cout==5){
            printf("\n\n### Maximum limit of atttempt finished, BAD LUCK !!!\n");
            break;
        }
    }
     
    return 0;
}
