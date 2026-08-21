class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();

        int maxVol = INT_MIN;

        int i = 0; int j = n-1;
        while(i<j){

            int width = j-i;
            int height = min(heights[i], heights[j]);

            int vol = width*height;
            
            if(vol>maxVol){
                maxVol = vol;
            }

            if(heights[i]>=heights[j]){
                j--;
            }else{
                i++;
            }
        }

        return maxVol;
        
    }
};
