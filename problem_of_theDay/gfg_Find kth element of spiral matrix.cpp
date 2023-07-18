
class Solution
{
	public:
	//function
	int findK(int a[MAX][MAX], int n, int m, int k) 
	// code start.
	{
        int starting_row = 0;
        int starting_col = 0;
        int ending_row = n - 1;
        int ending_col = m - 1;

        int count = 0;
        int total = n * m;

        while (count < total) {
            // Traverse from left to right
            for (int i = starting_col; i <= ending_col; i++) {
                count++;
                if (count == k)
                    return a[starting_row][i];
            }
            starting_row++;

            // Traverse from top to bottom
            for (int i = starting_row; i <= ending_row; i++) {
                count++;
                if (count == k)
                    return a[i][ending_col];
            }
            ending_col--;

            // Traverse from right to left
            if (starting_row <= ending_row) {
                for (int i = ending_col; i >= starting_col; i--) {
                    count++;
                    if (count == k)
                        return a[ending_row][i];
                }
                ending_row--;
            }

            // Traverse from bottom to top
            if (starting_col <= ending_col) {
                for (int i = ending_row; i >= starting_row; i--) {
                    count++;
                    if (count == k)
                        return a[i][starting_col];
                }
                starting_col++;
            }
        }

        return -1; // Return -1 if k is out of bounds
    }
    //code end
};

//driver code is present by default
