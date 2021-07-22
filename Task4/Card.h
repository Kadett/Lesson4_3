#pragma once


class Card {
public:
    enum class Suits {
        HEART, DIAMOND, CLUB, SPADE
    };
    enum class Values{
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
    };
    Card(Suits, Values);
    void flip();
    int getValue();
private:
    bool isOpen{};
    Suits suit;
    Values value;
};



