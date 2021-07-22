#include "Card.h"

Card::Card(Card::Suits suit, Card::Values value) : suit(suit), value(value) {}

void Card::flip() {
    isOpen = !isOpen;
}

int Card::getValue() {
    return (int)value;
}
