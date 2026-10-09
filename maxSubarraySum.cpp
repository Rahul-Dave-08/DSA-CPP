#include <iostream>
#include<climits>

using namespace std;


// BRUTE FORCE
int main(){
    int arr[6]= {2,-3,6,-5,4,2};
    int n = 6;
    int maxi = INT_MIN;
    for(int start = 0;start<n;start++){
       
        for(int end = start;end<n;end++){
            int sum = 0;
            for(int i = start;i<=end;i++){
                sum += arr[i];
                
            }
            maxi = max(maxi,sum);
            
        }
        
    }
    cout << maxi;
}



// SLIGHTLY OPTIMISED
int main(){
    int arr[6]= {2,-3,6,-5,4,2};
    int n = 6;
    int maxi = INT_MIN;
    for(int start = 0;start<n;start++){
        int sum = 0;
        for(int end = start;end<n;end++){
            
            sum += arr[end];
            maxi = max(maxi,sum);
            
        }
        
    }
    cout << maxi;
}


// OPTIMISED SOLUTION : KADANE'S ALGORITHM
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0;i<n;i++){
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum;
}