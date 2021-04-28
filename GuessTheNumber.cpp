#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int countA = 1;
    srand(time(0)); //seed random number generator
    int upperLimit, downLimit;
    cout << "Insert limits for the numbers";
    cin >> upperLimit >> downLimit;
    int r = rand() % (upperLimit - downLimit) + downLimit; // random number without restriction
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    while (guess != r) {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;

        if (guess == 0) {
            break;
        }

        if (guess > r) {
            cout << "Too high!\n\n";
            countA ++;
        }
        else if (guess < r)
            {
                cout << "Too low!\n\n";
                countA ++;
            }
        else {
            cout << "\nCorrect! You got it in ";
            cout << countA << " attempts ";
        }
    }

    return 0;
}
