#include <stdio.h>

int const SIZE = 5;
int main()
{
    //Declare array
    int numbers[SIZE];
    numbers[0] = 1;

for(int i =1; i < SIZE; i++)
{
numbers[i] = numbers[i-1] * 2;


}
    // int numbers[5] = {1, 2, 4, 8, 16};

    //Print out each element in the array
    
    for (int i =0; i < 5; i++)
    {
        printf("%d\n", numbers[i]); 
        
    }



return 0;
}

//