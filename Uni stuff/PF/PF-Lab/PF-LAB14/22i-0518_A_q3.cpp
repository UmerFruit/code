#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   ofstream fout;
   fout.open("Record.txt");
   string record[4][3];
   string read_record[4];
   
   for(int i=0;i<4;i++)
   {
        cout<<"Enter reg number"<<endl;
        getline (cin,record[i][0]);
        cout<<"Enter Name and Department"<<endl;
        getline (cin,record[i][1]);
        cout<<"Enter Contact Number"<<endl;
        getline (cin,record[i][2]);
   }
   
   for(int i=0;i<4;i++)
   {
        for(int j=0;j<3;j++)
        {
            fout<<record[i][j]<<" ";
        }
        fout<<endl;
   }
   fin.open("Record.txt");
   for(int i=0;i<4;i++)
   {
       getline (fin,read_record[i]);
    }
   for(int i=0;i<4;i++)
   {
        cout<<read_record[i]<<" ";
        cout<<endl;
   }
   
}