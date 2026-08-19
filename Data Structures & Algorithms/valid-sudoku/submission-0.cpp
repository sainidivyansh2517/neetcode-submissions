class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i<n; i++){
            unordered_set<char> st;
            for(int j = 0; j<m; j++){
                if(board[i][j] == '.') continue;
                if(st.count(board[i][j])>0){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }


        for(int i = 0; i<n; i++){
            unordered_set<int> st;

            for(int j = 0; j<m; j++){
                if(board[j][i] == '.') continue;
                if(st.count(board[j][i])>0){
                    return false;
                }

                st.insert(board[j][i]);
            }
        }

        for(int sq = 0; sq<n; sq++){
            unordered_set<char> st;
            for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                    int row = (sq/3)*3+i;
                    int col = (sq%3)*3+j;

                    if(board[row][col] == '.') continue;
                    if(st.count(board[row][col])>0) return false;
                    st.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
