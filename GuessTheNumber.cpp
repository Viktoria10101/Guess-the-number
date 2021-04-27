#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int countA = 1;
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;

        if (guess == 0) {
            break;
        }

        if (guess > num) {
            cout << "Too high!\n\n";
            countA ++;
        }
        else if (guess < num)
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
