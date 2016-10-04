#include <iostream>
#include <string>
using namespace std;
int gamePlay() {
  int numberToGuess = 10;
  int numberGuessed;
  bool correctGuess = false;
  int numberOfGuesses = 0;
  string compare;

  do {
    cout << "\nPlease enter a number..\n";
    cin >> numberGuessed;

    if (numberGuessed == numberToGuess){
      correctGuess = true;
      cout << "Correct! You took " << numberOfGuesses << " guesses\n";
    } else{
      numberOfGuesses++;
      if(numberGuessed > numberToGuess){
        compare = "Too high,";
      }else{
        compare = "Too low,";
      }
      cout << compare << " please guess again!\n";
    }

  } while (correctGuess == false);

  return 0;
}

int main(){
  bool gameOn = true;
  string playAgain;
  cout << "Hello! Welcome to Evan's awesome number guess game!";

  while (gameOn){
    gamePlay();
    cout << "Would you like to play again? (yes/no)\n";
    cin >> playAgain;

    if(playAgain.compare("yes")){
      gameOn = false;
    }
  }
  cout << "Exiting game\n";
  return 0;
}
