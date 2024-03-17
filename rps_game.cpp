#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    const std::string RPS_LIST[3] = {"Rock", "Paper", "Scissors"};
	const std::string RPS_LIST_KEYWORDS[3] = {"R", "P", "S"}; // R - Rock, P - Paper, S - Scissors

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int rps_list_size = sizeof(RPS_LIST) / sizeof(RPS_LIST[0]);

    std::cout << "\nWelcome to Rock Paper Scissors Shoot!\n\n" << std::endl;

    while (true) {
        int random_rps = std::rand() % rps_list_size;

        std::cout << "Enter Rock/Paper/Scissors (R, P, S): ";
        std::string check_for_valid_input;
        std::getline(std::cin, check_for_valid_input);

        if (check_for_valid_input == "R" || check_for_valid_input == "Rock" || check_for_valid_input == "rock" || check_for_valid_input == "r") { // Rock
            std::cout << "\n- Opponent Entered: " << RPS_LIST[random_rps] << std::endl;

            if (random_rps == 0) {
                std::cout << "- Draw!\n" << std::endl;
            } else if (random_rps == 1) {
                std::cout << "- Opponent Wins, You Lose!\n" << std::endl;
            } else if (random_rps == 2) {
                std::cout << "- You Win, Opponent Loses!\n" << std::endl;
            } else {
                std::cout << "- Error; so that means... Draw!\n" << std::endl;
            }
        } else if (check_for_valid_input == "P" || check_for_valid_input == "Paper" || check_for_valid_input == "paper" || check_for_valid_input == "p") { // Paper
            std::cout << "\n- Opponent Entered: " << RPS_LIST[random_rps] << std::endl;

            if (random_rps == 0) {
                std::cout << "- You Win, Opponent Loses!\n" << std::endl;
            } else if (random_rps == 1) {
                std::cout << "- Draw!\n" << std::endl;
            } else if (random_rps == 2) {
                std::cout << "- Opponent Wins, You Lose!\n" << std::endl;
            } else {
                std::cout << "- Error; so that means... Draw!\n" << std::endl;
            }
        } else if (check_for_valid_input == "S" || check_for_valid_input == "Scissors" || check_for_valid_input == "scissors" || check_for_valid_input == "s") { // Scissors
            std::cout << "\n- Opponent Entered: " << RPS_LIST[random_rps] << std::endl;

            if (random_rps == 0) {
                std::cout << "- Opponent Wins, You Lose!\n" << std::endl;
            } else if (random_rps == 1) {
                std::cout << "- You Win, Opponent Loses!\n" << std::endl;
            } else if (random_rps == 2) {
                std::cout << "- Draw!\n" << std::endl;
            } else {
                std::cout << "- Error; so that means... Draw!\n" << std::endl;
            }
        } else {
            std::cout << "\n- Choose between: Rock, Paper, Scissors; Keywords (R, P, S)\n" << std::endl;
        }
    }

    return 0;
}
