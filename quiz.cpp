#include <iostream>

int main() {
  int g, h, r, s, max = 0;
  int answer1, answer2, answer3, answer4;
  std::string house;

  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  std::cout << "Enter number: ";
  std::cin >> answer1;

  if (answer1 == 1) {
    h += 1;
  } else if (answer1 == 2) {
    s += 1;
  } else if (answer1 == 3) {
    r += 1;
  } else if (answer1 == 4) {
    g += 1;
  } else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  std::cout << "Enter number: ";
  std::cin >> answer2;

  if (answer2 == 1) {
    g += 1;
    r += 1;
  } else if (answer2 == 2) {
    h += 1;
    r += 1;
  } else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q3) What kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";
  std::cout << "Enter number: ";
  std::cin >> answer3;

  if (answer3 == 1) {
    s += 1;
  } else if (answer3 == 2) {
    h += 1;
  } else if (answer3 == 3) {
    r += 1;
  } else if (answer4 == 4) {
    g += 1;
  } else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q4) What road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";
  std::cout << "Enter number: ";
  std::cin >> answer4;

  if (answer4 == 1) {
    h += 1;
  } else if (answer4 == 2) {
    s += 1;
  } else if (answer4 == 3) {
    g += 1;
  } else if (answer4 == 4) {
    r += 1;
  } else {
    std::cout << "Invalid Input\n";
  }

  if (g > max) {
    max = g;
    house = "Gryffindor";
  }

  if (h > max) {
    max = h;
    house = "Hufflepuff";
  }

  if (r > max) {
    max = r;
    house = "Ravenclaw";
  }

  if (s > max) {
    max = s;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

  return 0;
}