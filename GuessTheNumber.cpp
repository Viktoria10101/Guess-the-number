#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int countA = 1;
    srand(time(0)); //seed random number generator
    int upperLimit;
    int downLimit;
    cout << "Enter a positive min limit ";
    cin >> downLimit;
    cout << "Enter a positive max limit";
    cin >> downLimit;
    while ( upperLimit <= 0 || downLimit<= 0 || upperLimit < downLimit) {
        cout << "Invalid data\n";
        cout << "Enter a positive min limit ";
        cin >> downLimit;
        cout << "Enter a positive max limit";
        cin >> downLimit;
    int r = rand () % (upperLimit - downLimit) + 1;
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
