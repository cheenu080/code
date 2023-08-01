# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi

class Solution {

public:
	vector <int> nearlySorted(int arr[], int num, int K) {
		//code here
		vector<int> v;
		priority_queue <int , vector<int> , greater<int>>pq;

		for (int i = 0 ; i < num ; i++) {
			pq.push(arr[i]);
			if (pq.size() > K) {
				v.push_back(pq.top());
				pq.pop();
			}
		}
		while (!pq.empty()) {
			v.push_back(pq.top());
			pq.pop();
		}
		return v;

	}

};

//driver code is present by default
