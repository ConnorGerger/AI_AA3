#pragma once
#include "Vector2D.h"
#include <vector>


class Node
{
private:

	Vector2D coords;

	//comentar profe
	int m_weight = 0;

	std::vector<std::pair<Node*, int>> neighbours;

public:

	Node(Vector2D _coords) { coords = _coords; }

	Vector2D GetCoords() { return coords; }

	void addNeighbour(Node* node, int weight) { neighbours.push_back(std::make_pair(node, weight)); }

	// setters
	void setWeight(int w) { m_weight = w; }

	std::vector<std::pair<Node*, int>> GetNeighbours() { return neighbours; }
};