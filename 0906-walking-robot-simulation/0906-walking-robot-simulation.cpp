class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // bool second = true;
        // bool first = false;
        // pair<int, int> p(0, 0);
        // // cout<<p.first+1<<" "<<p.second;
        // // return 0;
        // int j=0;
        // for (int i = 0; i < commands.size(); i++) {
        //     if (commands[i] == -1) {
        //         first = true;
        //         second = false;
        //     } else if (commands[i] == -2) {
        //         first = false;
        //         second = true;
        //     } else {
        //         int temp = commands[i];
        //         while (temp) {
        //             if (obstacles.size() == 0) {
        //                 if (first != false) {
        //                     p.first += 1;
        //                 } else if (second != false) {
        //                     p.second += 1;
        //                 }
        //                 temp--;
        //             }
        //             else {
        //                 if (first != false) {
        //                     if (obstacles[j][0] != p.first + 1) {
        //                         p.first += 1;
        //                     } else {
        //                         break;
        //                     }
        //                 } else if (second != false) {
        //                     if (obstacles[j][1] != p.second + 1) {
        //                         p.second += 1;
        //                     } else {
        //                         break;
        //                     }
        //                 }
        //                 j++;
        //                 temp--;
        //             }
        //         }
        //     }
        // }
        // cout<<p.first;
        // return 0;
        unordered_set<string> obstacleSet;
        for (auto& obs : obstacles) {
            obstacleSet.insert(std::to_string(obs[0]) + "," +
                               std::to_string(obs[1]));
        }

        std::vector<std::pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir = 0;
        int x = 0, y = 0;
        int maxDistSq = 0;
        for (int command : commands) {
            if (command == -2) {
                dir = (dir + 3) % 4;
            } else if (command == -1) {
                dir = (dir + 1) % 4;
            } else {
                for (int i = 0; i < command; ++i) {
                    int nextX = x + directions[dir].first;
                    int nextY = y + directions[dir].second;
                    if (obstacleSet.find(std::to_string(nextX) + "," +
                                         std::to_string(nextY)) ==
                        obstacleSet.end()) {
                        x = nextX;
                        y = nextY;
                        maxDistSq = std::max(maxDistSq, x * x + y * y);
                    } else {
                        break;
                    }
                }
            }
        }
        return maxDistSq;
    }
};