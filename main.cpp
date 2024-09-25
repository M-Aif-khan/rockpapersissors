#include<iostream> // header files
#include<cstdlib>
using namespace std;

 // code for tic tac toe
/*suggest changes here....*/

int main(){ // main functions

    int n = 3,num;
    bool limit= true; // variable declerations
    char choice,user_input;

    while (limit) // while loop will run until user limit is set to false
    {
        cout<<"Press y to play : "; // take user choice to play as input 
        cin>>choice;

        cout<<"Enter r,p or s(rock,praper,sessor):";// take user input as a play
        cin>>user_input;

        num = rand() % n; // store a random number in num variable 
        if(choice == 'y' || choice =='Y'){ 
            switch (num) // uses switch case to assign every number a move played by the computer
            {
            case 0:
                cout<<"Conputer:Paper"<<endl;
                cout<<"----------------------------"<<endl;
                break;
            case 1:
                cout<<"Conputer:Sissor"<<endl;
                cout<<"----------------------------"<<endl;
                break;
            case 2:
                cout<<"Conputer:Rock"<<endl;
                cout<<"----------------------------"<<endl;
                break;
            
            default:
                cout<<"Unexpected Error occurs!"<<endl;
                break;
            }

            if((user_input == 'p' && num == 0) || (user_input == 's' && num==1) || (user_input == 'r' && num == 2)){
                cout<<"Draw!!"<<endl;
            }
            else if((user_input == 'p' && num == 2) || (user_input == 's' && num==0) || (user_input == 'r' && num == 1)){
                cout<<"You Win!"<<endl;
            }
            else{
                cout<<"You loose!"<<endl;
            }

        }
          
        else  { // exit the program if the user enter anything other than y or Y
            
            limit = false;
        }
            
    }
    
}
