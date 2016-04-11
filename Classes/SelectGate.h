#ifndef SELECTGATE_H
#define SELECTAGTE_H

#include "cocos2d.h"

USING_NS_CC;


//ģ���ֲ�ͼƬѡ��˵�
class SelectGate : public Layer
{
public:
	CREATE_FUNC(SelectGate);

	void addMenuItem(MenuItem* item);

	void updatePosition();

	void updatePositionWithAnimation();

	//λ�ý�����������1/3����1�� trueΪ����
	void rectify(bool forward);

	virtual bool init();

	void reset();

	MenuItem* getCurrentItem();

private:
	void setIndex(int index);

	float getIndex();

	//��ѧ��ʽ width*index /(abs(index)+CALC_A)   ����CALC_AΪ����
	float calcFunction(float index, float width);


private:
	float _index;

	float _lastIndex;

	Vector<MenuItem*> _items;

	virtual bool onTouchBegan(Touch* touch, Event* event);
	virtual void onTouchEnded(Touch* touch, Event* event);
	virtual void onTouchMoved(Touch* touch, Event* event);

	//ȷ���ĸ��˵�����ǰ��
	void actionEndCallBack(float dx);

	MenuItem* _selectedItem;
};




#endif //SELECTGATE_H