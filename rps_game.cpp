#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    const std::string RPS_LIST[3] = {"Rock", "Paper", "Scissors"};
	const std::string RPS_LIST_KEYWORDS[3] = {"R", "P", "S"}; // R - Rock, P - Paper, S - Scissors


    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int rps_list_size = sizeof(RPS_LIST) / sizeof(RPS_LIST[0]);

    while (true) {
        int random_rps = std::rand() % rps_list_size;

        std::cout << "\nWelcome to Rock Paper Scissors Shoot!\n" << std::endl;

        std::cout << "Enter Rock/Paper/Scissors (R, P, S): ";
        std::string check_for_valid_input;
        std::getline(std::cin, check_for_valid_input);

        if (check_for_valid_input == "R" || check_for_valid_input == "Rock" || check_for_valid_input == "rock" || check_for_valid_input == "r") { // Rock
            std::cout << "Opponent: " << RPS_LIST[random_rps] << std::endl;

            if (random_rps == 0) {
                std::cout << "\nDraw!" << std::endl;
            } else if (random_rps == 1) {
                std::cout << "\nOpponent Wins, You Lose!" << std::endl;
            } else if (random_rps == 2) {
                std::cout << "\nYou Win, Opponent Loses!" << std::endl;
            } else {
                std::cout << "\nError; so that means... Draw!" << std::endl;
            }
        } else if (check_for_valid_input == "P" || check_for_valid_input == "Paper" || check_for_valid_input == "paper" || check_for_valid_input == "p") { // Paper
            std::cout << "Opponent: " << RPS_LIST[random_rps] << std::endl;

            if (random_rps == 0) {
                std::cout << "\nYou Win, Opponent Loses!" << std::endl;
            } else if (random_rps == 1) {
                std::cout << "\nDraw!" << std::endl;
            } else if (random_rps == 2) {
                std::cout << "\nOpponent Wins, You Lose!" << std::endl;
            } else {
                std::cout << "\nError; so that means... Draw!" << std::endl;
            }
        } else if (check_for_valid_input == "S" || check_for_valid_input == "Scissors" || check_for_valid_input == "scissors" || check_for_valid_input == "s") { // Scissors
            std::cout << "Opponent: " << RPS_LIST[random_rps] << std::endl;

            if (random_rps == 0) {
                std::cout << "\nOpponent Wins, You Lose!" << std::endl;
            } else if (random_rps == 1) {
                std::cout << "\nYou Win, Opponent Loses!" << std::endl;
            } else if (random_rps == 2) {
                std::cout << "\nDraw!" << std::endl;
            } else {
                std::cout << "\nError; so that means... Draw!" << std::endl;
            }
        } else {
            std::cout << "\nChoose between: Rock, Paper, Scissors; Keywords (R, P, S)" << std::endl;
        }
    }

    return 0;
}
