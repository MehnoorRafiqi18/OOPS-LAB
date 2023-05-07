/*
 A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers. The interchange might
look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212
*/
#include<iostream>
using namespace std;
struct phone{
	int areacode, exchange, number;
};

int main(){
	phone p1, p2={212,767,8900};

	cout << "Enter your areacode, exchange, and number: ";
	cin >> p1.areacode >> p1.exchange >> p1.number;
	
	cout << "My number is (" << p2.areacode << ") " << p2.exchange << "." << p2.number << endl;
	cout << "Your number is (" << p1.areacode << ") " << p1.exchange << "." << p1.number << endl;
	return 0;
}

/*
A point on the two-dimensional plane can be represented by two numbers: an x coordinate and a y coordinate. For example, (4,5) represents a point 4 units to the right of the
vertical axis, and 5 units up from the horizontal axis. The sum of two points can be
defined as a new point whose x coordinate is the sum of the x coordinates of the two
points, and whose y coordinate is the sum of the y coordinates.
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point. Interaction with the program
might look like this:
Enter coordinates for p1: 3 4
Enter coordinates for p2: 5 7
Coordinates of p1+p2 are: 8, 11
*/

#include<iostream>
using namespace std;
struct point{
	int x, y;
};

int main(){
	point p1, p2, p3;
	
	cout << "Enter cordinates for p1: ";
	cin >> p1.x >> p1.y;
	cout << "Enter cordinates for p2: ";
	cin >> p2.x >> p2.y;
	
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	
	cout << "Coordinates of p1+p2 are: " << p3.x << ", " << p3.y << endl;
	return 0;
}
