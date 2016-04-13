#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "cocos2d.h"
USING_NS_CC;

class Hero;

class GameMap : public Node
{
public:
	GameMap();
	~GameMap();

	void InitMap(const char* map_name1, const char* map_name2, const char* map_name3);
	void MoveMap(Hero* hero);
	bool JudgeMap(Hero* hero);//�жϵ�ͼ�Ƿ��ڱ�Ե

	CREATE_FUNC(GameMap);

private:
	Sprite* m_map1;
	Sprite* m_map2;
	Sprite* m_map3;
	ParallaxNode* parallax;
};

#endif // GAMEMAP_H