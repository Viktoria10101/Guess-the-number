#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int choise;
    cout << "Scissors - 0, rock - 1, paper - 2";
    cin >> choise;
    int r = rand () % (2 -0) + 1;
    if (choise = 0 and r = 1 or choise = 1 and r = 2 or choise = 2 and r = 0){
        cout << "Computer won";
    }
    if (r = 0 and choise = 1 or r = 1 and choise = 2 or r = 2 and choise = 0){
        cout << "You won";
    }
    else {
        cout << "It is a draw" << endl;
    }
    return 0;

}
