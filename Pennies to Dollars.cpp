#include <iostream>
using namespace std;

int main(){
    int pennies;
    int nickles;
    int dimes;
    int quaters;
    int dollars;
    int leftOver;

    pennies = 0;
    nickles = 0;
    dimes = 0;
    quaters = 0;
    dollars = 0;
    leftOver = 0;

    cout << "How many pennies do you have?" << endl;
    cin >> pennies;
    

    dollars = pennies / 100;
    leftOver = pennies % 100;

    quaters = leftOver / 25;
    leftOver = leftOver % 25;

    dimes = leftOver / 10;
    leftOver = leftOver % 10;

    nickles = leftOver / 5;
    leftOver = leftOver % 5;

    pennies = leftOver;
    
    leftOver = leftOver - pennies;

    

    cout << "You have " << dollars << " dollars ";
    cout << "You have " << quaters << " quaters ";
    cout << "You have " << dimes << " dimes ";
    cout << "You have " << nickles << " nickles ";
    cout << "You have " << pennies << " pennies ";
    
    
}