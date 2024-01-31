#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char p[100];
	int a;
	cout<<"Enter your password :- "<<endl;
	cin>>p[100];
  try{
  	if(p<65||p>90){
  		throw 77;
	  }else{
	  	cout<<"password is not valid "<<endl;
	  }
  }
 catch(...){
  	cout<<"password is valid "<<endl;
  }
	
}









