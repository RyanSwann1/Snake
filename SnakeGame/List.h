#pragma once
#include <iostream>
#include <SFML/System/Vector2.hpp>

//Doubly linked list, so we need reference to previous and next node
struct Node
{
	friend class List;
	Node(sf::Vector2f _position, Node* _previousNode, Node* _nextNode) : m_position(_position), m_previousNode(_previousNode), m_nextNode(_nextNode){}

	bool IsNextNodeAvailable() const { return m_nextNode; }
	
	sf::Vector2f m_position;
	Node* m_previousNode;
	Node* m_nextNode;
};

class List
{
public:
	List();
	List(const sf::Vector2f _position);
	~List();
	void PopFront();
	void PushFront(const sf::Vector2f _segmentPosition);
	void PushBack(const sf::Vector2f _segmentPosition);
	void PopBack();
	void Clear() const;
	sf::Vector2f Front() const;
	sf::Vector2f Back() const;
	bool IsEmpty() const;
	int Size() const;

	friend std::ostream& operator<<(std::ostream& _os, List _list);	
	//Returns the front node
	Node* GetHead() const { return m_head; }
	//Returns the back node
	Node* GetTail() const { return m_tail; }

	
private:
	Node* m_head;
	Node* m_tail;
	int m_size{ 0 };
};
