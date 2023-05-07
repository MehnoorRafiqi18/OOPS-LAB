/*
Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types.
*/
#include <iostream>
using namespace std;

double power(double dd, int p) {
	double power = 1;
	for(int i=1; i<=p; i++)
		power *= dd;
	return power;
}

char power(char ch, int p) {
	char power = 1;
	for(int i=1; i<=p; i++)
		power *= ch;
	return power;
}

int power(int no1, int p) {
	int power = 1;
	for(int i=1; i<=p; i++) 
		power *= no1;
	return power;
}

long power(long numb, int p) {
	long power = 1;
	for (int i=1; i<=p; i++)
		power *= numb;
	return power;
}

float power(float number, int p) {
	float power = 1.0;
	for (int i=1; i<=p; i++)
		power *= number;
	return power;
}

int main(){
    double num1;
	char num2;
	int num3;
	long num4;
	float num5;

	cout << "Enter a double value: ";
	cin >>num1;
	cout << "Power of " << num1 << " is: " <<power(num1) << endl;

	cout << "\nEnter a char value: ";
	cin >>num2;
	cout << "Power of " << num2 << " is: " << power(num2) << endl;

	cout << "\nEnter a int value: ";
	cin >> num3;
	cout << "Power of " << num3 << " is: " << power(num3) << endl;

	cout << "\nEnter a long value: ";
	cin >> num4;
	cout << "Power of " << num4 << " is: " << power(num4) << endl;

	cout << "\nEnter a float value: ";
	cin >> num5;
	cout << "Power of " << num5 << " is: " << power(num5) << endl;

    return 0;
}

/*
In ocean navigation, locations are measured in degrees and minutes of latitude and longitude. 
Thus if you’re lying off the mouth of Papeete Harbor in Tahiti, your location is 149
degrees 34.8 minutes west longitude, and 17 degrees 31.5 minutes south latitude. This is
written as 149°34.8’ W, 17°31.5’ S. There are 60 minutes in a degree. (An older system
also divided a minute into 60 seconds, but the modern approach is to use decimal minutes
instead.) Longitude is measured from 0 to 180 degrees, east or west from Greenwich,
England, to the international dateline in the Pacific. Latitude is measured from 0 to 90
degrees, north or south from the equator to the poles.
Create a class angle that includes three member variables: an int for degrees, a float
for minutes, and a char for the direction letter (N, S, E, or W). This class can hold either
a latitude variable or a longitude variable. Write one member function to obtain an angle
value (in degrees and minutes) and a direction from the user, and a second to display the
angle value in 179°59.9’ E format. Also write a three-argument constructor. Write a
main() program that displays an angle initialized with the constructor, and then, within a
loop, allows the user to input any angle value, and then displays the value. You can use
the hex character constant ‘\xF8’, which usually prints a degree (°) symbol.
*/
#include<iostream>

using namespace std;

class angle{
    int degrees;
    float minutes;
    char direction;
    public:
        angle():degrees(0), minutes(0), direction(0) {	}
        void getData(int, float, char);
        void display();
};

void angle::getData(int dgr, float mnt, char dir){
    degrees = dgr;
    minutes = mnt;
    direction = dir;
}

void angle::display() {
    cout << "Angle: " << degrees << "\xF8 " << minutes << "\' " << direction;
    if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w') {
		cout << " Longitude !";
	} if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's') {
		cout << " Latitude !";
	}
}

int main(){
    int degr;
	float mint;
	char drct, choice;
	angle angle2;

	do {
		cout << "\nEnter the degree: ";
		cin >> degr;
		cout << "Enter the minutes: ";
		cin >> mint;
		cout << "Enter the direction(N, S, E, W): ";
		cin >> drct;

		angle2.getData(degr, mint, drct);
		angle2.display();

		cout << "\nDo you want to enter another angle for navigation (Y, N): ";
		cin >> choice;
	} while(choice == 'Y' || choice == 'y' );
	cout << endl;
    return 0;
}

/*
Create a class that includes a data member that holds a “serial number” for each object
created from the class. That is, the first object created will be numbered 1, the second 2,
and so on.
To do this, you’ll need another data member that records a count of how many objects
have been created so far. (This member should apply to the class as a whole; not to
individual objects. What keyword specifies this?) Then, as each object is created, its
constructor can examine this count member variable to determine the appropriate serial
number for the new object.
Add a member function that permits an object to report its own serial number. Then
write a main() program that creates three objects and queries each one about its serial
number. They should respond I am object number 2 , and so on.
*/

#include <iostream>
using namespace std;

class serailCount{
	private:
		static int count;	
		unsigned int serialNumber;
	public:
		serailCount() {
			count++;
			serialNumber = count;
		}
		void display() const;
};

int serailCount::count = 0;	

void serailCount::display() const { 
	cout << "I am object number " << serialNumber << endl;
}

int main() {
	serailCount obj1, obj2, obj3;
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}

/*
 Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the object;
another should report the serial number and position. Write a main() program that creates 
three ships, asks the user to input the position of each, and then displays each ship’s
number and position.
*/
#include<iostream>
using namespace std;

class angle{
    int degrees;
    float minutes;
    char direction;
    public:
        void getAngle();
        void dispAngle();
};

class ship {
    private:
		angle latitude, longitude;
		static int count;
		unsigned int shipNumber;
	public:
		ship() {	
			count++;
			shipNumber = count;
		}
		void getPosition();	
		void display(); 
};

int ship::count = 0;	//defination of count

void angle::getAngle(){
    cout << "\nEnter degrees: ";
	cin >> degrees;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter directions(E, W, N, S): ";
	cin >> direction;
}

void ship::getPosition() {	
	cout << "\nEnter longitude of ship: ";
	longitude.getAngle();
	cout << "\nEnter latitude of ship: ";
	latitude.getAngle();
}

void ship::display(){	
	cout << "Ship Serial Number: " << shipNumber << endl;
	longitude.dispAngle();
	cout << endl;
	latitude.dispAngle();
    cout << endl;
}

void angle::dispAngle(){
	cout << degrees << "\xF8" << minutes << "\' " << direction;
	if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w') {
		cout << " Longitude !";
	} if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's') {
		cout << " Latitude !";
	}
}

int main(){
    ship ship1, ship2, ship3;	
	cout <<"\nEnter first ship position: ";
	ship1.getPosition();	
	cout <<"\nEnter second ship position: ";
	ship2.getPosition();	
	cout <<"\nEnter third ship position: ";
	ship3.getPosition();

	cout <<"\nFirst Ship Position is: \n";
	ship1.display();	
	cout <<"\nSecond Ship Position is: \n";
	ship2.display();
	cout <<"\nThird Ship Position is: \n";
	ship3.display();	

    return 0;
}
