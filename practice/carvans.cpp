// https://www.codechef.com/LRNDSA01/problems/CARVANS

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n, ans = 1;
	cin >> n;
	std::vector<int> cars_speed(n);
	for (auto &car_speed : cars_speed)
		cin >> car_speed;
	if (cars_speed.size() == 1) cout << ans << '\n';
	else {
		int min_speed = cars_speed[0];
		for (int i = 1; i < cars_speed.size(); ++i) {
			if (cars_speed[i] <= min_speed) {
				min_speed = cars_speed[i];
				ans++;
			}
		}
		cout << ans << '\n';
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
