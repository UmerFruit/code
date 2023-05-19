#include <iostream>
using namespace std;
int main(){
	int sec;
	cout<<"enter time in seconds"<<endl;
	cin>>sec;
	cout<<sec/3600<<" Hours : "<<((sec%3600)/60)<<" minutes : "<<(sec%60)<<"seconds";
	

}
