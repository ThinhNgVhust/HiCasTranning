#pragma once
#include"Node.h"
class LinkedList
{
private:
	Node* head = nullptr;

public:
	void Add(Node& node);
	void Insert(Node& node);
	bool Remove();
	LinkedList();
	~LinkedList();
};

