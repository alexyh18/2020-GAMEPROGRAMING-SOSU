#pragma once
#include"���.h"
#define DataMgr DataManager::instance()
class DataManager
{
private:
	string name = "�÷��̾�";
	int level = 37;
	int exp = 100000;
public:
	DataManager() {

	}
	static DataManager* instance() {
		static DataManager inst;
		return &inst;
	}
	int getLevel() {
		return level;
	}
};

