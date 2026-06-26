//wap to create number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void numberGuessingGame(){
     srand(time(0));  //due to this random no are different each time
    // Step 2: Generate secret number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
      int guess;
    cout << "Guess the number between 1 and 100:\n";

    // Step 3: Loop until the player guesses correctly
    while (true) {
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
            break; // exit loop when correct
        }
    }
}
int main() {
    numberGuessingGame();
    return 0;
}