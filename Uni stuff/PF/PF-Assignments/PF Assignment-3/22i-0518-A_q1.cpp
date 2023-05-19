/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{   
    float score,more=0,sum=0;
    float mean;         
    for(int i=1;i<=5;i++)               //loop runs 5 times
    {
        cout<<"Enter score of subject "<<i<<" : ";
        cin>>score;                                 // 5 scores are entered
        if(score<=100 && score >=0)    //scores should be in valid range of (0-100)    
        {
            if(score>=80)         //if score is more than 80 add one to counter
            {
                more++;
            }
            sum=sum+score;         //sum up all the scores one by one
        }
        else           //if out of range number is entered 
        {
            cout<<"Invalid Input, Enter in valid range (0-100)"<<endl;
            i--;            //dont count that iteration and redo the loop
            continue;
        }
    }
    cout<<endl<<endl;
    mean=sum/5;             //print the mean and num of scores more than 80
    cout<<"Mean of scores : "<<mean<<endl;
    cout<<"There are "<<more<<" scores which are more than 80"<<endl;
}