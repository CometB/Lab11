#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

int main(){
    srand(time(0));
    
    cout << "Press Enter 3 times to reveal your future.";
    
    int x;
    for(int i=0;i<3;i++){
        cin >> x;   
    }
    
    cout << "You will get " << grade[rand() % 9] << " in this 261102.";    
}

