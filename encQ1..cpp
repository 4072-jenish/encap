#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int a,b,c,x;
	cout<<"Enter number :- "<<endl;
	cin>>a;
	cout<<"Enter number :- "<<endl;
	cin>>b;
   try{
   	if(a==0){
   		throw 44;
   }else{
   	  c=a/b;
   }
}
 catch(int x){
  	cout<<"cann't divide by 0..."<<endl;
  }
	
}









