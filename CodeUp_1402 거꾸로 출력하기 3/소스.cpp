#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		s.push(input);
	}
	while (s.size())
	{
		cout << s.top() << ' ';
		s.pop();
	}
	return 0;
}