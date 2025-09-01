/*
 * Author: Cody George
 * Assignment Title: Program 1
 * Assignment Description: Simulating Pathogen Spread
 * Due Date: 8/31/2025
 * Date Created: 8/29/2025
 * Date Last Modified: 8/31/2025
 */

/*
 * Data Abstraction:
 * reads data from infection_map.txt
 *
 * Input:
 * stores data from infection_map.txt into a 2D array
 *
 * Process:
 * iterates each through each cell in the 2D array infection adjactent
 * susceptible cells
 *
 *
 * Output:
 * displays newly infected cells
 *
 * Assumptions:
 *
 *
 *
 */

#include "InfectionSimulator.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream inputFile;
  string infection_map = "infection_map.txt";
  string line;

  inputFile.open(infection_map); // open inputFile: 'infection_map.txt'

  // if infection_map is not open, output 'error', else output 'success'

  if (!inputFile.is_open()) {
    cout << "Error opening file..." << endl;
  } else {
    cout << "Opened successfully!" << endl;
  }

  // read line from infection_map until EOF

  while (getline(inputFile, line)) {
    cout << line << endl;
  }

  inputFile.close(); // close infection_map
  cout << "infection_map closed suscessfully!" << endl;
  return 0;
}
