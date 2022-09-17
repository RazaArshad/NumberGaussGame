#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number; int user; int i=0; int k;

    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
   printf("The number is: %d\n", number); 
   do {
     printf("Guess the Number in between 1 to 100:\n");
    scanf("%d",&user);
    if(number == user){
    printf("You got it 'WINNer'\n");}
    else if (number<user){
        printf("Guess number is greater ");

    }
    else{
        printf("Guess number is less!\n");
    }
    i = i+1;

   }while(user!= number);

printf("Total number of Step taken by user %d", i);

    return 0;
    
}