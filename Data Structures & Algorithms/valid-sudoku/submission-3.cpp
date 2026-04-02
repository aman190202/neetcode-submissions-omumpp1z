class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // vector<unordered_set<char>> rows(9);
        // vector<unordered_set<char>> cols(9);
        // vector<unordered_set<char>> boxes(9);
        int rows[9] = {};
        int cols[9] = {};
        int boxes[9] = {};

        for(int i = 0 ; i < 9 ; i++)
        {
            for( int j = 0 ; j< 9 ; j++)
            {
                if(board[i][j]=='.')
                    continue;

                int element = 1 << (board[i][j] - '1');
                int box_index = (i/3)*3 + (j/3);
            

                if(rows[i] & element || cols[j] & element || boxes[box_index] & element)
                    return false;
                    
                rows[i] |= element;
                cols[j] |= element;
                boxes[box_index] |= element;
            }
        }
        return true;
    }
};
