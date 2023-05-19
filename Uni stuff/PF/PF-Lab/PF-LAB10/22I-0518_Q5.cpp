#include <iostream>
using namespace std;
int main(){

	do{
		int c1,c2,c3,total;
		
		cout<<"1.Cup\n2.cone\n3.Exit\nEnter your choice"<<endl;
		cin>>c1;
		switch(c1)
		{
		case 1:do{ 
				 cout<<"1.chocolate\n2.strawberry\n3.mint chocolate\n4.vanilla\n5.cookie n cream\n6.mango\n7.exit\nenter your choice"<<endl;
				 cin>>c2;
				 	switch(c2){
				 		case 1: do{
				 					cout<<"1.sprinkles\n2.chocolate chips\n3.chocolate syrup\n4.nuts\n5.M&Ms\n6.exit"<<endl;
				 					cin>>c3;
				 					switch(c3){
				 						case 1: total=20+40+10;
				 								cout<<total;
				 								break;
				 						case 2:
				 						case 3: total=20+15+10;
				 								cout<<total;
				 								break;
				 						
				 					
				 							
				 							
				 							} 
				 	
				 	}
			
		}
	
	
	
	}
}
