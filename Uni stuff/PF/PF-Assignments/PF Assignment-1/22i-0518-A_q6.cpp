/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float p1,p2,p3,p4,p5,sumst,sump,sumtp;        //prices, sum of sales tax, sum of prices, and total price sum
	
	float salest=17.0/100,st1,st2,st3,st4,st5;	//sales tax variables to store tax on each item's price
	
	cout<<"Price of Item 1 : "<<endl;                    //input the price of items
	cin>>p1;					       //store in price1 variable
	
	cout<<"Price of Item 2 : "<<endl;
	cin>>p2;
	
	cout<<"Price of Item 3 : "<<endl;
	cin>>p3;
	
	cout<<"Price of Item 4 : "<<endl;
	cin>>p4;
	
	cout<<"Price of Item 5 : "<<endl;
	cin>>p5;	
	
	cout<<setw(50)<<setfill('*')<<""<<endl;              //print the '*' line
		
		st1=p1*salest; 				//get the salestax1 through 5 on prices
		
		st2=p2*salest;
		
		st3=p3*salest;                     
		
		st4=p4*salest;
		
		st5=p5*salest;					
		
		sump=p1+p2+p3+p4+p5;				//total sales prices
      	        
      	        sumst=st1+st2+st3+st4+st5;                    //total sales tax
	        
	        sumtp=sump+sumst;				//total prices after sales tax
	    
			cout<<"ITEM\tPRICE\tSALES TAX\tTOTAL PRICE"<<endl;
			cout<<"1\t"
			<<setfill(' ')                         //fill with empty space
			<<setw(5)				//width 5		    
			<<p1					//output price
			<<"\t"					
			<<setw(9)			
			<<fixed				//presicion to 2 decimal places fixed 
			<<setprecision(3)			
			<<st1
			<<"\t"					
			<<setw(11)				//set width to 11 spaces
			<<fixed
			<<setprecision(2)			
			<<(p1+st1)<<endl;			//ouptut sum of price and sales tax to get the price after tax add 
			
			cout<<"2\t"				//same for rest of coloumns
			<<setfill(' ')
			<<setw(5)
			<<p2
			<<"\t"
			<<setw(9)
			<<fixed
			<<setprecision(3)
			<<st2
			<<"\t"
			<<setw(11)
			<<fixed
			<<setprecision(2)
			<<(p2+st2)<<endl;
			
			cout<<"3\t"
			<<setfill(' ')
			<<setw(5)
			<<p3
			<<"\t"
			<<setw(9)
			<<fixed
			<<setprecision(3)
			<<st3
			<<"\t"
			<<setw(11)
			<<fixed
			<<setprecision(2)
			<<(p3+st3)<<endl;
			
			cout<<"4\t"
			<<setfill(' ')
			<<setw(5)
			<<p4
			<<"\t"
			<<setw(9)
			<<fixed
			<<setprecision(3)
			<<st4
			<<"\t"
			<<setw(11)
			<<fixed
			<<setprecision(2)
			<<(p4+st4)<<endl;
			
			cout<<"5\t"
			<<setfill(' ')
			<<setw(5)
			<<p5
			<<"\t"
			<<setw(9)
			<<fixed
			<<setprecision(3)
			<<st5
			<<"\t"
			<<setw(11)
			<<fixed
			<<setprecision(2)
			<<(p5+st5)<<endl;
			
			cout<<"Total\t"
			<<setfill(' ')
			<<setw(5)
			<<sump
			<<"\t"
			<<setw(9)
			<<fixed
			<<setprecision(3)
			<<sumst
			<<"\t"
			<<setw(11)                             
			<<fixed
			<<setprecision(2)
			<<sumtp<<endl;
			}
