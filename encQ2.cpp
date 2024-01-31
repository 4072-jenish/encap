#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int e,x;
	cout<<"Enter you age :- "<<endl;
	cin>>e;
  try{
  	if(e>=18){
  		throw 77;
	  }else{
	  	cout<<"you are not capable for vote"<<endl;
	  }
  }
 catch(int x){
  	cout<<"you are capable for vote"<<endl;
  }
	
}









