class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.\
        
        int count=0;

        if(arr.size()>1 && arr[0]>arr[1]){ 
        
            count=1;
        
        }
        
        for(int i=1;i<arr.size();i++){
        
         if(arr[i]<arr[i-1])  count++;
        
        }
        
        if(count<=4 && count%2==0)  return true;
        
        return false;
        
    }
};