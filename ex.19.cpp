#include <iostream>
#include <string>

using namespace std;

class Question {
public:
    string question;
    string options[4];
    int correctAnswer;

    Question(string q, string opt1, string opt2, string opt3, string opt4, int correct)
        : question(q), correctAnswer(correct) {
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
    }

    bool isCorrect(int answer) const {
        return answer == correctAnswer;
    }
};

int main() {
    Question questions[10] = {
        {"What is the capital of France?", "Paris", "Rome", "Berlin", "Madrid", 1},
        {"Who wrote 'Hamlet'?", "William Shakespeare", "Charles Dickens", "Jane Austen", "Leo Tolstoy", 1},

    };

    int player1Score = 0, player2Score = 0;

    for (int i = 0; i < 10; ++i) {
        cout << "Question " << i + 1 << ": " << questions[i].question << endl;
        for (int j = 0; j < 4; ++j) {
            cout << j + 1 << ". " << questions[i].options[j] << endl;
        }

        int answer;
        cout << "Enter your answer (1-4): ";
        cin >> answer;

        if (questions[i].isCorrect(answer)) {
            cout << "Correct!" << endl;
            if (i % 2 == 0) {
                ++player1Score;
            } else {
                ++player2Score;
            }
        } else {
            cout << "Incorrect!" << endl;
        }
    }

    cout << "Player 1 Score: " << player1Score << endl;
    cout << "Player 2 Score: " << player2Score << endl;

    if (player1Score > player2Score) {
        cout << "Player 1 wins!" << endl;
    } else if (player2Score > player1Score) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
