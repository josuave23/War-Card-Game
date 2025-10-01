#include "deck.h"
#include <iostream>
#include <ctime>
using namespace std;


Deck::Deck(){
    char suits[] = {'C','S','D','H'};
    char ranks[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

    int i = 0;
    for(char s : suits){
        for (char r : ranks){
            storage[i++] = Card(s,r);
        }
    }
}
Card Deck::deal(){
    Card temp = storage[top];
    top++;
    return temp;
}
void Deck::displayDeck(){
    for(int i = 0; i < 52;  i++){
        storage[i].displayCard();
        cout <<" ";
        if ((i + 1) % 13 == 0){
            cout << endl;
        }
    }
}
void Deck::shuffle(){
    srand(time(0));
    for (int i = 0; i < 52; i++){
        int rNum = rand() % 52;
        swap(storage[i], storage[rNum]);
    }
}