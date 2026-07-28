class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        // Build graph
        for (const auto &it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }

        // Compute indegree
        for (int i = 0; i < numCourses; i++) {
            for (int v : adj[i]) {
                indegree[v]++;
            }
        }

        queue<int> q;

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        vector<int> topo;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            topo.push_back(node);

            for (int v : adj[node]) {
                indegree[v]--;

                if (indegree[v] == 0)
                    q.push(v);
            }
        }

        return topo.size() == numCourses;
    }
};