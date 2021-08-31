#include <iostream>
#include "Piece.h"
using namespace std;

//Constructors
Piece::Piece() {}

Piece::Piece(string symbol, int colour, int i, int j) {
    this->symbol = symbol;
    this->colour = colour;
    this->i = i;
    this->j = j;
}

//Standard getters to obtain the symbol and the colour 
string Piece::getSymbol() {
    return symbol;
}

int Piece::getColour() {
    return colour;
}

//Method to update Co-ordinates 
void Piece::updateCoords(int i, int j){
    this->i = i;
    this->j = j;
}