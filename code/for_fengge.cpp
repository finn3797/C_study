#include <vector>
#include <iostream>
using namespace std;

vector<vector<vector<int>>> get_submatrix(int *mptr, int n, int m){
    vector<vector<vector<int>>> res;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            vector<vector<int>> eachsize_submatrix;
            for (int startrow = 0; startrow + i <= n; startrow++){
                for (int startcol = 0; startcol + j <= m; startcol++){
                    vector<int> temp;
                    for (int mrow = startrow; mrow < startrow + i; mrow++){
                        for (int mcol = startcol; mcol < startcol + j; mcol++){
                            temp.push_back(mptr[mrow * m + mcol]);
                        }
                    }
                    bool flag = true;
                    for (auto &x: eachsize_submatrix){
                        if (x == temp) flag = false;
                    } 
                    if (flag) eachsize_submatrix.push_back(temp);
                }
            }
            res.push_back(eachsize_submatrix);
        }
    }
    return res;
}

int main(){
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    int* mptr = matrix[0];
    for (int i = 0; i < n*m; i++){
        int temp;
        cin >> temp;
        mptr[i] = temp;
    }
    vector<vector<vector<int>>> res = get_submatrix(mptr, n, m);
    int res_size = 0;
    for (auto &x: res){
        res_size += x.size();
    }
    cout << res_size << endl;
}