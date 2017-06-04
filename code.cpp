#include<iostream>
#include<algorithm>
using namespace std;

#define M 9

int main()
{
	int input[M];
	int i;
	int a, b;
	int ret = 0;
	a = 0;
	b = M - 1;

	for (i = 0; i < M; i++)
	{
		scanf("%i", &input[i]);
		ret += input[i];
	}

	sort(input, input+M);

	while (1)
	{
		if (ret - input[a] - input[b] == 100) break;
		else if (ret - input[a] - input[b] > 100) a++;
		else b--;
	}

	for (i = 0; i < M; i++)
	{
		if (i != a && i != b) printf("%i\n", input[i]);
	}
}
