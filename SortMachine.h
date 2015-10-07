#ifndef SORT_MACHINE_H
#define SORT_MACHINE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class SortMachine {
 public:
  int arrLength_;
  std::vector<int> arr_;

  explicit SortMachine() : arrLength_(10)
    {}
  ~SortMachine() {}

  void run();
  void printUsage();
  void printArray();
  void generate();
  void sort();
};

#endif // SORT_MACHINE_H

