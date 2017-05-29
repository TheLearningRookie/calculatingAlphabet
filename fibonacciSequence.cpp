#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int initial, terminal, firstHolder, secondHolder, thirdHolder, fibonacciResult, decision = 0, backupHolder;
MENU:
	cout<<"fibonacci sequence"<<endl<<endl;
	cout<<"enter a series: ";
	cin>>terminal;
	initial = 0;
	for(initial; initial<terminal; initial++){
		firstHolder = initial;
		secondHolder = firstHolder;
		thirdHolder = firstHolder + initial;
		fibonacciResult = thirdHolder;
		initial++;
		cout<<fibonacciResult<<endl;
	}
	cout<<"again?"<<endl;
	cout<<"1-yes\n0-no;"<<endl;
	cin>>decision;
	if(decision == 1){
		system("clear");
		goto MENU;
	}else{
		return 0;
	}
}
