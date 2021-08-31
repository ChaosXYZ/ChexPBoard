#ifndef PIECE_H_
#define PIECE_H_

#include <iostream>
using namespace std;

class Piece {
    private:
        int i;
        int j;
        string symbol;
        int colour;
    
    public:
        Piece(string symbol, int colour, int i, int j); //Overloaded Constructor
        string getSymbol();
        int getColour();
        void updateCoords(int i, int j);

};

#endif