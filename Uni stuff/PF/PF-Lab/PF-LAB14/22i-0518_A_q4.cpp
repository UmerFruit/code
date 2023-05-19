#include<iostream>
#include<fstream>
using namespace std;
void input();
void output();
int main()
{
   string data[20];
   input();
   output();
}
void input()
{   
    ofstream fout;
    fout.open("info.txt");
    
    
    fout<<"Most living animal species are in Bilateria, a clade whose"<<endl
    <<"members have a bilaterally symmetric body plan. The Bilateria include the protostomes, containing animals"<<endl
    <<"such as nematodes, arthropods, flatworms, annelids and molluscs, and the deuterostomes, "<<endl
    <<"containing the echinoderms and the chordates";   
}
int strlen(string line)
{
    int i=0;
    while(line[i]!='\0')
    {
        i++;
    }
    i--;
    return i;
}
void output()
{
    int words=0;
    ifstream fin;
    fin.open("info.txt");
    int c=0;

    while(!fin.eof())
    {
        string line;
        getline (fin,line);
        for(int i=1;i<=strlen(line);i++)
        {   
            if(line[i]==' ')
            {
                words++;
            }
        }
        if(words>10)
        {
            cout<<"line"<<c<<" has more than 10 lines"<<endl;
        }
        c++;
    }
    cout<<"Total number of lines : "<<c;

}
