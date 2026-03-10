class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> graph(n+1);

        for(auto& e : times){
            int u = e[0], v = e[1], w = e[2];
            graph[u].push_back({v,w});
        }

        const int INF = 1e9;
        vector<int> dist(n+1, INF);
        dist[k] = 0;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});

        while(!pq.empty()){
            auto [curtime, u] = pq.top();
            pq.pop();

            if(curtime > dist[u]) continue;

            for(auto& [v, w] : graph[u]){
                int newtime = curtime + w;

                if(newtime < dist[v]){
                    dist[v] = newtime;
                    pq.push({newtime, v});
                }
            }
            
        } 
        int ans = 0;
            for (int i = 1; i <= n; i++) {
                if (dist[i] == INF) return -1;
                ans = max(ans, dist[i]);
            }
        return ans;
    }
};
