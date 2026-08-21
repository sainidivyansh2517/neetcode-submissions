class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(people.begin(), people.end());
        int cnt = 0;
        
        int i = 0;
        int j = n-1;
        while(i<j){

            if((people[i] + people[j]) <= limit){
                cnt++;
                i++;
                j--;
            }
            else if((people[i] + people[j])>limit){
                j--;
            }
        }

        int boats = cnt + (n-(cnt*2));
        return boats;
    }
};