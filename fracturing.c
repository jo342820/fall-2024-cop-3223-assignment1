//********************************************************
// fracturing .c
// Author: Joshua Trexler 5331607
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
double Distance();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv)
{
    //Distance();
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

//Function to calculate the distance between two points
double Distance()
{
    double x1, y1, x2, y2;

    //Request points from user
    printf("Enter Point #1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter Point #2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);

    //Calculate distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    //Output results
    printf("Point #1 entered: x1 = %.0lf; y1 = %.0lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.0lf; y2 = %.0lf\n", x2, y2);
    
    return distance;
}

//Function to calculate the distance between two points and print result
double calculateDistance()
{
    double dist = Distance();

    printf("The distance between the two points is %.2lf\n", dist);
    
    return 1.0;
}

//Function to calculate the perimeter of a circle
double calculatePerimeter()
{
    double dist = Distance();

    //Perimeter of a circle with the distance as the diameter
    double perimeter = PI * dist;
    
    //Output results
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 2.0;
}

//Function to calculate the area of a circle
double calculateArea()
{
    double dist = Distance();
    
    //Area of a circle with the distance as the diameter
    double radius = dist / 2;
    double area = PI * pow(radius, 2);
    
    //Output results
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 2.0;
}

//Function to calculate the width
double calculateWidth()
{
    double dist = Distance();

    double width = dist;
    
    //Output results
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 1.0;
}

//Function to calculate the height
double calculateHeight()
{
    double dist = Distance();
    
    double height = dist;
    
    //Output results
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 1.0;
}


