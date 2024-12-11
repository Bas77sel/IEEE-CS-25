#include <iostream>
#include <queue>

using namespace std;

const int max_n_m = 1000;
char grid[max_n_m][max_n_m];
bool visited[max_n_m][max_n_m];
int n, m;
int direction1 [] = {-1, 1, 0, 0};
int direction2 [] = {0, 0, -1, 1};

bool valid (int x, int y) {
    return x>=0&&x<n&&y>=0&&y<m&&grid[x][y]=='.'&&!visited[x][y];
}


void BFS(int row, int column) {
    queue<pair<int, int>> cell;
    cell.push(make_pair(row, column));
    visited[row][column] = true;

    while (!cell.empty()) {
        pair<int, int> current = cell.front();
        cell.pop();

        int d1 = current.first;
        int d2 = current.second;


        for (int i = 0; i < 4; i++) {
            int newd1 = d1 + direction1 [i];
            int newd2 = d2 + direction2 [i];
            if (valid(newd1, newd2)) {
                visited[newd1][newd2] = true;
                cell.push(make_pair(newd1, newd2));
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for(int j = 0 ; j<m ; j++)
        {
        cin >> grid[i][j];
        }    
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                BFS(i, j);
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
