class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }

        const long long INF = 4e18;

        vector<vector<long long>> dist(n, vector<long long>(k + 1, INF));

        priority_queue<
            tuple<long long, int, int>,
            vector<tuple<long long, int, int>>,
            greater<tuple<long long, int, int>>
        > pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1}); // cost, node, streak

        while (!pq.empty()) {
            auto [d, u, streak] = pq.top();
            pq.pop();

            if (d != dist[u][streak]) continue;

            for (auto &[v, w] : adj[u]) {
                int newStreak;

                if (labels[u] == labels[v])
                    newStreak = streak + 1;
                else
                    newStreak = 1;

                if (newStreak > k) continue;

                long long nd = d + w;

                if (nd < dist[v][newStreak]) {
                    dist[v][newStreak] = nd;
                    pq.push({nd, v, newStreak});
                }
            }
        }

        long long ans = INF;
        for (int streak = 1; streak <= k; streak++) {
            ans = min(ans, dist[n - 1][streak]);
        }

        return ans == INF ? -1 : (int)ans;
    }
};