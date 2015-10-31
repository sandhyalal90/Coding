#include <iostream>
using namespace std;

bool solution(int nums[], int len,  int target) {
        if(len == 0) {
            return target == 0;
        }
        int start = 0;
        int end = 0;
        int sum = nums[0];
        if (sum == target) {
            return true;
        }

        while(end < len) {
            if(sum > target) {
                sum -= nums[start];
                start++;
            } else {
                end++;
                if(end < len) {
                    sum += nums[end];
                }
            }
            if (sum == target) {
                return true;
            }
        }
        return false;
}

int main(){

    int array[] = {-1,-2,-4,5,1, 2,7};
    int len = sizeof(array)/sizeof(int);
    bool b = solution(array, len, 0);
    cout<<b<<endl;
    return 0;
}