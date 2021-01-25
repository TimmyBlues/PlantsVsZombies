/**
 *Copyright (c) 2019 LZ.All Right Reserved
 *Author : LZ
 *Date: 2019.7.17
 *Modify: 2020.2.3
 *Email: 2117610943@qq.com
 */

#pragma once
#include "cocos2d.h"
#include "Based/LZBDialog.h"

using namespace ui;
using namespace cocos2d;
using namespace cocos2d::experimental;

class QuitMenu :public Dialog
{
public:
	CREATE_FUNC(QuitMenu);
	static int getSumRunTime();
	
CC_CONSTRUCTOR_ACCESS:
	QuitMenu():_quitDialog(nullptr){}
	virtual bool init();

private:
	void createDiglog();	/* �����Ի��� */
	void createButtons(const std::string& Label, Vec2& vec2, const int& ID);/* ������ť */
	void caveTime(const int time);
	virtual void deleteDialog() override;

private:
	Sprite* _quitDialog;    /* �Ի��� */
};