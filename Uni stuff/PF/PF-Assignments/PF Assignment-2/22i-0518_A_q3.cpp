/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include<iostream>
using namespace std;
int main(){
	int p1,p2;
	cout<<"ROCK PAPER SCISSORS GAME\n\n";
	cout<<"Rock = 1\nPaper = 2\nScissors = 3\n";
	
	cout<<"Player one Enter choice : "<<endl;
	cin>>p1;
	cout<<"Player two Enter choice : "<<endl;
	cin>>p2;
	
	switch (p1)
	{
		case 1: 
				switch(p2){
				
				case 1: cout<<"Draw"<<endl; break;
				case 2: cout<<"Player 2 wins"<<endl; break;
				case 3: cout<<"Player 1 wins"<<endl; break;
				}
				break;
				
		case 2: 
				switch(p2){
				
				case 2: cout<<"Draw"<<endl; break;
				case 3: cout<<"Player 2 wins"<<endl; break;
				case 1: cout<<"Player 1 wins"<<endl; break;
				}
				
				break;
				
		case 3: 
				switch(p2){
				
				case 3: cout<<"Draw"<<endl; break;
				case 1: cout<<"Player 2 wins"<<endl; break;
				case 2: cout<<"Player 1 wins"<<endl; break;
				}
				break;
	}
}
