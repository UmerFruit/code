#include<iostream>
using namespace std;
int main(){
	
	int units,price,rate;

	float tax,tprice;

	cout<<"Enter number of units : "<<endl;
	cin>>units;

	if(units <= 100){

		rate=9;
		price=rate*units;

	}
	else if (units > 100 && units <= 200){

		rate=11;
		price= rate*units;

	}
	else if (units > 200 && units <= 300){

		rate=9;
		price= rate*units;

	}
	else{}
	
	if(price <= 750){
		
		tax= price*(5.0/100.0);
	
	}
	else{
	
		tax= price*(7.0/100.0);
	
	}
	tprice=price+tax;
    
	cout<<"Total Bill without tax : "<<price<<endl;
    
	cout<<"Total Bill with tax : "<<tprice<<endl;
}
