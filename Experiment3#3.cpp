/*----------------------------------------------------------------------------------------
Experiment:3
Problem #:3
----------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	char word[] = {
		 'e'
		,'n'
		,'g'
		,'1'
		,'9'
		,'0'
		,'7'
	};
	
	char reverse[7];
	
	reverse[0] = word[5];
	reverse[1] = word[3];
	reverse[2] = word[6];
	reverse[3] = word[4];
	reverse[4] = word[0];
	reverse[5] = word[2];
	reverse[6] = word[1];
	
	cout<<reverse<<endl;
	cout<<"size of the array is: "<<sizeof(reverse);
	return 0;
}
