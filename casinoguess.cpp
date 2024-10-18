#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <cstdlib>
#include <ctime>


int main(){
    int userDep;
    int userGuess;
    cout << "Welcome to round one of Casino guess"<<endl;
    cout << "If you win in this round you get double your deposit and you can move to the next round"<<endl;
    cout << "If you lose in this round, you walk away with nothing and you get disqualifies for the next round"<<endl;
    cout << "How much would you like to deposit (You can deposit your live savings, you have a chance to double it)"<<endl;
    cin >> userDep;
    srand(time(nullptr)); //comment this line when testing
    int randNum = rand() % 10+1; //comment this line when testing
    //srand(2); // this is for testing
    int randNum = rand(); //this is for testing
    cout <<"Enter your number guess between 1 and 10"<<endl;
    cin >> userGuess;
    int userWin = userDep *2;
    if (userGuess == randNum){
        cout <<"You win $"<< userWin <<", CONGRATULATIONS!!!"<<endl;
        cout <<"Would you like to conitnue?"<<endl;
        cout <<"[Y] to continue, [N] to quit"<<endl;
        char userCont;
        cin>>userCont;
        //begin second round
        while ((userCont == 'Y' || userCont == 'y') && userGuess == randNum){
            cout<<"Welcome to the second round of Casino Guess"<<endl;
            cout<<"In this round you can continue for however long you want to, and your money quadriples after every win"<<endl;
            cout<<"After every correct guess you can decide to continue and keep adding to your winnings"<<endl;
            cout <<"Or you can decide to quit and leave and keep your winnings"<<endl;
            cout << "Your win from last round is $"<<userWin<<endl;
            userWin *=4;
            cout<<"Let the round begin"<<endl;
            cout<<"Enter your guess[1 to 1000]"<<endl;
            //randNum = rand(); //for testing
            randNum = rand()%1000+1;
            cin>>userGuess;
            if (userGuess == randNum){
                 cout <<"You win $"<< userWin <<", CONGRATULATIONS!!!"<<endl;
                cout <<"Would you like to conitnue?"<<endl;
                cout <<"[Y] to continue, [N] to quit"<<endl;
                cin>>userCont;
            }
            else{
                cout <<"I am sorry, but you walk away with $0"<<endl;
                cout <<"Better luck next time, you can always start over"<<endl;
                cout <<"GAMBLE RESPONSIBLY"<<endl;
            }
            
        }
    }
    else{
        cout <<"You lose, you cannot continue the next round"<<endl;
    }

}
