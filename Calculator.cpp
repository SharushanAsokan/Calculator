#include<iostream>
using namespace std;
int main(){
	float num1,num2;
	int cal;
	
	cout<<"----------CALCULATOR----------"<<endl;
	
	do{
	cout<<"Enter Two Numbers="<<endl;
	cin>>num1>>num2;
	
	cout<<"Please select the following operators to perform operation(Press 0 To Exit)"<<endl;
	cout<<"Press 1 to Add"<<endl<<"Press 2 to Subtract"<<endl<<"Press 3 to Multiply"<<endl<<"Press 4 to Divide"<<endl;
	
	cout<<endl;
	

		cin >> cal;
		switch(cal){
			case 1:
				cout<<" The addition of "<<num1<< " and "<<num2<<"="<<num1+num2<<endl; 
				cout<<endl;
				break;
			case 2:
				cout<<" The Substraction of "<<num1<< " and "<<num2<<"="<<num1-num2<<endl; 
				cout<<endl;
				break;
			case 3:
				cout<<" The Multiplication of "<<num1<< " and "<<num2<<"="<<num1*num2<<endl;
				cout<<endl; 	
				break;
			case 4:
				cout<<" The Division of "<<num1<< " and "<<num2<<"="<<num1/num2<<endl; 
				cout<<endl;	
				break;	
			case 0:
				break;
			default:
				cout<<"Invalid operator. Please try again."<<endl;
		}
	}
	while(cal!=0);
	
	
}

