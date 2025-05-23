class Solution {
    public:
        int hIndex(vector<int>& citations) {
            sort(citations.begin(), citations.end());
            int h = 0, i = citations.size() - 1;
            while (i >= 0 and citations[i] > h) 
            {
                h ++;
                i --;
            }
            return h;
        }
    };
    