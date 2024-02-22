#include "AI.h"
#include "Storage.h"


#pragma once


class UI {
public:
    UI();
    void start();
private:
    sf::RenderWindow window;
    sf::Event event{};

    Position position;
    sf::Vector2i buff;

    static constexpr int32_t BOARD_MARGIN = 20;
    enum STATUS {
        WHITE_TO_MOVE,
        BLACK_TO_MOVE,
        WHITE_WON,
        BLACK_WON,
        DRAW
    };

    void update();
    void drawCells();
    void drawPieces();
    void drawSelectedPieceMoves();
    void updateWindowTitle();

    [[nodiscard]] sf::Vector2f getCellSize();
    [[nodiscard]] sf::Vector2f getCellPosition(int32_t x, int32_t y);
    [[nodiscard]] uint8_t getStatus();
    [[nodiscard]] std::string getTextureName(int32_t x, int32_t y) const;
};
