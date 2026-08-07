class Solution{
public:
    int countOdd(int arr[], int n){
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                cnt++;
            }
        }
        return cnt;
    }
};
