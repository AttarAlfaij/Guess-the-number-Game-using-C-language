#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int random_no = (rand()%100)+1;
int no_of_guess=0;
int guess_number;
do 
{
    printf("Welcome in Guess number Game:");
    scanf("%d",&guess_number);
    if(guess_number>random_no)
    {
        printf("please enter the lower no.\n");

    }
    else if(guess_number<random_no)
    {
        printf("please enter the higher no.\n");
    }
    else
    {
        printf("congrats\n");
    }
    no_of_guess++;


}while(guess_number!=random_no);
printf("the no.of guesses is : %d\n",no_of_guess);
return 0;

}