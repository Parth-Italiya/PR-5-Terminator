/*
1. WAP to create a class which illustrate the concept of handling all types of exceptions using general
exception.
Output:
u can't procced further	
*/

#include<iostream>
using namespace std;

class Exceptions{
	public :
	int a;
	int b;
	int c;
	int age;
	void error(){
		try{
			if(b==0){
				throw 7;
			}else{
				c=a/b;
				cout<<c<<endl;
			}
			if(age<18){
				throw 77;
			}else{
				age<18;
				cout<<age<<endl;
			}
		}
		catch(...){
		cout<<"u can't procced further"<<endl;
	}
	}
	};
int main(){
	
	Exceptions e1;
	e1.error();
	
	return 0;
}
