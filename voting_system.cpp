#include<bits/stdc++.h>
#define CANDIDATE1 "|PARTY 1| <JACK> 	|1|"
#define CANDIDATE2 "|PARTY 2| <ROSE> 	|2|"
#define CANDIDATE3 "|PARTY 3| <X-MAN> 	|3|"
#define CANDIDATE4 "|PARTY 4| <LOGAN> 	|4|"
#define NOTA       "|      NOTA    		|5|"
using namespace std;

int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
int nota_vote=0;
int vote1_percent;
int vote2_percent;
int vote3_percent;
int vote4_percent;
int nota_vote_percent;

 
int choice;

void vote_cast()
{
    cout<<CANDIDATE1<<endl;
    cout<<CANDIDATE2<<endl;
    cout<<CANDIDATE3<<endl;
    cout<<CANDIDATE4<<endl;
    cout<<NOTA<<endl;
    
    cout<< "Enter your choice=";
    cin>>choice;

    switch(choice)
    {
        case 1:
            vote1++;
            break;
        case 2:
            vote2++;
            break;
        case 3:
            vote3++;
            break;
        case 4:
            vote4++;
            break;
        case 5:
            nota_vote++;
            break;
        default:
            cout<<"Error"<<endl;

    }
    cout<<"Thanks for vote"<<endl;
}

void vote_count()
{
    cout<<CANDIDATE1<<vote1<<endl;
    cout<<CANDIDATE2<<vote2<<endl;
    cout<<CANDIDATE3<<vote3<<endl;
    cout<<CANDIDATE4<<vote4<<endl;
    cout<<NOTA<<nota_vote<<endl;
}

void leading_candidate()
{
    cout<<"#  Leading candidate  #"<<endl;
    if(vote1>vote2 && vote1>vote3 && vote1>vote4)
    {
	
       
        //percent=(vote1/5)*100;
        cout<<CANDIDATE1<<"is leading with "<<endl;
	}	
        
    else if(vote2>vote1 && vote2>vote3 && vote2>vote4)
    {
	     
         //percent=(vote2/5)*100;
         cout<<CANDIDATE2<<"is leading "<<endl;
	}	
    else if(vote3>vote1 && vote3>vote2 && vote3>vote4)
    {
	     
         //percent=(vote3/5)*100;
         cout<<CANDIDATE3<<"is leading "<<endl;
    }	
    else if(vote4>vote1 && vote4>vote2 && vote4>vote3)
    {
		   
         //percent=(vote4/5)*100;
         cout<<CANDIDATE4<<"is leading "<<endl;
    }
    else
    {
	    
         //percent=(nota_vote/5)*100;
         cout<<"No winning chance because NOTA is high"<<endl;

    }
}
void percentage(){
	vote1_percent=(vote1/5)*100;
	cout<<vote1_percent<<endl;
	vote2_percent=(vote2/5)*100;
	cout<<vote2_percent<<endl;
	vote3_percent=(vote3/5)*100;
	cout<<vote3_percent<<endl;
	vote4_percent=(vote4/5)*100;
	cout<<vote4_percent<<endl;
	nota_vote_percent=(nota_vote/5)*100;
	cout<<nota_vote_percent<<endl;
}

//main function
int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    if(age>=18)
    {
        do
        {
            cout<<"welcome to TN voting counter"<<endl;
            cout<<"1.vote cast"<<endl;
            cout<<"2.vote count"<<endl;
            cout<<"3.leading candiate"<<endl;
            cout<<"4.party percentage"<<endl;
            cout<<"0.exit"<<endl;

            cout<<"Enter your choice"<<endl;
            cin>>choice;

            switch(choice)
            {
                case 1: vote_cast();
                        break;
                case 2: vote_count();
                        break;
                case 3: leading_candidate();
                        break;
                case 4: percentage();
						break;        
                
                        
                

            }

        }while(choice!=0);
    }
    else
    {
        cout<<"You are not eligible to vote" <<endl;
       
    }
    return 0;

}


