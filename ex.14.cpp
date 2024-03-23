#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die {
public:
    Die() {
        srand(time(0));
    }

    int roll() {

        return rand() % 6 + 1;
    }
};

int main() {
    Die die;
    int fishingPoints = 0;
    char choice;

    do {
        cout << "Do you want to fish for more items? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {

            int result = die.roll();


            string item;
            int points;
            switch (result) {
                case 1:
                    item = "a huge fish";
                    points = 10;
                    break;
                case 2:
                    item = "an old shoe";
                    points = -5;
                    break;
                case 3:
                    item = "a little fish";
                    points = 5;
                    break;
               d
                default:
                    item = "nothing";
                    points = 0;
            }

            cout << "You caught " << item << "." << endl;
            fishingPoints += points;
        }
    } while (choice == 'y' || choice == 'Y');


    cout << "Total fishing points: " << fishingPoints << endl;
    if (fishingPoints >= 10) {
        cout << "Congratulations! You're a fishing champion!" << endl;
    } else if (fishingPoints > 0) {
        cout << "Well done! You've had a successful fishing trip!" << endl;
    } else {
        cout << "Better luck next time! Keep fishing!" << endl;
    }

    return 0;
}s
