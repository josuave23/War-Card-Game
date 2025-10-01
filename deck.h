#ifndef DECK_H
#define DECK_H
#include "card.h"

class Deck{
    private:
        Card storage[52];
        int top = 0;

    public:
        Deck();
        Card deal();
        void displayDeck();
        void shuffle();
};

#endif