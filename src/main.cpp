#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string line;
	getline(cin, line);

	if (line.npos != line.find('L') || line.npos != line.find('R'))
	{
		istringstream iss{ line };
		int h;
		string q;
		iss >> h >> q;

		auto ans = int{ 0 };
		const auto& n = q.length();
		for (int i = 0; i < n; ++i) {
			if ('L' == q[i]) {
				ans = (ans + 1) * 2 - 1;
			}
			else {
				ans = (ans + 1) * 2;
			}
		}

		const auto mx = (1 << (h + 1)) - 1;
		cout << mx - ans;
	}
	else {
		istringstream iss{ line };
		int h;
		iss >> h;

		cout << (1 << (h + 1)) - 1;
	}

	return 0;
}