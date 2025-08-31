#include <iostream>
using namespace std;

class InfectionSimulator {

private:
  const static int MAX_ROWS = 100;
  const static int MAX_COLS = 100;
  char grid[MAX_ROWS][MAX_COLS];
  int rows, cols;

public:
  /**
   * Constructor: Initializes grid from file.
   * @param filename: Name of the input file
   * Preconditions: File must exist and follow format.
   * Postconditions: Grid is populated or error is handled.
   */

  InfectionSimulator(const std::string &filename);

  /**
   * Simulates pathogen spread using iterative flood fill.
   * Preconditions: Grid must be initialized.
   * Postconditions: Susceptible neighbors of infected cells are infected.
   */

  void simulateInfection();

  /**
   * Displays the grid to standard output.
   * Preconditions: Grid must be initialized.
   * Postconditions: Outputs grid in row-major format.
   */

  void displayGrid() const;
};
