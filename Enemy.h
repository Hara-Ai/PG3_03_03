#pragma once

class Enemy
{
public:
	void approach();

private:
	void(Enemy::* pFunc)();
	
};