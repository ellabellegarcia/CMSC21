// https://github.com/ellabellegarcia/CMSC21/tree/main/Lecture12/Reading-Assignment
//https://github.com/ellabellegarcia/CMSC21/tree/main/Lecture13/Assignment

#include <stdio.h>
#include <math.h>

// create structure point that holds the x and y coordinates.
struct Point {
    float x;
    float y;
};

// Slope = (y₂ - y₁)/(x₂ - x₁) 
float solveSlope(struct Point p1, struct Point p2) {
    return (p2.y-p1.y)/(p2.x-p1.x);
}

// Midpoint = ((x₁ + x₂)/2, (y₁ + y₂)/2)
struct Point solveMidPoint(struct Point p1,struct Point p2) { 
    struct Point mid;
    // store the values into mid 
    mid.x = (p1.x + p2.x)/2;
    mid.y = (p1.y + p2.y)/2;
    return mid;
}

// Distance = √[(x₂ - x₁)² + (y₂ - y₁)²]
float solveDistance(struct Point p1, struct Point p2) { 
    return sqrt((p2.y-p1.y)*(p2.y-p1.y)+(p2.x-p1.x)*(p2.x-p1.x));
}

// y = mx + b
// b = y - mx
void getSlopeInterceptForm(struct Point p1, struct Point p2 , float m){
    float y_intercept = p2.y - (m*p2.x);
    printf("\ny = %.2fx + (%.2f)\n", m, y_intercept);
}


int main()
{
    // declaration
    struct Point pt1,pt2,midPoint;
    
    // ask input from the user
    printf("Enter x coordinate for point1: ");
    // store x coordinate into pt1.x
    scanf("%f",&pt1.x);
    printf("Enter y coordinate for point1: ");
    // store y coordinate into pt1.y
    scanf("%f",&pt1.y);
    
    // ask input for the secoind point 
    printf("Enter x coordinate for point2: ");
    scanf("%f",&pt2.x);
    printf("Enter y coordinate for point2: ");
    scanf("%f",&pt2.y);
    

    /* Printing the results */
    // call solveSlope() function and store it in the slope variable
    printf("-----------------------------------");
    float slope = solveSlope(pt1,pt2);
    printf("\nSlope: %.2f", slope);

    // call solveMidPoint() function and pass pt1 and pt2 as arguments
    // store returned midPoint coordinates into midPoint variable
    midPoint = solveMidPoint(pt1,pt2);
    printf("\nMidpoint: (%.2f, %.2f)",midPoint.x,midPoint.y);

    // call solveDistance() function and pass pt1 and pt2 as arguments
    printf("\nDistance: %.2f",solveDistance(pt1,pt2));
    
    // // call getSlopeInterceptForm() function and pass pt1, pt2 and slope as arguments
    getSlopeInterceptForm(pt1,pt2, slope);
    printf("-----------------------------------\n");
    return 0;
}
