#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ifstream f("tema.in");
	int n, m;
	f >> n >> m;
	int uz[n+1];
	memset(uz, 0, sizeof(uz));
	while (m > 0)
	{
		int x;
		f >> x;
		uz[x] = 1;
		m--;
	}
	f.close();
	ofstream g("tema.out");
	for (int i = 1; i <= n; i++)
		if (!uz[i])
			g << i << ' ';
	g.close();
	return 0;
}

