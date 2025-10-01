#include <iostream>
#include <string>
#include "card.h"
using namespace std;


Card::Card(char s, char r){
    suit = s;
    rank = r;
}
Card::Card(){
    suit = 0;
    rank = 0;
}
void Card::displayCard(){
    if(rank == 'T'){
        cout << "10" << suit;
    }

    else{
        cout << rank << suit;
    }
}
int Card::compareCard(Card other){
    string ranks = "A23456789TJQK";
    int thisVal = ranks.find(rank);
    int otherVal = ranks.find(other.rank);

    if (thisVal > otherVal){
        return 1;
    }
    if (thisVal < otherVal){
        return -1;
    }
    return 0;

}