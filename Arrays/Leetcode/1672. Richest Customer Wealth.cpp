class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int columns = accounts[0].size();  
        int max_sum=INT_MIN;
        int sum;
        for(int i=0;i<rows;i++){
            sum = 0;
            for (int j=0;j<columns;j++){
              //checking row sum
                sum += accounts[i][j];
                
            }
          //checking if that sum is more than all max_sum of previous
            if(sum > max_sum) max_sum = sum;
        }
        
        return max_sum;
        
    }
};


 
