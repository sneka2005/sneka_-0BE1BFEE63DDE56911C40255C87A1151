#include <iostream>
#include <string>

// Base class Player representing a cricket player
class Player {
public:
    // Method to be overridden by derived classes
    virtual void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

// Derived class Batsman representing a batsman player
class Batsman : public Player {
public:
    // Override the play() method
    void play() override {
        std::cout << "The batsman is batting." << std::endl;
    }
};

// Derived class Bowler representing a bowler player
class Bowler : public Player {
public:
    // Override the play() method
    void play() override {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    // Create objects of Batsman and Bowler classes
    Batsman batsman;
    Bowler bowler;

    // Call the play() method for Batsman object
    std::cout << "Batsman: ";
    batsman.play();

    // Call the play() method for Bowler object
    std::cout << "Bowler: ";
    bowler.play();

    return 0;
}
