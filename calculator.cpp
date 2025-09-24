#include <iostream>
using namespace std ;
int main(){
	char  option ;
	double n1, n2 , result = 0 ;
	cout<<"Enter option ('+','-','*','/') :"<<endl;
	cin>>option ;
	cout<<"Enter first number : "<< endl;
	cin>>n1;
	cout<<"Enter second number : "<< endl;
	cin>>n2;
	if(option=='+'||option=='-'||option=='*'||option=='/')
	{
		if(option=='+')
		result = n1+n2;
		else if(option=='-')
		result = n1-n2;
		else if(option=='*')
		result = n1*n2;
		else if(option=='/'){
		if(n2==0)
		{
			cout<<"Cannot divided by 0 ."<<endl;
			return 0 ;
			}
			result = n1/n2;	
		}
	cout<< n1 << " " << option << " " << n2 << " = " << result << endl;	
	}
	else{
		cout<<"Invalid option ! "<< endl;
		
	}
	return 0 ;
	
	
	
}
