t = int(input())

for _ in range(t):
    n, m = map(int, input().strip().split(' '))
    edge_count = [0]*n
    edges = [[0]*n]*n
    for i in range(m):
        u, v = map(int, input().strip().split(' '))
        edge_count[u] += 1
        edge_count[v] += 1
        edges[u][v] = 1
        edges[v][u] = 1
    node_value = map(int, input().strip().split(' '))

    edge_count.sort(reverse=True)
    node_value.sort(reverse=True)

    g = 0
    for i in range()