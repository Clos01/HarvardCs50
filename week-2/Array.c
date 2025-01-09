#include <stdio.h>


//creating a prototype. Making a promise to the program
    void printArray();


// Steps for walking on health 

//start of program 
int main()
{
    //Calling a function 
printArray();

//returning 0 to tell the program 0 is okay anything other than 0 is not okay a
    return 0;
}
    //Creating a function 
    void printArray()
    {
    //initializing the the array by assigning it 3 places to store 3 values starting from 0 in the array 
    int steps[3];
    //Storage of where the memory allocation will contain 0 contains the value of 2769
    steps[0] = 2769;
    steps[1] = 6000;
    steps[2] = 8054;

        //creating a for loop anything less than 3 of array value has to print and it checks it one time at a time so first it runs the for loop one time at a time and then it runs the main 
        for(int i =0; i < 3;i++ )
        {
            printf("%d\n", steps[i]);
        }
    }