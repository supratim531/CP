#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << '\n';
}

void print(vector<pair<int, int>> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << ' ' << v[i].second << '\n';
	cout << '\n';
}

void print(vector<vector<int>> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j) {
			cout << v[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main() {
	vector<int> v1 = {32, 65, 78, 3, -32, 10, 0, 97};
	print(v1);

	vector<pair<int, int>> vp1 = {{6, 2}, {4, 7}, {5, 1}};
	print(vp1);
	swap(vp1[0], vp1[1]);
	print(vp1);

	int n;
	cin >> n;
	vector<pair<int, int>> vp2;
	
	print(vp2);
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		vp2.push_back({x, y});
	}
	print(vp2);

	int N, M;
	cin >> N;
	vector<vector<int>> vv;
	for (int i = 0; i < N; ++i) {
		cin >> M;
		vector<int> temp;
		for (int j = 0; j < M; ++j) {
			int x;
			cin >> x;
			temp.push_back(x);
		}
		vv.push_back(temp);
	}

	vv[0].push_back(108);
	vector<int> empty;
	vv.push_back(empty);
	vv.push_back(vector<int>());
	swap(vv[1], vv[3]);
	swap(vv[3], vv[4]);
	print(vv);
	return 0;
}
