#include <iostream>
using namespace std;

//element occuring > n/2 times (Borey-Moore Voting Algo.)

int main() {
    int arr[7] = {2, 2, 1, 1, 1, 2, 2};
    int count = 0, candidate = 0;

    for(int i = 0;i<7;i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        }
        else if(candidate = arr[i]){
            count++;
        }
        else{
            count--;
        }
    }

    cout << "element greater than n/2 is " << candidate;
}