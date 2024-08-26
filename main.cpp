#include<iostream>
#include<time.h>
#include<random>
#include<windows.h>

using namespace std;
void playGame();
int generateRandomMove()
{
    srand(time(0));
    return rand()%3+1;
}
void clearScreen()
{
    system("cls");
}

int main()
{
    int option;
    do{
        clearScreen();
        cout<<"Welcome to the game"<<endl;
        cout<<"1. Play"<<endl;
        cout<<"2. Exit"<<endl;
        cin>>option;
        clearScreen();

        switch (option){
            case 1:
                playGame();
                break;
            case 2:
                cout<<"Thanks for playing!" <<endl;
                break;
            default:
                cout<<"INVALID INPUT"<<endl;
        }
    }while(option!=2);
    return 0;
}


void playGame()
{
    int choice,compMove;
    do{
        cout<<"Please choose an option: "<<endl;
        cout<<"1. Scissor" <<endl;
        cout<<"2. Rock"<<endl;
        cout<<"3> Paper"<<endl;
        cout<<"4. Quit"<<endl;
        cin>>choice;
        compMove = generateRandomMove();
        clearScreen();

        if(choice <=3 && choice >=1)
        {
            if(choice == compMove)
            {
                cout<<"It's a Draw. Play again!"<<endl;
                Sleep(2000);
            }
            else if(choice == 1 && compMove==3){
                cout<<"Player Wins! With Scissor"<<endl;
                Sleep(2000);
                break;
            }
            else if(choice == 2 && compMove ==3){
                cout<<"Computer Wins! With Paper"<<endl;
                Sleep(2000);
                break;
            }
            else if(choice == 3 && compMove ==1){
                cout<<"Computer Wins! With Scissor"<<endl;
                Sleep(2000);
                break;
            }
            else if(choice == 3 && compMove ==1){
                cout<<"Computer WINS! With Scissor"<<endl;
                Sleep(2000);
                break;
            }else if(choice == 3 && compMove==2){
                cout<<"Player Wins! With Paper"<<endl;
                
                break;
            }
            else if(choice == 1 && compMove==2){
                cout<<"Computer Wins! With Rock"<<endl;
                Sleep(2000);
                break;
            }
            else if(choice == 2 && compMove==1){
                cout<<"Player Wins! With Rock"<<endl;
                Sleep(2000);
                break;
            }else{
                cout<<"Something went wrong!"<<endl;
                Sleep(2000);
                break;
            }
        }

    }while(choice!=4);
}