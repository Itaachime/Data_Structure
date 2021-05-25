class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int size = candies.size();
        vector<bool> res(size);
        if(size==0 || size ==1) return {true};
        
        //get the max among the candies
        int maxx= INT_MIN;
        for(int i=0;i<size;i++){
            if(candies[i]>maxx) maxx= candies[i];
        }
        
        for(int i=0; i<size;i++){
            if(candies[i] + extraCandies >= maxx){
                res[i]= true;
            }else{
                res[i]= false;
            }
        }
        
        return res;
        
    }
};


// vector<bool> res;
//         int maxc = *max_element(v.begin(),v.end());
//         for(int curr : v)
//         {
//             if(curr+extra>=maxc) res.push_back(true);
//             else res.push_back(false);
//         }
//         return res;
