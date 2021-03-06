#ifndef BOARD_H_
#define BOARD_H_

#include <ios>
#include <list>
#include <vector>

const int EMPTY = 0;
const int ROWS = 9;
const int COLS = 9;
const int GROUP_ROWS = 3;
const int GROUP_COLS = 3;

struct Square {
  int row;
  int col;
  int val;
  std::list<int> possible_vals;
};

typedef std::vector<Square> Row;
typedef Row::const_iterator RowIter;
typedef std::vector<Row> Puzzle;
typedef Puzzle::const_iterator PuzzleIter;

// Create an empty puzzle.
Puzzle make_puzzle();

// Read a puzzle from an input stream.
std::istream& read_puzzle(Puzzle& puzzle, std::istream& stream);

// Read a puzzle from a string.
void read_puzzle(Puzzle& puzzle, const std::string& puzzle_str);

// Write a puzzle to an input stream.
std::ostream& write_puzzle(const Puzzle& puzzle, std::ostream& stream);

// Write a puzzle to a string.
std::string write_puzzle(const Puzzle& puzzle);

// Private:
void fill(std::list<int>& list, int start, int end);

#endif
