#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    const std::string RPS_LIST[3] = {"Rock", "Paper", "Scissors"};
	const std::string RPS_LIST_KEYWORDS[3] = {"R", "P", "S"}; // Keywords for Rock, Paper, Scissors 
	
	// Seed the random number generator using the current time to ensure different outcomes each time the game is played
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
	// Calculate the size of the RPS_LIST array to determine the number of elements (Rock, Paper, Scissors)
	int rps_list_size = sizeof(RPS_LIST) / sizeof(RPS_LIST[0]);
	
	// commands for program
	std::string rps_help_command = "?help";
	std::string rps_quit_program = "?quit";

    std::cout << "\nWelcome to Rock Paper Scissors Shoot! Need Help? Type: '?help' for a guide\n\n" << std::endl;

    while (true) {
        int random_rps = std::rand() % rps_list_size;

        std::cout << "Enter Rock/Paper/Scissors (R, P, S): ";
        std::string check_for_valid_input; // Variable check if user entered a valid input option
        std::getline(std::cin, check_for_valid_input);

		if (check_for_valid_input == rps_help_command) {
			std::cout << "\n\nWelcome to the help menu!\n" << std::endl;
			std::cout << "- To play simply enter: Rock, Paper or Scissors." << '\n';
		
			std::cout << "- Instead of typing such long characters you could use keywords like: R, r, P, p, S, s." << std::endl;
			std::cout << "- All of those are valid you can also type them like: Rock, rock, Paper, paper, Scissors, scissors." << std::endl;
			std::cout << "- If you want to exit the program you could exit it by using '?quit' or '^C' <-> 'CTRL + c'." << std::endl;
			std::cout << "- If you need additional help with anything other than keywords/commands refer to the RPS official github link: \"https://github.com/Crispybanks/RPS-Game\"\n\n" << std::endl;	
		} else if (check_for_valid_input == "R" || check_for_valid_input == "Rock" || check_for_valid_input == "rock" || check_for_valid_input == "r" || check_for_valid_input == rps_help_command) { // check if user entered a valid input option for the option 'Rock'
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
        } else if (check_for_valid_input == "P" || check_for_valid_input == "Paper" || check_for_valid_input == "paper" || check_for_valid_input == "p" || check_for_valid_input == rps_help_command) { // check if user entered a valid input option for the option 'Paper'
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
        } else if (check_for_valid_input == "S" || check_for_valid_input == "Scissors" || check_for_valid_input == "scissors" || check_for_valid_input == "s") { // check if user entered a valid input option for the option 'Scissors'
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
		} else if (check_for_valid_input == rps_quit_program) {
			std::cout << "\nExiting program... Bye!" << std::endl;
			break;
		} else { // output below if the user entered something other than the options
            std::cout << "\n- Choose between: Rock, Paper, Scissors; Keywords (R, P, S) If you need more help do: '?help'\n" << std::endl;
        }
    }

    return 0;
}
