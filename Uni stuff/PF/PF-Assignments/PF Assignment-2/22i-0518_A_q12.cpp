/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include<iostream>
using namespace std;
int main() {
	
	short num,opcode,lop,rop;
	
	cout<<"Enter number"<<endl;
	cin>>num;
	
	opcode = num>>12;
	
	lop = num>>6;
	lop = lop & 63;
	
	rop = num<<10;
	rop = rop>> 10;
	
	if(opcode == 0)
	{
		cout<<"Value of right operand : "<<rop<<endl;
	}
	else if(opcode == 1)
	{
		cout<<"Value of left operand : "<<lop<<endl;
	}
	else if(opcode == 2)
	{
		cout<<"Enter value for right operand (1 - 64)"<<endl;
		cin>>rop;
		cout<<"Value entered : "<<rop<<endl;
	}
	else if(opcode == 3)
	{
		cout<<"Enter value for left operand (1 - 64)"<<endl;
		cin>>lop;
		cout<<"Value entered : "<<lop<<endl;
	}
	else if(opcode == 4)
	{
		cout<<"Add left and right operand : "<<(lop+rop)<<endl;
	}
	else if(opcode == 5)
	{
		if(lop>rop){
		cout<<"Subraction of left and right operand : "<<(lop-rop)<<endl;
		}
		else{
		cout<<"Subraction of left and right operand : "<<(rop-lop)<<endl;
		}
	}
	else if(opcode == 6)
	{
		cout<<"Multiply left and right operand : "<<(lop*rop)<<endl;
	}
	else if(opcode == 7)
	{
		if(lop<rop){
		cout<<"Division of left and right operand : "<<(lop/rop)<<endl;
		}
		else{
		cout<<"Division of left and right operand : "<<(rop/lop)<<endl;
		}
	}
	else if(opcode == 8)
	{
		if(lop>rop){
		cout<<"Remainder of left and right operand : "<<(lop%rop)<<endl;
		}
		else{
		cout<<"Remainder of left and right operand : "<<(rop%lop)<<endl;
		}
	}
	else if(opcode == 9)
	{
		cout<<"Bitwise OR of left and right operand : "<<(lop | rop)<<endl;
	}
	else if(opcode == 10)
	{
		cout<<"Bitwise AND of left and right operand : "<<(lop & rop)<<endl;
	}
	else if(opcode == 11)
	{
		cout<<"Bitwise XOR of left and right operand : "<<(lop ^ rop)<<endl;
	}
	else if(opcode == 12)
	{
		cout<<"Compliment of right operand : "<<(~rop)<<endl;
	}
	else if(opcode == 13)
	{
		cout<<"Compliment of left operand : "<<(~lop)<<endl;
	}
	else if(opcode == 14)
	{
		cout<<"Bitwise shift left right operand by right operand : "<<(lop<<rop)<<endl;
	}
	else if(opcode == 14)
	{
		cout<<"Bitwise shift right right operand by right operand : "<<(lop>>rop)<<endl;
	}
	

}
