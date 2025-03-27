
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int r, n, max1, max2, max3, ans1, ans2;
string a, b[55], tmp = "RSP";
int f(char x, char y){//计分函数
	if(x == y){//一样，所以是平局，得一分
		return 1;
	}
	if(x == 'R' && y == 'S'){//其他胜利的情况
		return 2;
	}
	if(x == 'P' && y == 'R'){ 
		return 2;
	}
	if(x == 'S' && y == 'P'){ 
		return 2;
	}
	return 0;//否则就是输了
}
int main(){
	// cin.tie(0);
	cin >> r >> a >> n;//输入
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = 0; i < r; i++){
		max1 = max2 = max3 = 0;//初始化
		for(int j = 0; j < n; j++){
			ans1 += f(a[i], b[j][i]);//模拟
			max1 += f('R', b[j][i]);//枚举出石头的情况
			max2 += f('S', b[j][i]);//枚举出剪刀的情况
			max3 += f('P', b[j][i]);//枚举出布的情况
		}
		ans2 += max(max1, max(max2, max3));//加上三者的最大值
	}
	cout << ans1 << endl << ans2;//输出
	return 0;//好习惯
}

