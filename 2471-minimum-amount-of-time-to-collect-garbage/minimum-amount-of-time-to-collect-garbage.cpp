class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        bool mFound = false;
        bool pFound = false;
        bool gFound = false;
        int currTime = 0;

        for(int i = (garbage.size() - 1); i >= 0; --i) {
            string currGarbage = garbage[i];
            for(int j = 0; j < currGarbage.length(); ++j) {
                char typeGarb = currGarbage[j];
                ++currTime;
                switch(typeGarb) {
                    case 'M':
                        if(mFound) { break; }
                        for(int k = 0; k < i; ++k) {
                            currTime += travel[k];
                        }
                        mFound = true;
                        break;
                    case 'P':
                        if (pFound) { break; }
                        for(int k = 0; k < i; ++k) {
                            currTime += travel[k];
                        }
                        pFound = true;
                        break;
                    case 'G':
                        if (gFound) { break; }
                        for(int k = 0; k < i; ++k) {
                            currTime += travel[k];
                        }
                        gFound = true;
                        break;

                }
            }
        }
        
        return currTime;
    }
};