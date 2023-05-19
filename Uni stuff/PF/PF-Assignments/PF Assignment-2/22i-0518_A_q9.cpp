/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;
int main() {
	
	int c1,c2,at,ct;
	string cnic;				//choice1(match),choice2(enclosure),adult ticket,child ticket, CNIC,
	int pricea,pricek; 					// Price of adult ticket , Price of kid's ticket
	float discountk,discounta;  		//discount for kids , discount for adults
	int vip,fs,pre,gen;  				//VIP , First class, premium, general class tickets
	char c3;							//choice (for family option)
	cout<<"1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium"<<endl
	<<"(7pm-10.15pm)"<<endl
	<<"2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium"<<endl
	<<"(8pm-11.15pm)"<<endl
	<<"3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium"<<endl
	<<"(7pm-10.15pm)"<<endl
	<<"4. 1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium"<<endl
	<<"(7pm-10.15pm)"<<endl
	<<"5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium"<<endl
	<<"(7pm-10.15pm)"<<endl
	<<"6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium"<<endl
	<<"(7pm-10.15pm)"<<endl
	<<"7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium"<<endl
	<<"(2pm-5.15pm)"<<endl
	<<"8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium"<<endl
	<<"(2pm-5.15pm)"<<endl
	<<"Enter your choice (1 - 8)"<<endl;
	
	cin>>c1;
	
	switch(c1)
	{
		case 1: 			
		case 2: 
		case 3: 
				vip=3000;fs=1000;pre=1500;gen=500;
				
				cout<<endl;
				cout<<setw(15)<<"Enclosure"<<setw(20)<<"Class"<<setw(18)<<"Ticket Price"<<setw(20)<<"Seats Available\n\n"
	
				<<setw(20)<<"1. Imran Khan     "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"567\n"
				<<setw(20)<<"2. Javed Miandad  "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"234\n"
				<<setw(20)<<"3. Javed Akhtar   "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"125\n"
				<<setw(20)<<"4. Azhar Mehmood  "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"623\n"
				<<setw(20)<<"5. Sohail Tanveer "<<setw(15)<<"First Class"<<setw(14)<<fs<<" RPS"<<setw(20)<<"1234\n"
				<<setw(20)<<"6. Shoaib Akhtar  "<<setw(15)<<"Premium"<<setw(14)<<pre<<" RPS"<<setw(20)<<"2002\n"
				<<setw(20)<<"7. Imran Buksh    "<<setw(15)<<"General"<<setw(14)<<gen<<" RPS"<<setw(20)<<"1300\n"
				<<setw(20)<<"8. Yasir Arafat   "<<setw(15)<<"General"<<setw(14)<<gen<<" RPS"<<setw(20)<<"964\n\n"
   
   				<<"Which Enclosure would you like to be seated in?\nEnter your choice (1 - 8)"<<endl;
    
   			 	cin>>c2;
   			 	
   			 	switch(c2){
					case 1:
    				case 2:
    				case 3:
    				case 4:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = vip * (10.0/100.0);
    										discountk = vip * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*vip)-(discounta*at);
    											pricek = (ct*vip)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = vip * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*vip)-(discounta*at);
    										
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    						break;
    				
    				
					case 5:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = fs * (10.0/100.0);
    										discountk = fs * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*fs)-(discounta*at);
    											pricek = (ct*fs)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = fs * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*fs)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    						break;
    						
					case 6:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = pre * (10.0/100.0);
    										discountk = pre * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*pre)-(discounta*at);
    											pricek = (ct*pre)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = pre * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*pre)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    					 break;
    					 
					case 7:
					case 8:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = gen * (10.0/100.0);
    										discountk = gen * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*gen)-(discounta*at);
    											pricek = (ct*gen)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = gen * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*gen)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    								break;
    						default : cout<<"Enter valid value (1-8)"<<endl;
    						break;
    						} 
    					break;  

		case 4:
		case 7: 
				vip=2000;fs=500;pre=1000;gen=250;
				
				cout<<endl;
				cout<<setw(15)<<"Enclosure"<<setw(20)<<"Class"<<setw(18)<<"Ticket Price"<<setw(20)<<"Seats Available\n\n"
	
				<<setw(20)<<"1. Imran Khan     "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"567\n"
				<<setw(20)<<"2. Javed Miandad  "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"234\n"
				<<setw(20)<<"3. Javed Akhtar   "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"125\n"
				<<setw(20)<<"4. Azhar Mehmood  "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"623\n"
				<<setw(20)<<"5. Sohail Tanveer "<<setw(15)<<"First Class"<<setw(14)<<fs<<" RPS"<<setw(20)<<"1234\n"
				<<setw(20)<<"6. Shoaib Akhtar  "<<setw(15)<<"Premium"<<setw(14)<<pre<<" RPS"<<setw(20)<<"2002\n"
				<<setw(20)<<"7. Imran Buksh    "<<setw(15)<<"General"<<setw(14)<<gen<<" RPS"<<setw(20)<<"1300\n"
				<<setw(20)<<"8. Yasir Arafat   "<<setw(15)<<"General"<<setw(14)<<gen<<" RPS"<<setw(20)<<"964\n\n"
   
   				<<"Which Enclosure would you like to be seated in?\nEnter your choice (1 - 8)"<<endl;
    
   			 	cin>>c2;
   			 	
   			 	switch(c2){
					case 1:
    				case 2:
    				case 3:
    				case 4:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = vip * (10.0/100.0);
    										discountk = vip * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*vip)-(discounta*at);
    											pricek = (ct*vip)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = vip * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*vip)-(discounta*at);
    										
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    						break;
    				
    				
					case 5:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = fs * (10.0/100.0);
    										discountk = fs * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*fs)-(discounta*at);
    											pricek = (ct*fs)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = fs * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*fs)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    						break;
    						
					case 6:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = pre * (10.0/100.0);
    										discountk = pre * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*pre)-(discounta*at);
    											pricek = (ct*pre)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = pre * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*pre)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    					 break;
    					 
					case 7:
					case 8:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = gen * (10.0/100.0);
    										discountk = gen * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*gen)-(discounta*at);
    											pricek = (ct*gen)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = gen * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*gen)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    								break;
    						default : cout<<"Enter valid value (1-8)"<<endl;
    						break;
    						} 
    					break;         				

		case 5: 
		case 6:
		case 8:
				vip=1500;fs=500;pre=1000;gen=250;
				
				cout<<endl;
				cout<<setw(15)<<"Enclosure"<<setw(20)<<"Class"<<setw(18)<<"Ticket Price"<<setw(20)<<"Seats Available\n\n"
	
				<<setw(20)<<"1. Imran Khan     "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"567\n"
				<<setw(20)<<"2. Javed Miandad  "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"234\n"
				<<setw(20)<<"3. Javed Akhtar   "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"125\n"
				<<setw(20)<<"4. Azhar Mehmood  "<<setw(15)<<"VIP"<<setw(14)<<vip<<" RPS"<<setw(20)<<"623\n"
				<<setw(20)<<"5. Sohail Tanveer "<<setw(15)<<"First Class"<<setw(14)<<fs<<" RPS"<<setw(20)<<"1234\n"
				<<setw(20)<<"6. Shoaib Akhtar  "<<setw(15)<<"Premium"<<setw(14)<<pre<<" RPS"<<setw(20)<<"2002\n"
				<<setw(20)<<"7. Imran Buksh    "<<setw(15)<<"General"<<setw(14)<<gen<<" RPS"<<setw(20)<<"1300\n"
				<<setw(20)<<"8. Yasir Arafat   "<<setw(15)<<"General"<<setw(14)<<gen<<" RPS"<<setw(20)<<"964\n\n"
   
   				<<"Which Enclosure would you like to be seated in?\nEnter your choice (1 - 8)"<<endl;
    
   			 	cin>>c2;
   			 	
   			 	switch(c2){
					case 1:
    				case 2:
    				case 3:
    				case 4:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = vip * (10.0/100.0);
    										discountk = vip * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*vip)-(discounta*at);
    											pricek = (ct*vip)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = vip * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*vip)-(discounta*at);
    										
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    						break;
    				
    				
					case 5:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = fs * (10.0/100.0);
    										discountk = fs * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*fs)-(discounta*at);
    											pricek = (ct*fs)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = fs * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*fs)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    						break;
    						
					case 6:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = pre * (10.0/100.0);
    										discountk = pre * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*pre)-(discounta*at);
    											pricek = (ct*pre)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = pre * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*pre)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    					 break;
    					 
					case 7:
					case 8:
    						cout<<"Would you like to buy tickets for a family?(y/n)"<<endl;
    						cin>>c3;
    						switch(c3)
    						{
    							case 'y':
										cout<<"Please enter required number of"<<endl
   									 	<<"Adult tickets : "<<endl;
    									cin>>at;
    									cout<<"Children Tickets : "<<endl;
    									cin>>ct;
    									if(at>0 && ct>0)
    									{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    										discounta = gen * (10.0/100.0);
    										discountk = gen * (20.0/100.0);
    										if(at <= 4 && ct <= 5)
    										{
    											pricea = (at*gen)-(discounta*at);
    											pricek = (ct*gen)-(discountk*ct);
    											cout<<"Total : "<<(pricea+pricek)<<endl;
											}
    										else
    										{
    											cout<<"Limit exceeded. Max adults: 4 , Max children : 5"<<endl;
    										}
    										
    										}
    									else{
    										cout<<"Must have atleast one adult and atleast one child"<<endl;
    									}
    								break;
    				
    				
    							case 'n':
   										cout<<"Please enter required number of"<<endl
    									<<"Adult tickets : "<<endl;
    									cin>>at;
    									if(at>0)
    									{
    										if(at<=8)
    										{
    										cout<<"Enter your CNIC number : "<<endl;
    										cin>>cnic;
    											if(at>=4)
    											{
    												discounta = gen * (10.0/100.0);
    											}
    											else
    											{
    												discounta=0;
    											}
    									
    											pricea = (at*gen)-(discounta*at);
    											
    											cout<<"Total : "<<pricea<<endl;
    										}
    										else
											{
												cout<<"Limit exceeded. Max adults: 8"<<endl;
    										}
    									}
    									else
    									{
    										cout<<"Must have atleast one person"<<endl;
    									}
    								break;
    								
    							default : cout<<"Please enter y or n"<<endl;
    							 	break;
    								}
    								break;
    						default : cout<<"Enter valid value (1-8)"<<endl;
    						break;
    						}
    					break;	
    					}
    					}
      					
