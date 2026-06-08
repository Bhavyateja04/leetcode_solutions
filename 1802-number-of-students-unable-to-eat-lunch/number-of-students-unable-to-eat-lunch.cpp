class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int oneCount=0,zeroCount=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==1){
                oneCount++;
            }
            else if(students[i]==0){
                zeroCount++;
            }
        }
            for(int i=0;i<sandwiches.size();i++){
                if (sandwiches[i] == 1) {
                if (oneCount == 0)
                    return oneCount + zeroCount;
                oneCount--;
            } else {
                if (zeroCount == 0)
                    return oneCount + zeroCount;
                zeroCount--;
            }
            }
             return 0;
    }
};