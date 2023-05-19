#include <iostream>
using namespace std;
int main(){
int price,quant,sales;
float tax,salesatx;
cout<<"Enter price of chocolate"<<endl;
cin>>price;
cout<<"Enter quantity of chocolates sold in a day"<<endl;
cin>>quant;
sales=price*quant;
cout<<"The TOTAL sales amount = "<<sales<<endl;
tax= (10/100.0)*sales;
salesatx=sales-tax;
cout<<"Sales amount after tax reduction "<<salesatx<<endl;

}
