//Q) Profit/loss
#include <iostream>
using namespace std;
int main() {
    float cp,sp,diff;
    cout<< "Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    
    diff=(sp-cp)/cp*100;
    
    if(cp>sp)
    {
        cout<<"You have made a loss of "<<diff<<"%";
    }
    else if(sp>cp)
    {
        cout<<"You have made a profit of "<<diff<<"%";
    }
    else
    {
        cout<<"Neither profit nor loss";
    }

    return 0;
}

//Q) //odd/even
#include <iostream>
using namespace std;
int main() {
    
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	if(a%2==0)
	{
	 	cout<<"Entered number is Even";
	}
	else
	{
	  	cout<<"Entered number is Odd";
	}

    return 0;
}

//Q)leap year
#include <iostream>
using namespace std;
int main() {
    
	int year;
	cout<<"Enter any year: ";
	cin>>year;
	if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      {
          cout<<year<<" is a leap year";
      }   
   else
      {
          cout<<year<<" is a not leap year";
      }

    return 0;
}

/*Q) A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.*/
//leap year

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    
	int num,num1,rev_num=0,i=4,j;
	cout<<"Enter any five digit number: ";
	cin>>num;
	num1=num;
	while(num!=0)
	{
		j=num%10;
		rev_num=rev_num+j*pow(10,i);
		num=num/10;
		i--;
	}
	cout<<"the reversed number is: "<<rev_num<<endl;
	if(num1==rev_num)
	{
		cout<<"Same";
	}
	else
	{
		cout<<"not same";
	}
    return 0;
}
