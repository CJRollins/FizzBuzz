//FizzBuzz Code Assignment
//written in C
#include <stdio.h>

int main(int argc, char *argv[])
{
    for(int i=0;i<101;i++){
        if(i%15==0){printf("Fizzbuzz\n");}
        else if(i%5==0){printf("Buzz\n");}
        else if(i%3==0){printf("Fizz\n");}
        else{printf("%d\n",i);}
    }
}
