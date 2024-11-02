// Annie Zhao
// November 2, 2024
// Lab 7

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  //  Variables
  ifstream gameScores; // declare an ifstream variable
  ofstream outData; // declare an ofstream variable
  double score1;
  double score2;
  double score3;
  double average;
  string player;

  // Open the files
  gameScores.open("game_scores.txt");
  outData.open("outData.txt");

  // Loop until eof
  while (!gameScores.eof()) {
    gameScores >> player >> score1 >> score2 >> score3;
    average = (score1/5) + (score2*3/10) + (score3/2);
    outData << "Player: " << player << ", Average: " << average << endl;
    
    // Print out corresponding statement
    if (average > 2000)
      outData << "Congrats! You are an Expert!" << endl;
    else if (average <= 2000 && average >1800)
      outData << "Master - Good Job!" << endl;
    else if (average <= 1800 && average > 1500)
      outData << "Advanced - Good Job!" << endl;
    else if (average <= 1500 && average > 1000)
      outData << "Intermediate" << endl;
    else
      outData << "Beginner - Keep Practicing!" << endl;
  }

  // Close the files
  gameScores.close();
  outData.close();
  return 0;
}
// Output
/*
Player: Joe, Average: 686
Beginner - Keep Practicing!
Player: Bob, Average: 569
Beginner - Keep Practicing!
Player: Will, Average: 1240
Intermediate
*/