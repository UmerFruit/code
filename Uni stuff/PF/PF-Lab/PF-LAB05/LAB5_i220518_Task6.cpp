#include<iostream>
#include <cmath>
using namespace std;
int main(){
	float a,b,c,root1,root2;
	cout<<"Enter coffeicients of quadratic equation"<<endl;
	cin>>a>>b>>c;
	root1= (-1*b) + sqrt((b*b)-(4*a*c));
	root1= root1/(2*a);
	root2= (-1*b) - sqrt((b*b)-(4*a*c));
	root2= root2/(2*a);
	cout<<"First root : "<<root1<<endl;
	cout<<"Second root : "<<root2<<endl;


}
