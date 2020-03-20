#pragma once
namespace Constants {
	const int k_screenHeight{ 600 };
	
	const int k_screenWidth{ 800 };
	
	const int k_snakeBlockSize{ 20 };
	
	const int k_snakeSegmentDistance{ 5 };
	
	const int k_foodBlockSize{ 9 };
	
	const int k_gridSize{ k_snakeBlockSize + k_snakeSegmentDistance };

	const int k_standardGrowAmount{ 1 };
	const int k_specialGrowAmount{ 3 };
	const int k_gobbleGrowAmount{ 5 };

	const int k_AISnakeAmount{ 5 };
	const int k_foodAmount{ 5 };
}