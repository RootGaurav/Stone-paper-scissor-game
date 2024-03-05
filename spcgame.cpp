#include<iostream>
#include<string>
#include<vector>
#include<ctime>
using namespace std;
class game{
    int choice1;
    int choice2;
    vector<string> choices{"STONE","PAPER","SCISSOR"};
public :
    void pvp()
    {
        int round=1;
        do{
            cout<<"PLAYER 1"<<endl<<"Enter your choice : \n 1 : STONE \n 2 : PAPER \n 3 : SCISSOR "<<endl;
            cin>>this->choice1;
            cout<<"PLAYER 2"<<endl<<"Enter your choice : \n 1 : STONE \n 2 : PAPER \n 3 : SCISSOR "<<endl;
            cin>>this->choice2;
            if(choice1==choice2) cout<<" Its a draw "<<endl;
            else if(abs(choice1-choice2)>=2)
            {
                if(choice1<choice2) cout<<" PLAYER 1 WINS "<<endl;
                else cout<<" PLAYER 2 WINS "<<endl;
            }
            else
            {
                if((choice1-choice2)<0)cout<<" PLAYER 2 WINS "<<endl;
                else cout<<"PLAYER 1 WINS"<<endl;
            }
            cout<<"ENTER 0 (ZERO) TO EXIT \n ENTER ANY KEY TO CONTINUE"<<endl;
            cin>>round;

        }while(round);
        return ;
    
    }
    void vscomp()
    {
        int round=1;
        do{
            cout<<"PLAYER"<<endl<<"Enter your choice : \n 1 : STONE \n 2 : PAPER \n 3 : SCISSOR "<<endl;
            cin>>this->choice1;
            // cout<<"PLAYER 2"<<endl<<"Enter your choice : \n 1 : STONE \n 2 : PAPER \n 3 : SCISSOR "<<endl;
            srand(time(0));
            this->choice2=rand()%2+1;
            cout<<" You choosed "<<choices[this->choice1-1]<<endl;
            cout<<" Computer choosed "<<choices[this->choice2-1]<<endl;
            if(choice1==choice2) cout<<" Its a draw "<<endl;
            else if(abs(choice1-choice2)>=2)
            {
                if(choice1<choice2) cout<<"!!! YOU WIN !!!"<<endl;
                else cout<<" YOU LOST "<<endl;
            }
            else
            {
                if((choice1-choice2)<0)cout<<" YOU LOST "<<endl;
                else cout<<"!!! YOU WIN !!!"<<endl;
            }
            cout<<"ENTER 0 (ZERO) TO EXIT \n ENTER ANY KEY TO CONTINUE"<<endl;
            cin>>round;

        }while(round);
        return ;
        
    }

    

};
int main()
{
    int gametype=1;
    game g;
    cout<<"--------------------------------------- WELCOME TO STONE PAPER SCISSOR GAME  ---------------------"<<endl<<endl;
    cout<<"--------------------------------------- CHOOSE YOUR GAME MODE ------------------------------------"<<endl<<endl;

    cout<<"--------------------------------------- 1 : P v P MODE -------------------------------------------"<<endl;
    cout<<"--------------------------------------- 2 : VS COMPUTER ------------------------------------------ "<<endl;
    cin>>gametype;
    gametype==1?g.pvp():g.vscomp();
    cout<<"--------------------------------------- THANKS FOR PLAYING ----------------------------------------";
    return 0;
}
