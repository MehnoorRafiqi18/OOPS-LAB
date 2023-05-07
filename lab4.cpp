/*1. Write a program that will find the smallest, largest, and average values in a collection of N numbers. 
Get the value of M before scanning each value in the collection of N numbers.*/

#include<iostream>
using namespace std;
int main()
{
	int i,n,j,temp;
	float sum=0;
	cout<<"How many elements are in your collection: ";
	cin>>n;
	int a[n];
	cout<<"Enter numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
/*	cout<<"your collection: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}*/
	cout<< endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]<=a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
/*	cout<<"Sorted array: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}*/
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"largest: "<<a[0]<<endl;
	cout<<"smallest"<<a[n-1]<<endl;
	sum=sum/n;
	cout<<"Average: "<<sum<<endl;
}

/*
2. Modify your program to compute and display both the range of values in the data collection and the standard deviation of the data collection. 
To compute the standard deviation. accumulate the sum of the squares of the data values ( sum _squares) in the main loop. After loop exit, use the formula
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n,j,temp,range;
	float sum=0,std_dev,avg;
	cout<<"How many elements are in your collection: ";
	cin>>n;
	int a[n];
	cout<<"Enter numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<< endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]<=a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}

	range=a[0]-a[n-1];
	
	cout<<"Range: "<<range<<endl;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	avg=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+pow(a[i],2);
	}
	std_dev=sqrt((sum/n)-pow(avg,2));
	cout<<"Standard deviation: "<<std_dev<<endl;
}

/*
3. Write a program to process a collection of daily high temperatures. Your program should count and print the number of hot days (high temperature 85 or higher). 
The number of pleasant days (high temperature 60-84) and the number of cold days (high temperatures less than 60).
*/
#include<iostream>
using namespace std;
int main()
{
	int i,n,high=0,low=0,pleasant=0;
	cout<<"How many days are in your collection: ";
	cin>>n;
	int a[n];
	cout<<"Enter temperatures: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=85)
		{
			high++;
		}
		else if(a[i]>=60 && a[i]<=84)
		{
			pleasant++;
		}
		else if(a[i]<60)
		{
			low++;
		}
	}
	cout<<"Hot days: "<<high<<endl;
	cout<<"Cold days: "<<low<<endl;
	cout<<"pleasant days: "<<pleasant<<endl;
	
}
