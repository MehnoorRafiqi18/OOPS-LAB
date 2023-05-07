Q)/*
Write a program in C that takes the x, y coordinates of a point in the Cartesian plane as inputs and prints
a message indicating either the axis on which the point lies or the quadrant in which it is located.
*/
#include<iostream>
using namespace std;

int main () 
{

  int x, y;	
  cout << "Enter the coordinate : ";
  cin >> x >> y;
  if (x > 0 && y > 0)
  {
      cout << "(" << x << ", " << y << ") lies in the First quadrant\n";
  }
  else if (x < 0 && y > 0)
  {
      cout << "(" << x << ", " << y << ") lies in the Second quadrant\n";
  }
  else if (x < 0 && y < 0)
  {
      cout << "(" << x << ", " << y << ") lies in the Third quadrant\n";
  }
  else if (x > 0 && y < 0)
  {
      cout << "(" << x << ", " << y << ") lies in the Fourth quadrant\n";
  }
  else if (x == 0 && y == 0)
  {
      cout << "(" << x << ", " << y << ") is at origin\n";
  }
  else if (y == 0 && x > 0)
  {
      cout << "(" << x << ", " << y << ") lies in positive x axis\n";
  }
  else if (y == 0 && x < 0)
  {
      cout << "(" << x << ", " << y << ") lies in negative x axis\n";
  }
  else if (x == 0 && y > 0)
  {
      cout << "(" << x << ", " << y << ") lies in positive y axis\n";
  }
  else if (x == 0 && y < 0)
  {
      cout << "(" << x << ", " << y << ") lies in negative y axis\n";
  }

return 0;
}

Q)
/*
Write a program that interacts with user like this:
1)Carbon Monoxide
2)Hydrocarbons
3)Nitrogen Oxides
4)Nonmethane hydrocarbons
Enter pollutant number
Enter odometer reading
output: Emission exceed permitted level of___ grams/mile
                         
                         first 50000 Miles      Second 50000 miles
Carbon Monoxide          3.4 grams/mile         4.3 grams/mile
Hydrocarbons             0.31 grams/mile        0.39 grams/mile
Nitrogen Oxides          0.4 grams/mile         0.5 grams/mile
Nonmethane hydrocarbons  0.25 grams/mile        0.31 grams/mile
*/
#include<iostream>
using namespace std;

int main () 
{

  int x;
  float y;	
  cout << "Enter 1 for Carbon Monoxide\n";
  cout << "Enter 2 for Hydrocarbon\n";
  cout << "Enter 3 for Nitrogen oxides\n";
  cout << "Enter 4 for Non-methane hydrocarbons\n";
  cin >> x;
  
  cout <<"Enter odometer reading: ";
  cin >>y;
  if (x==1)
  {
      if(y<=50000)
      {
          cout << "Emission exceeed permitted level of 3.4 grmas/mile"<<endl;
      }
      else
      {
          cout << "Emission exceeed permitted level of 4.2 grmas/mile"<<endl;
      }
  }
  
  if (x==2)
  {
      if(y<=50000)
      {
          cout << "Emission exceeed permitted level of 0.31 grmas/mile"<<endl;
      }
      else
      {
          cout << "Emission exceeed permitted level of 0.39 grmas/mile"<<endl;
      }
  }
  
  if (x==3)
  {
      if(y<=50000)
      {
          cout << "Emission exceeed permitted level of 0.4 grmas/mile"<<endl;
      }
      else
      {
          cout << "Emission exceeed permitted level of 0.5 grmas/mile"<<endl;
      }
  }
  
  if (x==4)
  {
      if(y<=50000)
      {
          cout << "Emission exceeed permitted level of 0.25 grmas/mile"<<endl;
      }
      else
      {
          cout << "Emission exceeed permitted level of 0.31 grmas/mile"<<endl;
      }
  }

return 0;
}

Q)
/*
A library function, islower (), takes a single character (a letter) as an argument and returns a nonzero integer if 
the letter is lowercase, or zero if it is uppercase. This function requires the header file CTYPE.H.
Write a program that allows the user to enter a let-ter, and then displays either zero or nonzero, 
depending on whether a lowercase or uppercase letter was entered.
*/

#include<iostream>
#include<CTYPE.H>
using namespace std;

int main () 
{

  int x;
  char ch;	
  cout << "Enter character: ";
  cin >> ch;
  
  x=islower(ch);
  cout << x;

return 0;
}
