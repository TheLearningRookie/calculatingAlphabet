#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int decision = 0;
	string name;
MENU:
	cout<<"enter name: ";
	cin>>name;
	cout<<"hello there, "<<name<<endl;
	cout<<"again?"<<endl;
	cout<<"1-yes\n0-no"<<endl;
	cin>>decision;
	if(decision == 1){
		system("clear");
		goto MENU;
	}else{
		return 0;
	}
}
