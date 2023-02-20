#include <iostream>

int main() {
    int player1 = 0;
    int player2 = 0;
    int serve = 1;
    bool gameOver = false;

    while (!gameOver) {
        if (serve == 1) {
            std::cout << "Player 1 serves" << std::endl;
            player2++;
            serve = 2;
        } else {
            std::cout << "Player 2 serves" << std::endl;
            player1++;
            serve = 1;
        }

        std::cout << "Player 1: " << player1 << "   Player 2: " << player2 << std::endl;

        if (player1 >= 21 || player2 >= 21) {
            int winner;
            if (player1 > player2) {
                winner = 1;
            } else {
                winner = 2;
            }
            std::cout << "Player " << winner << " wins!" << std::endl;
            gameOver = true;
        }
    }

    return 0;
}