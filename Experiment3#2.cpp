/*----------------------------------------------------------------------------------------
Experiment:3
Problem #:2
----------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int province_a[7];
	int province_b[7];
	int province_c[7];
	
	for(int i =0; i<7; i++){
		cout<<"Province A, Day "<<i+1<<": "; cin>>province_a[i];
	}
	for(int i =0; i<7; i++){
		cout<<"Province B, Day "<<i+1<<": "; cin>>province_b[i];
	}
	for(int i =0; i<7; i++){
		cout<<"Province C, Day "<<i+1<<": "; cin>>province_c[i];
	}
	
	
	for(int i=0; i<7; i++){
		cout<<"Province A, Day 1 = "<<province_a[i]<<endl;
	}
	for(int i=0; i<7; i++){
		cout<<"Province B, Day 1 = "<<province_b[i]<<endl;
	}
	for(int i=0; i<7; i++){
		cout<<"Province C, Day 1 = "<<province_c[i]<<endl;
	}
	
	
	return 0;
}
