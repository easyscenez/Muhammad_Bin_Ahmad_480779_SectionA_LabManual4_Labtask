#include <iostream>
using namespace std;
int main()	{
	int j=0,m=0;
	for (int i=0; i<10; i++){
		cout<<"Enter a natural number."<<endl;
		cin>>m;
		j=j+m;
	}
	cout<<"The sum of these natural numbers is "<<j;
	end of task 1

	int num;
	cout<<"Enter a number whose table upto x 10 will be shown."<<endl;
	cin>>num;
	for(int i=1; i<11;i++)	{
		cout<< num<<" x "<<i<<" = "<<num*i<<endl;
	}
 end of task 2

	double num;
	double j=1;
		cout<<"Enter a positive number for its factorial to be displayed."<<endl;
		cin>>num;
		if (num>=0)	{
			for (double i=0;i<num;i++)	{
				j=j*(num-i);
			}
			cout<<j;
		}
		else {
			cout<<"Inavlid input.";
		}
	end of task 3

	int term1=0;
	int term2=1;
	int num;
	int sum;
	cout<<"Enter the number of terms to be displayed."<<endl;
	cin>>num;
	cout<<"The fibonacci sequence is: "<<endl;
	cout<<term1<<endl;
	cout<<term2<<endl;
	for (int i=2; i<num; i++ )	{
		sum= term1 + term2;
		cout<<sum<<endl;
		term1=term2;
		term2=sum;
		sum=0;
	}
 end of task 4
	
	return 0;
}
