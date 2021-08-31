#include <iostream>
#include "Tile.h"

using namespace std;


//Constructors
Tile::Tile(int i, int j) {
    this->i = i;
    this->j = j;
    this->piece = //Empty;
}

Tile::Tile(int i, int j, Piece piece) {
    this->i = i;
    this->j = j;
    this->occupied = true;

}

//Standard Getters
bool Tile::hasPiece() {
    return occupied;
}

Piece Tile::getPiece() {
    return piece;
}

//Func to remove piece
void Tile::removePiece(){
    this->occupied = false;
    this->piece = //Empty
}