Q1)/*Keith's Sheet Music needs a program to implement its music teacher's discount policy.The program prompts the user to enter the purchase total and indicate whether the purchaser is a teacher.
Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is $100 or higher. In that case, the discount is 12%. The discount calculation occurs before the addition of the 5% sales tax. Here are two sample outputs one for a teacher and one for a nonteacher. Use necessary manipulators to format your output.
(For Teacher)
Total purchases:$122.00
Teacher's discount (12%): 14.64
Discounted total: 107.36
Sales tax (5%): 5.37
Total:$112.73
(For Non-teacher)
Total purchases:$24.90
Sales tax (5%):1.25
Total: $26.15
*/

#include<iostream>
using namespace std;
int main()
{
	float tch,cost,dis,stax;
	cout<<"press 1 for teacher and 0 if you are not a teacher";
	cin>>tch;
	if(tch==1)
	{
		cout<<"Enter cost";
		cin>>cost;
		if(cost<100)
		{
		dis=cost-(cost*0.1);
		stax=dis+(dis*0.05);
		cout<<"Total price to be paid "<<stax;
		}
		else
		{
		dis=cost-(cost*0.12);
		stax=dis+(dis*0.05);
		cout<<"Total price to be paid "<<stax;
		}
	}
	else
	{
		cout<<"Enter cost";
		cin>>cost;
		stax=cost+(cost*0.05);
		cout<<"Total price to be paid "<<stax;
	}
}


Q2)/*
2. Write a program that calculates the user's body mass index (BMI and categorizes it as underweight, normal, overweight, or obese, based on the following table from the United States Centers for Disease Control:
BMI                Weight Status
Below 18.5:        Underweight
18.5-24.9:         Normal
25.0-29.9:         Overweight
30.0 and above:    Obese
To calculate BMI based on weight in pounds (wt_lb) and height in inches (ht_in). use this formula (rounded to tenths):
703 * wt_lb /ht_in
Prompt the user to enter weight in pounds and height in inches.
*/
#include<iostream>
using namespace std;
int main()
{
	float wt_lb,ht_in,bmi;
	cout<<"Enter your weight in pounds: ";
	cin>>wt_lb;
	cout<<"Enter your height in inches: ";
	cin>>ht_in;
	bmi=703*wt_lb/ht_in;
	if(bmi<18.5)
	{
		cout<<"Under weight";
	}
	else if(bmi>=18.5 && bmi<24.9)
	{
		cout<<"Normal";
	}
	else if(bmi>=25.0 && bmi<29.9)
	{
		cout<<"Overweight";
	}
	else if(bmi>=30)
	{
		cout<<"obese";
	}
}

Q3)
/*
The National Earthquake Information Center has asked you to write a program implementing the following decision table to characterize an earthquake based on its Richter scale number.
Richter Scale Number (n)   Characterization
n < 5.0                    Little or no damage
5.0≤-n<5.5                 Some damage
5.5<=n<16.5                Serious damage: walls may crack or fall
5.6<=n<7.5                 Disaster: houses and buildings may collapse              
higher                     Catastrophe: most buildings destroyed                  
*/
#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"Enter earthquake intensity: ";
	cin>>n;
	if(n<5.0)
	{
		cout<<"Little or no damage";
	}
	else if(n>=5.0 && n<5.5)
	{
		cout<<"Some damage";
	}
	else if(n>=5.5 && n<6.5)
	{
		cout<<"Serious damage";
	}
	else if(n>=6.5 && n<7.5)
	{
		cout<<"Disaster";
	}
	else if(n>=7.5)
	{
		cout<<"Catastrophe";
	}
}
