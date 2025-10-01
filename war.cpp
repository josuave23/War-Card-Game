// Author: Jose Hernandez-Arce
// CECS 325-02 Project 1
// Due 02/13/2025

#include "deck.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    string player1;
    string player2;

    Deck deck;

    cout << "Enter the name of the first player: ";
    cin >> player1;
    cout << "Enter name of the second player: ";
    cin >> player2;

    cout << "\nOriginal Deck\n";
    deck.displayDeck();

    deck.shuffle();

    cout << "\nShuffled Deck\n";
    deck.displayDeck();


    int score1 = 0;
    int score2 = 0;
    int ties = 0;


    for(int i = 0; i < 26; i++){
        cout << endl;
        Card card1 = deck.deal();
        Card card2 = deck.deal();


        cout << "Game " << i + 1 << endl;
        cout << "--------" << endl;
        cout << player1 << "-> ";
        card1.displayCard();
        cout << endl;
        cout << player2 << "-> ";
        card2.displayCard();
        cout << endl;
        int result = card1.compareCard(card2);
        if(result == 1){
            cout << player1 << "-> Winner";
            score1++;
        }
        else if (result == -1){
            cout << player2 << "-> Winner";
            score2++;
        }
        else {
            cout << "Tie Game";
            ties++;
        }
        cout << endl;
    }
    cout << "\n-----FINAL STATS-----\n";
    cout << "       " << player1 << " vs " << player2 << endl;
    cout << "Wins   " << score1 << "      " << score2 << endl;
    cout << "Losses " << score2 << "      " << score1 << endl;
    cout << "Ties   " << ties << "     " << ties << endl;

}