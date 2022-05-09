#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0)) ;
    number = rand ()%100 + 1 ; //Generate random number between 1 to 100//
    printf("The number is %d" ,number);
    //Keep running the loop until the number is guessed//
    return 0 ;
}