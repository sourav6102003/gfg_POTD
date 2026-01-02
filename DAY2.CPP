class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int start1 = 0;
        int temp = 0 ;
        int start2 = arr.size()-1;
        
        while(temp <=start2){
            if(arr[temp]==2){
                swap (arr[temp], arr[start2]);
                start2--;
            }
            if(arr[temp]==0){
                swap (arr[temp], arr[start1]);
                start1++;
                temp++;
            }
            if(arr[temp]==1){
                temp++;
            }
        }
        
    }
};
