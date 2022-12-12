class Solution {
public:
    string pushDominoes(string dominoes) {
        queue<pair<int, char>> q;
        for(int i = 0; i <dominoes.size(); i++) {
            if(dominoes[i] != '.') 
                q.push({i, dominoes[i]});
        }
        
        while(!q.empty()) {
            int i = q.front().first;
            int d = q.front().second;
            
            q.pop();
            if(d == 'L') {
                if(i > 0 && dominoes[i - 1] == '.') {
                    dominoes[i-1] = 'L';
                    q.push({i-1, 'L'});
                }
            }
            else {
                if(i + 1 < dominoes.size() && dominoes[i + 1] == '.') {
                    if(i + 2 < dominoes.size() && dominoes[i + 2] == 'L') {
                        q.pop();
                    }
                    else {
                        q.push({i + 1, 'R'});
                        dominoes[i + 1] = 'R';
                    }
                }
            }
        }
        return dominoes;
        
    }
};