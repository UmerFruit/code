#include <iostream>
#include <string>
using namespace std;
int main(){
   
	string grade;
	cout<<"Enter obtained marks from A+ to D and F : "<<endl;
	cin>>grade;
	
	if(grade == "A+"){
	
		cout<<"Your GPA : 4.0"<<endl;
	
	}
	
	else if(grade == "A-"){
	
		cout<<"Your GPA : 3.67"<<endl;
	
	}
	else if(grade == "B+"){
	
		cout<<"Your GPA : 3.33"<<endl;
	
	}
	else if(grade == "B"){
	
		cout<<"Your GPA : 3.0 "<<endl;
	
	}
	else if(grade == "B-"){
	
		cout<<"Your GPA : 2.67"<<endl;
	
	}
	else if(grade == "C+"){
	
		cout<<"Your GPA : 2.3 "<<endl;
	
	}
	else if(grade == "C"){
	
		cout<<"Your GPA : 2.0 "<<endl;
	
	}
	else if(grade == "C-"){
	
		cout<<"Your GPA : 1.67"<<endl;
	
	}
	else if(grade == "D+"){
	
		cout<<"Your GPA : 1.33 "<<endl;
	
	}
	else if(grade == "D"){
	
		cout<<"Your GPA : 1.0 "<<endl;
	
	}
	else if(grade == "F"){
	
		cout<<"Your GPA : 0.0 "<<endl;
	
	}
	else{
	
		cout<<"Please Enter Valid Grade"<<endl;
	}


}
