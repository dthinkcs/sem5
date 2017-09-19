#include <stdio.h>
#include <stdlib.h>

// Define maximum number of vertices in the graph
#define N 6
struct Graph {
	struct Node* head[N];
};
struct Node {
	int dest, weight;
	struct Node* next;
};
struct Edge {
	int src, dest, weight;
};
struct Graph* createGraph(struct Edge edges[], int n)
{
	unsigned i;
	// allocate memory for graph data structure
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	// initialize head pointer for all vertices
	for (i = 0; i < N; i++)
		graph->head[i] = NULL;
	// add edges to the directed graph one by one
	for (i = 0; i < n; i++)
	{
		// get source and destination vertex
		int src = edges[i].src;
		int dest = edges[i].dest;
        int weight = edges[i].weight;
		// allocate new node of Adjacency List from src to dest
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->dest = dest;
		newNode->weight = weight;
		// point new node to current head
		newNode->next = graph->head[src];
		// point head pointer to new node
		graph->head[src] = newNode;
	}

	return graph;
}
void printGraph(struct Graph* graph)
{
	int i;
	for (i = 0; i < N; i++)
	{
		struct Node* ptr = graph->head[i];
		while (ptr != NULL)
		{
			printf("%d -> %d (%d)\t", i, ptr->dest, ptr->weight);
			ptr = ptr->next;
		}

		printf("\n");
	}
}
int main(void)
{
	struct Edge edges[] =
	{
		{ 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
		{ 3, 2, 10 }, { 4, 5, 1 }, { 5, 4, 3 }
	};
	int n = sizeof(edges)/sizeof(edges[0]);
	struct Graph *graph = createGraph(edges, n);
	printGraph(graph);
	return 0;
	int v, w, length=0;
	int path[6], reach[6];
	printf("enter source and destination vertices \n");
	scanf("%d",v);
	scanf("%d",w);
	printf(findpath(v, w, length, path, reach);
}

bool findpath(int v, int w,  int &length, int path[], int reach[]){
	reach[v] = 1;
	int u = Begin(v);
	while(u){
		if(!reach[u]){
			length++;
	path[length] = u;
	if(u==v)
		return true;
	if(findpath(u, w, length, path, reach))
		return true;
		length--;
		}
	u = nextVertex(v);
		}
	return false;
}






