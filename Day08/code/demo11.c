#include<stdio.h>

/*
Program: Print all prime numbers in a given range

Steps:
1. Function check_prime(num)
   -> returns 1 if num is prime
   -> returns 0 if num is NOT prime

2. Function range(min, max)
   -> uses check_prime() to print all primes between min and max
*/


// Function Declarations
int check_prime(int);
void range(int, int);


int main()
{
    int min = 2, max = 100;

    // Function Call
    range(min, max);

    return 0;
}


//------------------------------------------------------
// Function: Prints all prime numbers between min and max
void range(int min, int max)
{
    while(min <= max)
    {
        // call check_prime() for each number
        if(check_prime(min))
        {
            printf("%d ", min);  // print if prime
        }
        min++;  // check next number
    }
    printf("\n");
}


//------------------------------------------------------
// Function: Returns 1 if num is prime, 0 otherwise
int check_prime(int num)
{
    int i = 2;

    // special case: numbers < 2 are not prime
    if(num < 2)
        return 0;

    // check divisibility from 2 to num/2
    while(i <= num/2)
    {
        if(num % i == 0)   // divisible → not prime
        {
            return 0;
        }
        i++;
    }
    return 1;   // if no factors found → prime
}
