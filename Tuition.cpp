#include <iostream>
using namespace std;
int main(){
    double tuition = 10000;
    for(int i=0; i<10; i++){
        tuition += 0.06 * tuition;
    }
    double moneyNeeded = 0;
     for(int i=0; i<4; i++){
        moneyNeeded += tuition;
        tuition += 0.06 * tuition;
     }
     cout << moneyNeeded;
}
