#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;


int main(){
    
    int treeHeight;
    cout << "Enter Tree Height: ";
    cin >> treeHeight;

    int spaces = treeHeight - 1;
    int hashes = 1;
    int treeStump = treeHeight - 1;

    while(treeHeight != 0){
        for(int i = 0; i < spaces; ++i){
            cout << " ";

        }
        for(int k = 0; k < hashes; ++k){
            cout << "#";
        }
        cout << "\n";
        spaces --;
        hashes += 2;
        treeHeight -=1;

    }
    for(int j = 0; j < treeStump; ++j){
        cout << " ";
    }
    cout << "#";

    

    return 0;

}
