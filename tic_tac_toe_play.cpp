#ifndef tic_H
#define tic_H
#include"tic_tac_toe.h"
#endif
#include<iostream>

using namespace std;


int main()
{
    char player1;
    char player2;

    Game gameobj;

    cout<<"choose between X or O"<<endl;
    cin>> player1;

    if(player1 == 'X') player2='O';
    else player2 = 'X';
    
    for(int i=0; i<4; i++)
    {
        int location;

        gameobj.print();
        cout<<"enter location to enter "<< player1<<"between 0-8 as shown above : ";
        cin>> location;

        while(! (location>=0 && location<9) )
        {
            cout<<"invalid location ,  please renter location between 0-8: ";
            cin>>location;
        }

        while(!gameobj.is_empty(location) )
        {
           cout<<"invalid location , already filled please renter : ";
           cin>>location;
        }
        gameobj.insert(location, player1);
        //gameobj.print();

        if(gameobj.is_victory()) 
        {
            cout<<"congrats player1 victorious";
            return 0;
        }

        gameobj.computer_play(player2);

        if(gameobj.is_victory()) 
        {
            gameobj.print();

            cout<<" computer victorious better luck next time";
            return 0;
            
        }

        /*cout<<"enter location to enter "<< player2<<"between 0-8 as shown above : ";
        cin>> location;

        while(! (location>=0 && location<9) )
        {
            cout<<"invalid location ,  please renter location between 0-8: ";
            cin>>location;
        }

        while(!gameobj.is_empty(location) )
        {
           cout<<"invalid location , already filled please renter : ";
           cin>>location;
        }
        gameobj.insert(location, player2);
        
           
        if(gameobj.is_victory()) 
        {
            cout<<"congrats player2 victorious";
            return 0;
        }*/
        
      
    }
    return 0;
}