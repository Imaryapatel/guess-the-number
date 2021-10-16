#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguess = 1;

    srand(time(0));
    number = rand()%100+1;

    //printf("the number is %d\n",number);

    do
    {
        printf("Guess the number!\n");
        scanf("%d",&guess);

        if(guess>number)
        {
          printf("lower number please\n");
        }
        else if(guess<number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("you guessed the number\n");
        }
        nguess++;
    }
    while(guess!=number);

    return 0;
}
