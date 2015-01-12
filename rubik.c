#include <stdio.h>

char macro[1005];
int cube[55];

void rotate4(int a, int b, int c, int d)
{
	int temp = cube[a];
	cube[a] = cube[d];
	cube[d] = cube[c];
	cube[c] = cube[b];
	cube[b] = temp;
}

/* Front Face */
void fanti()
{
	rotate4(3, 1, 7, 9); rotate4(2, 4, 8, 6);
	rotate4(52, 18, 39, 19); rotate4(53, 15, 38, 22); rotate4(54, 12, 37, 25);
}

void f180()
{
	fanti(); fanti();
}

void f()
{
	fanti(); fanti(); fanti();
}


/* Upper Face */
void uanti()
{
	rotate4(46, 52, 54, 48); rotate4(47, 49, 53, 51);
	rotate4(30, 12, 3, 21); rotate4(29, 11, 2, 20); rotate4(28, 10, 1, 19);
}

void u180()
{
	uanti(); uanti();
}

void u()
{
	uanti(); uanti(); uanti();
}

/* Left Face */
void lanti()
{
	rotate4(10, 16, 18, 12); rotate4(11, 13, 17, 15);
	rotate4(46, 36, 37, 1); rotate4(49, 33, 40, 4); rotate4(52, 30, 43, 7);
}

void l180()
{
	lanti(); lanti();
}

void l()
{
	lanti(); lanti(); lanti();
}

/* Down Face */
void danti()
{
	rotate4(37, 43, 45, 39); rotate4(38, 40, 44, 42);
	rotate4(7, 16, 34, 25); rotate4(8, 17, 35, 26); rotate4(9, 18, 36, 27);
}

void d180()
{
	danti(); danti();
}

void d()
{
	danti(); danti(); danti();
}

/* Right Face */
void ranti()
{
	rotate4(19, 25, 27, 21); rotate4(20, 22, 26, 24);
	rotate4(54, 9, 45, 28); rotate4(51, 6, 42, 31); rotate4(48, 3, 39, 34);
}

void r180()
{
	ranti(); ranti();
}

void r()
{
	ranti(); ranti(); ranti();
}

/* Back Face */
void banti()
{
	rotate4(28, 34, 36, 30); rotate4(29, 31, 35, 33);
	rotate4(48, 27, 43, 10); rotate4(47, 24, 44, 13); rotate4(46, 21, 45, 16);
}

void b180()
{
	banti(); banti();
}

void b()
{
	banti(); banti(); banti();
}

long long int gcd(long long int a, long long int b)
{
	if (a < b)
	return gcd(b, a);
	else if (b == 0)
	return a;
	else return gcd(b, a % b);
}

long long int lcm(long long int ways, long long int n)
{
	return (ways / gcd(ways, n)) * n;
}

long long int getsizeofgroup()
{
	int i, len, start, pointer, tmp;
	long long int ways = 1;
	
	for (i = 1; i < 55; i++) {
		len = 1;
		start = i;
		pointer = cube[i];
		while (pointer != start) {
			pointer = cube[pointer];
			len++;
		}
		ways = lcm(ways, len);
	}
}

long long int sizeofgroup()
{
	int i = 0;
	
	while (macro[i]) {
		switch (macro[i]) {
			case 'U' :
			if (macro[i + 1] == '2')
			u180();
			else if (macro[i + 1] == '\'')
			uanti();
			else u();
			break;
			case 'D' :
			if (macro[i + 1] == '2')
			d180();
			else if (macro[i + 1] == '\'')
			danti();
			else d();
			break;
			case 'L' :
			if (macro[i + 1] == '2')
			l180();
			else if (macro[i + 1] == '\'')
			lanti();
			else l();
			break;
			case 'R' :
			if (macro[i + 1] == '2')
			r180();
			else if (macro[i + 1] == '\'')
			ranti();
			else r();
			break;
			case 'F' :
			if (macro[i + 1] == '2')
			f180();
			else if (macro[i + 1] == '\'')
			fanti();
			else f();
			break;
			case 'B' :
			if (macro[i + 1] == '2')
			b180();
			else if (macro[i + 1] == '\'')
			banti();
			else b();
			break;
		}
		i++;
	}
	
	return getsizeofgroup();
}

int main()
{
	int testcases, i;
	long long int moves;
	
	scanf("%d", &testcases);
	
	while (testcases--) {
		scanf("%s", macro);
		
		for (i = 0; i < 55; i++)
		cube[i] = i;
		
		moves = sizeofgroup();
		printf("%lld\n", moves);
	}
	return 0;
}
