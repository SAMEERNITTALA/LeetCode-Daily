class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> graph;
        unordered_map<string, int> indegree;
        unordered_set<string> available(supplies.begin(), supplies.end());
        queue<string> q;
        vector<string> result;
        
        // Initialize graph and indegree count
        for (int i = 0; i < recipes.size(); i++) {
            for (const string& ing : ingredients[i]) {
                graph[ing].push_back(recipes[i]);
                indegree[recipes[i]]++;
            }
        }
        
        // Add initial supplies to the queue
        for (const string& s : supplies) {
            q.push(s);
        }
        
        // Process in topological order
        while (!q.empty()) {
            string item = q.front();
            q.pop();
            
            // If this is a recipe, add to the result
            if (find(recipes.begin(), recipes.end(), item) != recipes.end()) {
                result.push_back(item);
            }
            
            // Reduce the indegree of dependent recipes
            for (const string& recipe : graph[item]) {
                if (--indegree[recipe] == 0) {
                    q.push(recipe);
                }
            }
        }
        
        return result;
    }
};
