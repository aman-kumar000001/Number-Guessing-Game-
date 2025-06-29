#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int play;
do
{
    srand(time(NULL));
    int random,uin,count=0;
    random =rand() %100 + 1;

    
        cout<<"Welcome, game start now!"<<endl;

    do{
        cout<<"Enter your guess number (Between 1 to 100):";
        cin>>uin; //uin stands for user input. 
        if(uin<=0|| uin>100){
            cout<<"Error! Entered number is invalid.\n"<<endl;
           return 0;
         }
        count++;
        
        if(uin<random){
            cout<<"Wrong guess!\n";
             cout<<"guess bigger number->\n";
             cout<<endl;
        }
        else if(uin>random){
            cout<<"Wrong guess!\n";
            cout<<"guess small number->\n";
            cout<<endl;
        }
        else{
            cout<<endl;
            cout<<"congratulations you win!\n";
            cout<<"you gusse the right number in "<<count<<" attempts.\n";
            cout<<endl;
        }
    } while(uin!=random);

       cout<<"Game over !!\n";
      
       cout<<"Enter 1 for play again or any other key to exit:";
       cin>>play;

}while(play == 1);
 
cout<<"Game terminated !!\n"<<endl;

    return 0;
}