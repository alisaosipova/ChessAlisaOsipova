#include <cctype>
#include "Bitboard.h"
#pragma once

enum PIECE {
	PAWN = 0,		// пешка = 0 
	KNIGHT = 1,		// конь = 1
	BISHOP = 2,		// слон = 2
	ROOK = 3,		// ладья = 3 
	QUEEN = 4,		// королева = 4
	KING = 5		// король = 5
};

enum SIDE {
	WHITE = 0,
	BLACK = 1
};

class Pieces {
private:
	std::array<std::array<Bitboard, 6>, 2> pieceBitboards{};
	std::array<Bitboard, 2> sideBitboards{};
	std::array<Bitboard, 2> invSideBitboards{};
	Bitboard all;
	Bitboard empty;
public:
	Pieces();
	Pieces(const std::string& shortFen);

	friend std::ostream& operator <<(std::ostream& ostream, Pieces pieces);
	
	void updateBitboards();
	
	void setPieceBitboard(uint8_t side, uint8_t piece, Bitboard bb);

	
	[[nodiscard]] std::array<std::array<Bitboard, 6>, 2> getPieceBitboards() const;
	[[nodiscard]] Bitboard getPieceBitboard(uint8_t side, uint8_t piece) const;
	[[nodiscard]] Bitboard getSideBitboard(uint8_t side) const;
	[[nodiscard]] Bitboard getInvSideBitboard(uint8_t side) const;
	[[nodiscard]] Bitboard getAllBitboard() const;
	[[nodiscard]] Bitboard getEmptyBitboard() const;
	static uint8_t inverse(uint8_t side);
};
