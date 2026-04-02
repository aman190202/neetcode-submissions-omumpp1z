class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for(int i = 0 ; i < 9 ; i++)
        {
            for( int j = 0 ; j< 9 ; j++)
            {
                if(board[i][j]=='.')
                    continue;

                if(rows[i].find(board[i][j])!=rows[i].end() || cols[j].find(board[i][j])!=cols[j].end())
                    return false;
                    
                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);

                int box_index = (i/3)*3 + (j/3);
                if(boxes[box_index].find(board[i][j])!=boxes[box_index].end())
                    return false;
                boxes[box_index].insert(board[i][j]);
            }
        }
        return true;
    }
};
