#include <stdio.h>
#include <stdbool.h>

// ## Practice Problem: Valid Triangle Function

// Write a function that determines if three lengths can form a valid triangle.

// ### Requirements:

// - Function name: valid_triangle
// - Parameters: Three floating-point numbers (sides of triangle)
// - Return type: bool (true/false)

// ### Rules for Valid Triangle:

// - All sides must have positive length
// - Sum of any two sides must be greater than the third side


    //Prototypes:
    int two_side_of_triangle(int side_A, int side_B);
    int last_side_of_triangle(int side_C);
    int valid_triangle();

    //Variables
    int side_A;
    int side_B;
    int side_C;


int main()
{
int two_side_of_triangle(int side_A, int side_B);
printf("The total of of your two sides are %d\n ", two_side_of_triangle(side_A, side_B) );
int last_side_of_triangle(int side_C);
printf ("Size C for triangle is, %d\n", last_side_of_triangle(side_C));
int valid_triangle();

}


int two_side_of_triangle(int side_A, int side_B)
{
    printf("What is your first number for Side A on the Triangle: \n");
    scanf("%d", &side_A);

    printf("What is your second number for Side B on the Triangle: \n");
    scanf("%d", &side_B);
    int results = side_A + side_B;
    return results;
}

int last_side_of_triangle(int side_C)
{
    printf("What is the last side of the triangle: \n");
    scanf("%d", &side_C);
    int result_of_input = side_C;
    return result_of_input;
}

//thinking i need two more functions i need to have a function that checks all the numbers to see if they valid and over 0 and another one 

    int valid_triangle(side_A, side_B,side_C)
    {
        if(side_A <=0 || side_B <=0 || side_C <= 0 )
        {
            printf("Sides must be positve");
        }
        if(side_A + side_B <= side_C)
        {
            printf("PRINT Sum sof side A and side B must be greater than side C.");
            
        }
 
    }