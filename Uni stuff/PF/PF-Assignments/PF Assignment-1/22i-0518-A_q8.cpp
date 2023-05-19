/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/

#include<iostream>
#include <string>
using namespace std;
int main(){
	float pf , pfl, iict, pst, la, calc, eng, engl;
	float oop, oopl, de, dld, dldl, isl, com, coml;
	float sgpa1,sgpa2,cgpa;                            //input values for the subjects and the semesters
	string name, reg, sec;					//strings name and registrations and section
	
	cout<<"Name : "<<endl;
	cin>>name;

	cout<<"Registration-ID : "<<endl;
	cin>>reg;

	cout<<"Section : "<<endl;
	cin>>sec;
	
	cout<<"Enter Marks out of 4"<<endl;
	
	cout<<"SEMESTER 1"<<endl<<endl;
	
	cout<<"PF : "<<endl;
	cin>>pf;
	cout<<"PF-Lab : "<<endl;
	cin>>pfl;
	cout<<"IICT : "<<endl;				//input marks out of 4 for the first semester
	cin>>iict;
	cout<<"PST : "<<endl;
	cin>>pst;
	cout<<"LA : "<<endl;
	cin>>la;
	cout<<"Calc : "<<endl;
	cin>>calc;
	cout<<"english : "<<endl;
	cin>>eng;
	cout<<"English-lab : "<<endl;
	cin>>engl;
	
	cout<<"SEMESTER 2"<<endl<<endl;
	
	cout<<"OOP : "<<endl;
	cin>>oop;
	cout<<"OOP-lab : "<<endl;
	cin>>oopl;
	cout<<"DLD : "<<endl;
	cin>>dld;
	cout<<"DLD- lab : "<<endl;			//input marks out of 4 of the second semester
	cin>>dldl;
	cout<<"Differential equations : "<<endl;
	cin>>de;
	cout<<"ISL : "<<endl;
	cin>>isl;
	cout<<"Communication and presentation skills : "<<endl;
	cin>>com;
	cout<<"Communication and presentation skills-Lab : "<<endl;
	cin>>coml;
	
  	sgpa1= ((pf*3)+(pfl*1)+(iict*1)+(la*3)+(calc*3)+(pst*3)+(eng*2)+(engl*1))/17;	//calculateing sgpa
  
  	sgpa2= ((oop*3)+(oopl*1)+(isl*3)+(dld*3)+(dldl*1)+( de*3)+(com*2)+(coml*1))/17;
  
  	cgpa = (sgpa1+sgpa2)/2.0;		//cpga as average of the semesters gpa
  	
  	cout<<"Name : "<<name;
  	cout<<"\tReg : "<<reg;
  	cout<<"\tSection : "<<sec<<endl; 
  	
	cout<<"SEMESTER 1"<<endl<<endl;
  	
  	cout<<"PF : "<< pf <<endl;			//output in form of transcript as required
  	cout<<"PF-lab : "<< pfl <<endl;
  	cout<<"IICT : "<< iict <<endl;
  	cout<<"LA : "<< la <<endl;
  	cout<<"Calculus : "<< calc <<endl;
  	cout<<"Pak-Studies : "<< pst <<endl;
  	cout<<"English : "<< eng <<endl;
  	cout<<"English-lab : "<< engl <<endl<<endl;
  	cout<<"SGPA : "<< sgpa1<<endl;
  	
  	cout<<"SEMESTER 2"<<endl<<endl;
  	
  	cout<<"OOP : "<< oop <<endl;
  	cout<<"OOP-lab : "<< oopl <<endl;
  	cout<<"ISLAMIYAT : "<< isl <<endl;
  	cout<<"DIFFERENTIAL EQUATIONS : "<< de <<endl;
  	cout<<"DLD : "<< dld <<endl;
  	cout<<"DLD-lab : "<< dldl <<endl;
  	cout<<"Communication and presentation skills : "<< com <<endl;
  	cout<<"Communication and presentation skills : -lab : "<< coml <<endl<<endl;
  	cout<<"SGPA : "<< sgpa2<<endl;
  	
  	cout<<"CGPA : "<<cgpa<<endl;
  }
