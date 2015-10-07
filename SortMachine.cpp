#include "SortMachine.h"

void SortMachine::run() {
  std::string input;
  printUsage();
  std::cout << "Command > ";
  while (std::getline(std::cin, input)) {
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    if (input.compare(0, 3, "gen") == 0) {
      generate();
    } else if (input.compare(0, 4, "sort") == 0) {
      sort();
    } else if (input.compare(0, 5, "print") == 0) {
      printArray();
    } else {
      printUsage();
    }
    std::cout << "Command > ";
  }
}

void SortMachine::generate() {
  srand(time(NULL));
  for (int i = 0; i < arrLength; ++i) {
    arr.push_back(i);
  }
  std::random_shuffle(arr.begin(), arr.end());
}

void SortMachine::sort() {
  int time = 0;
  std::clock_t startTime, endTime;
  startTime = std::clock();

  std::sort(arr.begin(), arr.end());

  endTime = std::clock();
  time = static_cast<int>((1000*(endTime - startTime)) / static_cast<double>(CLOCKS_PER_SEC));
  std::cout << time << std::endl;
}

void SortMachine::printUsage() {
  std::cout << "gen - generate random array" << std::endl;
  std::cout << "sort - sort array" << std::endl;
  std::cout << "print - print array" << std::endl;
  std::cout << "help - show usage" << std::endl;
}

void SortMachine::printArray() {
  for (int i = 0; i < arrLength; ++i) {
    std::cout << arr[i] << std::endl;;
  }
}
