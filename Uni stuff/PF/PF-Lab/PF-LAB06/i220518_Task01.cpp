#include<iostream>
using namespace std;
int main(){

	char letter;
	cout<<"Enter any letter"<<endl;
	cin>>letter;
	if(letter== 'a' || letter== 'e'|| letter== 'i'|| letter== 'o'|| letter== 'u'){
	
		cout<<"Input : \'"<<letter<<"\'"<<endl;
		cout<<"Output : Vowel"<<endl;
	
	}
	else{
	
		cout<<"Input : \'"<<letter<<"\'"<<endl;
		cout<<"Output : Consonent"<<endl;
		
	}

}
