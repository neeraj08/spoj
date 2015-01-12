#include <stdio.h>
#include <string.h>

#define MAXN 100010
#define MAXQ 200010

struct Edge {
	int v;
	Edge *link;
}edge[MAXN * 2], *adj[MAXN];

struct Query {
	int v, num;
	Query *link;
}query[MAXQ * 2], *adjQuery[MAXN];

int fa[MAXN], up[MAXN], com[MAXQ][4], c[MAXN], totE, totQ;
bool solved[MAXQ], used[MAXN];

void addEdge(int u, int v) {
	Edge *p = &edge[totE++];
	p->v = v; p->link = adj[u]; adj[u] = p;
}

void addQuery(int u, int v, int num) {
	Query *q = &query[totQ++];
	q->v = v; q->num = num; q->link = adjQuery[u]; adjQuery[u] = q;
}

int findset(int u) {
	int v = u;
	while(u != fa[u]) u = fa[u];
	while(fa[v] != u) {
		int t = fa[v];
		fa[v] = u;
		v = t;
	}
	return u;
}

void dfs(int u, int pre) {
	used[u] = true;
	Edge *p = adj[u];
	while(p) {
		if(!used[p->v]) {
			dfs(p->v, u);
		}
		p = p->link;
	}
	Query *q = adjQuery[u];
	while(q) {
		if(!solved[q->num] && used[q->v]) {
			solved[q->num] = true;
			com[q->num][3] = findset(q->v);
		}
		q = q->link;
	}
	if(u != 0) {
		fa[u] = pre;
		up[u] = pre;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n - 1; ++i) {
		int u, v;
		scanf("%d%d", &u, &v);
		addEdge(u, v);
		addEdge(v, u);
	}
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; ++i) {
		scanf("%d%d%d", &com[i][0], &com[i][1], &com[i][2]);
		if(com[i][0] == 2) {
			addQuery(com[i][1], com[i][2], i);
			addQuery(com[i][2], com[i][1], i);
		}
	}
	for(int i = 0; i < n; ++i) fa[i] = i;
	dfs(0, -1);
	for(int i = 0; i < n; ++i) {
		fa[i] = i;
		c[i] = -1;
	}
	for(int i = 0; i < q; ++i) {
		if(com[i][0] == 1) {
			c[com[i][1]] = com[i][2];
		}
		else {
			int lca = findset(com[i][3]);
			bool flag = true;
			int u = findset(com[i][1]), v = findset(com[i][2]);
			while(flag && u != lca && c[u] != -1) {
				int preU = findset(up[u]);
				if(c[u] == c[preU]) {
					fa[u] = preU;
					u = preU;
				}
				else flag = false;
			}
			if(c[u] == -1) flag = false;
			while(flag && v != lca && c[v] != -1) {
				int preV = findset(up[v]);
				if(c[v] == c[preV]) {
					fa[v] = preV;
					v = preV;
				}
				else flag = false;
			}
			if(c[v] == -1) flag = false;
			if(flag) puts("YES");
			else puts("NO");
		}
	}
	return 0;
}
