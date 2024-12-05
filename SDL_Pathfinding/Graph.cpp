#include "Graph.h"

Graph::Graph(Grid grid)
{
	// iterar grid
	int cellsX = grid.getNumCellX();
	int cellsY = grid.getNumCellY();

	for (int i = 0; i < cellsX; i++)
		for (int j = 0; j < cellsY; j++)
			if (grid.isValidCell(Vector2D(i, j)))
				nodes.push_back(new Node(Vector2D(i, j)));

	// reiterar buscando neighbours
	for (auto& n : nodes) {}
}