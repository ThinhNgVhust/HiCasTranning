#pragma once
class Node
{
private:
	int data;
	Node *next = nullptr;
public:
	Node();
	Node(int data);
	~Node();
};

