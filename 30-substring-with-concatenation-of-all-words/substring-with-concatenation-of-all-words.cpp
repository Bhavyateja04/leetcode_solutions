class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        int n = s.size();
        int m = words.size();
        int wordLen = words[0].size();
        int totalLen = m * wordLen;

        unordered_map<string,int> id;
        vector<int> freq;

        // assign id to each word
        for(string &w : words){
            if(!id.count(w)){
                id[w] = freq.size();
                freq.push_back(0);
            }
            freq[id[w]]++;
        }

        int types = freq.size();

        for(int offset = 0; offset < wordLen; offset++){

            vector<int> seen(types,0);
            int left = offset, count = 0;

            for(int right = offset; right + wordLen <= n; right += wordLen){

                string w = s.substr(right, wordLen);

                if(id.count(w)){
                    int idx = id[w];
                    seen[idx]++;
                    count++;

                    while(seen[idx] > freq[idx]){
                        string lw = s.substr(left, wordLen);
                        seen[id[lw]]--;
                        count--;
                        left += wordLen;
                    }

                    if(count == m){
                        ans.push_back(left);
                        string lw = s.substr(left, wordLen);
                        seen[id[lw]]--;
                        count--;
                        left += wordLen;
                    }
                }
                else{
                    fill(seen.begin(), seen.end(), 0);
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return ans;
    }
};