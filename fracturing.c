//********************************************************
// fracturing .c
// Author: Joshua Trexler
// Class: COP 3223, Professor Parra
// Purpose: This program is a calculator used to determine multiple properties given two points.
// Input: requires two cartesian points
//
// Output: Distance, perimeter, area, width, height.
// //********************************************************

#include <stdio.h>
#include <math.h>

//Defining a value for PI
#define PI 3.14159

//Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

//Function to calculate the distance between two points
double calculateDistance()
{
    double x1, y1, x2, y2;
    
    //Request points from user
    printf("Enter Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    //Calculate distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    //Output results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance, 3;
}

//Function to calculate the perimeter of a circle
double calculatePerimeter()
{
    double distance = calculateDistance();
    
    //Perimeter of a circle with the distance as the diameter
    double perimeter = PI * distance;
    
    //Output results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 2.0;
}

//Function to calculate the area of a circle
double calculateArea()
{
    double distance = calculateDistance();
    
    //Area of a circle with the distance as the diameter
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    
    //Output results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 2.0;
}

//Function to calculate the width
double calculateWidth()
{
    double distance = calculateDistance();

    double width = distance;
    
    //Output results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 1.0;
}

//Function to calculate the height
double calculateHeight()
{
    double distance = calculateDistance();
    
    double height = distance;
    
    //Output results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 1.0;
}
