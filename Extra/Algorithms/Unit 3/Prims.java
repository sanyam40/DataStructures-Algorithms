// A Java program for Prim's Minimum Spanning Tree (Prims)
// algorithm. The program is for adjacency matrix
// representation of the graph

class Prims {

	// Number of vertices in the graph
	private static final int V = 5;

	// A utility function to find the vertex with minimum
	// key value, from the set of vertices not yet included
	// in Prims
	int minKey(int key[], Boolean PrimsSet[])
	{
		// Initialize min value
		int min = Integer.MAX_VALUE, min_index = -1;

		for (int v = 0; v < V; v++)
			if (PrimsSet[v] == false && key[v] < min) {
				min = key[v];
				min_index = v;
			}

		return min_index;
	}

	// A utility function to print the constructed Prims
	// stored in parent[]
	void printPrims(int parent[], int graph[][])
	{
		System.out.println("Edge \tWeight");
		for (int i = 1; i < V; i++)
			System.out.println(parent[i] + " - " + i + "\t"
							+ graph[i][parent[i]]);
	}

	// Function to construct and print Prims for a graph
	// represented using adjacency matrix representation
	void primPrims(int graph[][])
	{
		// Array to store constructed Prims
		int parent[] = new int[V];

		// Key values used to pick minimum weight edge in
		// cut
		int key[] = new int[V];

		// To represent set of vertices included in Prims
		Boolean PrimsSet[] = new Boolean[V];

		// Initialize all keys as INFINITE
		for (int i = 0; i < V; i++) {
			key[i] = Integer.MAX_VALUE;
			PrimsSet[i] = false;
		}

		// Always include first 1st vertex in Prims.
		// Make key 0 so that this vertex is
		// picked as first vertex
		key[0] = 0;
	
		// First node is always root of Prims
		parent[0] = -1;

		// The Prims will have V vertices
		for (int count = 0; count < V - 1; count++) {
			
			// Pick the minimum key vertex from the set of
			// vertices not yet included in Prims
			int u = minKey(key, PrimsSet);

			// Add the picked vertex to the Prims Set
			PrimsSet[u] = true;

			// Update key value and parent index of the
			// adjacent vertices of the picked vertex.
			// Consider only those vertices which are not
			// yet included in Prims
			for (int v = 0; v < V; v++)

				// graph[u][v] is non zero only for adjacent
				// vertices of m PrimsSet[v] is false for
				// vertices not yet included in Prims Update
				// the key only if graph[u][v] is smaller
				// than key[v]
				if (graph[u][v] != 0 && PrimsSet[v] == false
					&& graph[u][v] < key[v]) {
					parent[v] = u;
					key[v] = graph[u][v];
				}
		}

		// Print the constructed Prims
		printPrims(parent, graph);
	}

	public static void main(String[] args)
	{
		Prims t = new Prims();
		int graph[][] = new int[][] { { 0, 2, 0, 6, 0 },
									{ 2, 0, 3, 8, 5 },
									{ 0, 3, 0, 0, 7 },
									{ 6, 8, 0, 0, 9 },
									{ 0, 5, 7, 9, 0 } };

		// Print the solution
		t.primPrims(graph);
	}
}

// This code is contributed by Aakash Hasija
