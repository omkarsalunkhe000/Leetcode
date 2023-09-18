class Solution {
public:
    int findMinDifference(vector<string>& time) {

        vector<int> m;

        for(int i=0;i<time.size();i++){

            string curr = time[i];

            int h = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));

            int total = h*60+min;

            m.push_back(total);

        }

        sort(m.begin(),m.end());

        int n = m.size();

        int mini = INT_MAX;

        for(int i=0;i<n-1;i++){
            int diff = m[i+1]-m[i];
            mini = min(mini,diff);
        }

        int last1 = (m[0]+1440) - m[n-1];
        int last2 = m[n-1] - m[0];
        int last= min(last1, last2);
        mini = min(mini,last);

        return mini;
        
    }
};