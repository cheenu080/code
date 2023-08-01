
class Solution
{
	public:
	//function
	queue<int> rev(queue<int> q)
	// code start.
	{
		stack <int> s;//LIFO
		while(!q.empty()){
			s.push(q.front());
			q.pop();
		}
		while (!s.empty()) {
			q.push(s.top());
			s.pop();
		}
		return q;
    }
    //code end
};

//driver code is present by default
