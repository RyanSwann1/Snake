#pragma once
#include "Snake.h"
class AISnake : public Snake {
public:
	AISnake();
	void ChooseDirection();
	void Update() override;
	
private:
	//The front of the list is food the snake is going to move toward
	List m_foodList{};

	//Cycle through the food on the screen to find food
	void FindFood();

	//Finds the closest food to the snake and sets it as the food to move towards
	void FindClosestFood();

	//Finds the food with the highest point value and sets it as the food to move towards
	void FindHighestFood();
	
	//Checks if the food is in the same position as one of the segments of the snake
	bool IsOverlapping(sf::Vector2f _position) const;

	//Checks if there is a snake in the way to the food
	bool IsSnakeInWay() const;

	//Check if the snake's body is in the way
	//Returns the direction the body is in
	EDirection SelfInWay() const;
};
