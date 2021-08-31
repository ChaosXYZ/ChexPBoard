#ifndef TILE_H_
#define TILE_H_

#include <iostream>
#include "Piece.h"

class Tile {
    private:
        int i;
        int j;
        bool occupied;
        Piece piece;
    public:
        Tile(); //default constructor
        Tile(int i, int j); //Constructor for no initial empty tile case
        Tile(int i, int j, Piece piece); //Constructor for initial occupied tile case;
        bool hasPiece();
        void setPiece(Piece piece);
        void removePiece();
        Piece getPiece();

};

#endif