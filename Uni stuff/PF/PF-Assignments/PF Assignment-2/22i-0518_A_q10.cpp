/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include <iostream>
using namespace std;
int main(){
	char c1,c3;   //choice 1 and choice 3
	int c2,price,total; //choice 2
	
	cout<<"Press\n";
	cout<<"B = Burgers" <<endl
	<<"F = French Fries"<<endl
	<<"P = Pizza"<<endl
	<<"S = Sandwiches"<<endl;
	cin>>c1;
	
	switch(c1){
		case 'B':
		case 'b':
					cout<<"Press\n";
					cout<<"1 = Zinger Burger 200 RPS"<<endl
					<<"2 = Patty Burger 250 RPS"<<endl
					<<"3 = Chicken Burger 300 RPS"<<endl
					<<"4 = Fish Fillet Burger 350 RPS"<<endl;
					cin>>c2;
					switch(c2)
					{
						case 1: price=200;
								cout<<"Press\n";
								cout<<"A = 1 Burger"<<endl
								<<"B = 2 Burgers"<<endl
								<<"C = 4 Burgers"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 2: price=250;
								cout<<"Press\n";
								cout<<"A = 1 Burger"<<endl
								<<"B = 2 Burgers"<<endl
								<<"C = 4 Burgers"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
						case 3: price=300;
								cout<<"Press\n";
								cout<<"A = 1 Burger"<<endl
								<<"B = 2 Burgers"<<endl
								<<"C = 4 Burgers"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 4: price=350;
								cout<<"Press\n";
								cout<<"A = 1 Burger"<<endl
								<<"B = 2 Burgers"<<endl
								<<"C = 4 Burgers"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please.(A,B,C)"<<endl;
								}
								break;
						
						default: cout<<"Enter valid Input please. (1-4)"<<endl;
					}
				break;
		
		case 'F':
		case 'f':
					cout<<"Press\n";
					cout<<"1 = Small Fries 200 RPS"<<endl
					<<"2 = Medium Fries 250 RPS"<<endl
					<<"3 = Large Fries 300 RPS"<<endl
					<<"4 = XL Fries 350 RPS"<<endl;
					cin>>c2;
					switch(c2)
					{
						case 1: price=200;
								cout<<"Press\n";
								cout<<"A = 1 Pack"<<endl
								<<"B = 2 Packs"<<endl
								<<"C = 4 Packs"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 2: price=250;
								cout<<"Press\n";
								cout<<"A = 1 Pack"<<endl
								<<"B = 2 Packs"<<endl
								<<"C = 4 Packs"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
						case 3: price=300;
								cout<<"Press\n";
								cout<<"A = 1 Pack"<<endl
								<<"B = 2 Packs"<<endl
								<<"C = 4 Packs"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 4: price=350;
								cout<<"Press\n";
								cout<<"A = 1 Pack"<<endl
								<<"B = 2 Packs"<<endl
								<<"C = 4 Packs"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please.(A,B,C)"<<endl;
								}
								break;
						
						default: cout<<"Enter valid Input please. (1-4)"<<endl;
					}
				break;
		
		case 'P':
		case 'p':
					cout<<"Press\n";
					cout<<"1 = Small Pizza 1000 RPS"<<endl
					<<"2 = Medium Pizza 1100 RPS"<<endl
					<<"3 = Large Pizza 1200 RPS"<<endl
					<<"4 = XL Pizza 1300 RPS"<<endl;
					cin>>c2;
					switch(c2)
					{
						case 1: price=1000;
								cout<<"Press\n";
								cout<<"A = 1 Pizza"<<endl
								<<"B = 2 Pizzas"<<endl
								<<"C = 4 Pizzas"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 2: price=1100;
								cout<<"Press\n";
								cout<<"A = 1 Pizza"<<endl
								<<"B = 2 Pizzas"<<endl
								<<"C = 4 Pizzas"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
						case 3: price=1200;
								cout<<"Press\n";
								cout<<"A = 1 Pizza"<<endl
								<<"B = 2 Pizzas"<<endl
								<<"C = 4 Pizzas"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 4: price=1300;
								cout<<"Press\n";
								cout<<"A = 1 Pizza"<<endl
								<<"B = 2 Pizzas"<<endl
								<<"C = 4 Pizzas"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please.(A,B,C)"<<endl;
								}
								break;
						
						default: cout<<"Enter valid Input please. (1-4)"<<endl;
					}
				break;
			
		case 'S':
		case 's':
					cout<<"Press\n";
					cout<<"1 = Chicken Sandwich 250 RPS"<<endl
					<<"2 = Egg Sandwich 300 RPS"<<endl
					<<"3 = Jam Sandwich 350 RPS"<<endl
					<<"4 = Veggie Sandwich 400 RPS"<<endl;
					cin>>c2;
					switch(c2)
					{
						case 1: price=250;
								cout<<"Press\n";
								cout<<"A = 1 Sandwich"<<endl
								<<"B = 2 Sandwiches"<<endl
								<<"C = 4 Sandwiches"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 2: price=300;
								cout<<"Press\n";
								cout<<"A = 1 Sandwich"<<endl
								<<"B = 2 Sandwiches"<<endl
								<<"C = 4 Sandwiches"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
						case 3: price=350;
								cout<<"Press\n";
								cout<<"A = 1 Sandwich"<<endl
								<<"B = 2 Sandwiches"<<endl
								<<"C = 4 Sandwiches"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please."<<endl;
								}
								break;
								
						case 4: price=400;
								cout<<"Press\n";
								cout<<"A = 1 Sandwich"<<endl
								<<"B = 2 Sandwiches"<<endl
								<<"C = 4 Sandwiches"<<endl;
								cin>>c3;
								switch(c3)
								{
									case 'a':
									case 'A':
												cout<<"Total : "<<price<<" RS"<<endl;
												break;
									
									case 'b':
									case 'B':
												cout<<"Total : "<<(price*2)<<" RS"<<endl;
												break;
									
									case 'c':
									case 'C':
												cout<<"Total : "<<(price*4)<<" RS"<<endl;
												break;
								
									default: cout<<"Enter valid input please.(A,B,C)"<<endl;
								}
								break;
						
						default: cout<<"Enter valid Input please. (1-4)"<<endl;
					}
				break;
			default: cout<<"Enter valid input please.(B,P,S,F)"<<endl;
	
	}

}
