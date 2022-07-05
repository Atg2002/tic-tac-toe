#ifndef tic_H
#define tic_H
#include"tic_tac_toe.h"
#endif
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

Game::Game()
{
    pntr = new char[9] ;

    for(int i=0; i<9; i++)
    {
        pntr[i] = 48+i;
    }
}

void Game::insert(int location, char val)
{
    pntr[location] = val;
}

void Game::print() const
{
    for(int i=1; i<=9; i++)
    {
        cout<<pntr[i-1]<<"|";
        if(i%3 == 0) cout<<endl;
    }
}

bool Game::is_empty(int location) const
{
    if(pntr[location] == location+48  ) return true;
    else return false;
    
}

bool Game::is_victory() const
{
 if(pntr[0] == pntr[1] && pntr[1] == pntr[2]) return true;
 if(pntr[3] == pntr[4] && pntr[4] == pntr[5]) return true;
 if(pntr[6] == pntr[7] && pntr[7] == pntr[8]) return true;
 if(pntr[0] == pntr[3] && pntr[3] == pntr[6]) return true;
 if(pntr[1] == pntr[4] && pntr[4] == pntr[7]) return true;
 if(pntr[2] == pntr[5] && pntr[5] == pntr[8]) return true;
 if(pntr[0] == pntr[4] && pntr[4] == pntr[8]) return true;
 if(pntr[2] == pntr[4] && pntr[4] == pntr[6]) return true;

 return false;

}

void Game::computer_play(char val)
{
    if(pntr[0] == pntr[1] && is_empty(2)&& pntr[1] == val) {pntr[2] = val; return;}
    if(pntr[0] == pntr[2] && is_empty(1)&& pntr[2] == val) {pntr[1] = val;return;}
    if(pntr[2] == pntr[1] && is_empty(0)&& pntr[1] == val) {pntr[0] = val; return;}

    if(pntr[3] == pntr[4] && is_empty(5)&& pntr[3] == val) {pntr[5] = val; return;}
    if(pntr[3] == pntr[5] && is_empty(4)&& pntr[3] == val) {pntr[4] = val; return;}
    if(pntr[4] == pntr[5] && is_empty(3)&& pntr[4] == val) {pntr[3] = val; return;}

    if(pntr[6] == pntr[7] && is_empty(8)&& pntr[6] == val) {pntr[8] = val; return;}
    if(pntr[8] == pntr[6] && is_empty(7)&& pntr[8] == val) {pntr[7] = val; return;}
    if(pntr[7] == pntr[8] && is_empty(6)&& pntr[7] == val) {pntr[6] = val; return;}

    if(pntr[0] == pntr[3] && is_empty(6)&& pntr[0] == val) {pntr[6] = val; return;}
    if(pntr[0] == pntr[6] && is_empty(3)&& pntr[0] == val) {pntr[3] = val; return;}
    if(pntr[3] == pntr[6] && is_empty(0)&& pntr[3] == val) {pntr[0] = val; return;}

    if(pntr[1] == pntr[4] && is_empty(7)&& pntr[1] == val) {pntr[7] = val; return;}
    if(pntr[7] == pntr[1] && is_empty(4)&& pntr[7] == val) {pntr[4] = val; return;}
    if(pntr[7] == pntr[4] && is_empty(1)&& pntr[7] == val) {pntr[1] = val; return;}
 
    if(pntr[2] == pntr[5] && is_empty(8)&& pntr[2] == val) {pntr[8] = val; return;}
    if(pntr[8] == pntr[2] && is_empty(5)&& pntr[8] == val) {pntr[5] = val; return;}
    if(pntr[8] == pntr[5] && is_empty(2)&& pntr[8] == val) {pntr[2] = val; return;}

    if(pntr[0] == pntr[4] && is_empty(8)&& pntr[0] == val) {pntr[8] = val; return;}
    if(pntr[0] == pntr[8] && is_empty(4)&& pntr[0] == val) {pntr[4] = val; return;}
    if(pntr[4] == pntr[8] && is_empty(0)&& pntr[4] == val) {pntr[0] = val; return;}

    if(pntr[6] == pntr[4] && is_empty(2)&& pntr[6] == val) {pntr[2] = val; return;}
    if(pntr[6] == pntr[2] && is_empty(4)&& pntr[6] == val) {pntr[4] = val; return;}
    if(pntr[2] == pntr[4] && is_empty(6)&& pntr[2] == val) {pntr[6] = val; return;}




    if(pntr[0] == pntr[1] && is_empty(2)) {pntr[2] = val; return;}
    if(pntr[0] == pntr[2] && is_empty(1)) {pntr[1] = val;return;}
    if(pntr[2] == pntr[1] && is_empty(0)) {pntr[0] = val; return;}

    if(pntr[3] == pntr[4] && is_empty(5)) {pntr[5] = val; return;}
    if(pntr[3] == pntr[5] && is_empty(4)) {pntr[4] = val; return;}
    if(pntr[4] == pntr[5] && is_empty(3)) {pntr[3] = val; return;}

    if(pntr[6] == pntr[7] && is_empty(8)) {pntr[8] = val; return;}
    if(pntr[8] == pntr[6] && is_empty(7)) {pntr[7] = val; return;}
    if(pntr[7] == pntr[8] && is_empty(6)) {pntr[6] = val; return;}

    if(pntr[0] == pntr[3] && is_empty(6)) {pntr[6] = val; return;}
    if(pntr[0] == pntr[6] && is_empty(3)) {pntr[3] = val; return;}
    if(pntr[3] == pntr[6] && is_empty(0)) {pntr[0] = val; return;}

    if(pntr[1] == pntr[4] && is_empty(7)) {pntr[7] = val; return;}
    if(pntr[7] == pntr[1] && is_empty(4)) {pntr[4] = val; return;}
    if(pntr[7] == pntr[4] && is_empty(1)) {pntr[1] = val; return;}
 
    if(pntr[2] == pntr[5] && is_empty(8)) {pntr[8] = val; return;}
    if(pntr[8] == pntr[2] && is_empty(5)) {pntr[5] = val; return;}
    if(pntr[8] == pntr[5] && is_empty(2)) {pntr[2] = val; return;}

    if(pntr[0] == pntr[4] && is_empty(8)) {pntr[8] = val; return;}
    if(pntr[0] == pntr[8] && is_empty(4)) {pntr[4] = val; return;}
    if(pntr[4] == pntr[8] && is_empty(0)) {pntr[0] = val; return;}

    if(pntr[6] == pntr[4] && is_empty(2)) {pntr[2] = val; return;}
    if(pntr[6] == pntr[2] && is_empty(4)) {pntr[4] = val; return;}
    if(pntr[2] == pntr[4] && is_empty(6)) {pntr[6] = val; return;}

    srand(time(NULL));
    
    int location = rand()%9;

    while(!is_empty(location)) location = rand()%9;
    
    
    pntr[location] = val;



}


