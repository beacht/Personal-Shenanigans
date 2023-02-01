#include <stdio.h>

int main()
{
    printf("Welcome to the Collatz Conjecture!\n");
    printf("The Collatz Conjecture works as follows:\n");
    printf("Pick any number you want.\n");
    printf("If it's odd, multiply by 3 and add 1.\n");
    printf("If it's even, divide by 2.\n");
    printf("The Collatz Conjecture states that for any number, you will eventually get into a loop of 4 -> 2 -> 1.\n");
    printf("For our purposes, we will stop once we encounter a 1.\n");
    printf("Below are the first 10 terms.\n\n");
    for(int i = 1; i <= 10; i++){
        int steps = 0;
        int n = i;
        printf("n = %d: %d ", n, n);
        while(n != 1){
            if(n % 2 == 0) //Even
                n = n / 2;
            else //Odd
                n = (n * 3) + 1;
            steps++;
            printf("%d ", n);
        }
        printf("(%d steps)\n", steps);
    }
    
    while(1){
        printf("\nEnter a number: ");
        int n;
        scanf("%d", &n);
        printf("n = %d: %d ", n, n);
        
        int steps = 0;
        while(n != 1){
            if(n % 2 == 0) //Even
                n = n / 2;
            else //Odd
                n = (n * 3) + 1;
            steps++;
            printf("%d ", n);
        }
        printf("(%d steps)\n", steps);
    }

    return 0;
}
