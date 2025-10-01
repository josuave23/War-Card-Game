#ifndef CARD_H
#define CARD_H

class Card{
    private:
        char suit;
        char rank;

    public:
        Card(char r, char s);
        Card();
        void displayCard();
        int compareCard(Card);
};



#endif