#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Player {
public:
    Player(const string& name, int health = 100, int armor = 0, int damage = 20);
    void takeDamage(int amount);
    void attack(Player& target);
    bool isAlive() const;

private:
    string name;
    int health;
    int armor;
    int damage;
};

Player::Player(const string& name, int health, int armor, int damage)
    : name(name), health(health), armor(armor), damage(damage) {}

void Player::takeDamage(int amount) {
    if (armor >= amount) {
        armor -= amount;
    } else {
        int remainingDamage = amount - armor;
        armor = 0;
        health -= remainingDamage;
    }
}

void Player::attack(Player& target) {
    target.takeDamage(damage);
}

bool Player::isAlive() const {
    return health > 0;
}

class Enemy {
public:
    Enemy(const string& name, int health, int damage);
    void takeDamage(int amount);
    void attack(Player& target);
    bool isAlive() const;

private:
    string name;
    int health;
    int damage;
};

Enemy::Enemy(const string& name, int health, int damage)
    : name(name), health(health), damage(damage) {}

void Enemy::takeDamage(int amount) {
    health -= amount;
}

void Enemy::attack(Player& target) {
    target.takeDamage(damage);
}

bool Enemy::isAlive() const {
    return health > 0;
}

Enemy createEnemy() {
    string enemyNames[] = { "Zombie", "Mutant", "Robot", "Soldier" };
    string name = enemyNames[rand() % 4];
    int health = rand() % 51 + 50; // Random health between 50 and 100
    int damage = rand() % 21 + 10; // Random damage between 10 and 30
    return Enemy(name, health, damage);
}

void attackInteraction(Player& player, Enemy& enemy) {
  
    if (enemy.isAlive()) {
        enemy.attack(player);
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    string playerName;
    cout << "Enter your name: ";
    cin >> playerName;

    Player player(playerName);

    cout << "Welcome, " << player.isAlive() << "! Get ready to fight for survival in Free Fire!" << endl;

    while (player.isAlive()) {
        Enemy enemy = createEnemy();
        cout << "A wild " << enemy.isAlive() << " with " << enemy.isAlive() << " health appears!" << endl;

        while (enemy.isAlive() && player.isAlive()) {
            char action;
            cout << "Do you want to [a]ttack or [r]un? ";
            cin >> action;

            if (action == 'a') {
                attackInteraction(player, enemy);
                cout << "You attack " << enemy.isAlive() << " for " << player.isAlive() << " damage!" << endl;
            } else if (action == 'r') {
                cout << "You run away from the enemy!" << endl;
                break;
            } else {
                cout << "Invalid action! Try again." << endl;
            }
        }

        if (!player.isAlive()) {
            cout << "Game Over! You were defeated." << endl;
        } else {
            cout << "Congratulations! You defeated the " << enemy.isAlive() << " and survived!" << endl;
        }

        char playAgain;
        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }
    }

    cout << "Thanks for playing Free Fire! See you next time!" << endl;

    return 0;
}

