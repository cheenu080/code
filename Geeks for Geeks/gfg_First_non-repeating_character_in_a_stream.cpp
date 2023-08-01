
class Solution
{
	public:
	//function
	string FirstNonRepeating(string A)
	// code start.
	{	
            int freq[26] = {0};
            queue<char>que;    
            string ans = "";
            for( int i = 0 ; i < A.length() ; i++){
                freq[A[i]-'a']++;
                if( freq[A[i]-'a'] == 1){
                    que.push(A[i]);
                }
                while(que.empty() == false && freq[que.front()-'a'] > 1){
                    que.pop();
                }
                if( que.empty()){
                    ans += "#";
                }
                else{
                    ans += que.front();
                }
            }
            return ans;
    }
    //code end
};

//driver code is present by default
