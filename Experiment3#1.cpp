/*----------------------------------------------------------------------------------------
Experiment:3
Problem #:1
----------------------------------------------------------------------------------------*/
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int num_of_elements = 10;
	int smallest, largest;
	double average = 0.0;
	int num[num_of_elements];
	
	for(int i=0; i<num_of_elements; i++){
		cout<<"Enter value for number "<<i+1<<": "; cin>> num[i];
		
		if(i == 0){
			smallest = num[i];
			largest = num[i];
			average += num[i]/num_of_elements;
		}
		else{
			if(smallest > num[i]){
				smallest = num[i];
			}
			if(largest < num[i] ){
				largest = num[i];
			}
			average += num[i]/num_of_elements;
		}
	}
	
	cout<<"The smallest number is: "<<smallest<<endl;
	cout<<"The largest number is: "<<largest<<endl;
	cout<<"The average number is: "<<average<<endl;
	
	return 0;
}
