class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // make adjacency list (nodes from 1 to N)
        vector<vector<pair<int,int>>> graph(n + 1);
        // table is used to store time it takes from node k (our signal node) to other nodes 
        vector<int> table(n + 1, INT_MAX);
        // starts from K as suggested by the problem
        // this just initialises k to 0
        table[k] = 0;
        // this for loop makes the graph we are using 
        for (auto vec : times) {
            // our values the questions wants us to have, ie: times = [[ui, vi, wi]]
            int u = vec[0], v = vec[1], w = vec[2];
            // this makes the paur for each ui value
            //       u->pairs(v, w)
            // ie: [[2, 1, 1]
            //      [2, 3, 1]
            //      [3, 4, 1]]
            graph[u].push_back(make_pair(v, w));
        }
        // then we make a pq due to its usage with graph problems, allowing us to sort (in non increasing order), based off of our time from k
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        // our pair in the priority queue
        pq.push(make_pair(0, k));
        
        // this now follows a similar BFS approach 
        // whilst our pq is not empty
        while (!pq.empty()) {
            int curr_dist = pq.top().first;
            int curr_node = pq.top().second;
            pq.pop();

            // this for loop is checking our times and updating them if they are better than the current computed time, finding the shortest time
            for (int i = 0; i < graph[curr_node].size(); i++) {
                int next_node = graph[curr_node][i].first;
                int next_weight = graph[curr_node][i].second;  

                // this is the check if its larger than current computed time, based on the conditional execution we add it to the pq or not 
                if (table[next_node] > table[curr_node] + next_weight) {
                    table[next_node] = table[curr_node] + next_weight;
                    pq.push(make_pair(table[next_node], next_node));
                }              
            }
        }
        // our return value 
        int result = 0;

        // iterate with i = 1 as thats what the problem says 
        // and check if there is unvisited node and the maximum result for our question

        for (int i = 1; i <= n; i++) {
            // as we init our values to infinity we check and if its is infinity it means that there is an unvisited node, therefore we return -1;
            if (table[i] == INT_MAX) {
                return -1;
            }
            // check if its greater than 0
            else if (table[i] > result) {
                // if it is and passes the first check we update result
                result = table[i];
            }
        }
        return result;        
    }
};