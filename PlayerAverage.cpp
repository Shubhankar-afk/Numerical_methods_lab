//Program to calculate the average of the cricketer
#include<iostream>
//#include<stdlib.h>
using namespace std;
struct player{
  string name;
  int runs_scored;
  int notouts;
  int innings;
}p;

int main(){
	float avg;
	//system("cls");
	cout<<"Enter the name of the player: ";
	getline(cin, p.name);
	cout<<"Enter the number of innings of the player: ";
	cin>>p.innings;
	cout<<"Enter the number of notouts of the player: ";
	cin>>p.notouts;
	cout<<"Enter the number of runs scored by the player: ";
	cin>>p.runs_scored;
	if(p.innings>p.notouts){
		avg=(float)(p.runs_scored)/(p.innings-p.notouts);
		cout<<"Average runs: "<<avg;
	}
	else if(p.innings==p.notouts){
		avg=(float)(p.runs_scored)/(p.notouts);
		cout<<"Average runs: "<<avg;
	}
	else
		cout<<"Number of notouts can't exceed number of innings.";
	return 0;
}