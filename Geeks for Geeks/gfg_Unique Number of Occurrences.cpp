
class Solution
{
	public:
	//function
	bool isFrequencyUnique(int n, int arr[])
	// code start.
	{
		unordered_map<int, int> frequencyMap;
        unordered_set<int> uniqueFrequencies;
        
        for (int i = 0; i < n; i++) {
            int element = arr[i];
            frequencyMap[element]++;
        }
		for (auto& pair : frequencyMap) {
            int frequency = pair.second;
            if (uniqueFrequencies.count(frequency) > 0) {
                return false; // Frequency is not unique
            }
            uniqueFrequencies.insert(frequency);
        }

        return true; // Frequency is unique
		
		
	

    }
    //code end
};

//driver code is present by default
