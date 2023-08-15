#pragma once
#ifndef TEAMI_H
#define TEAMI_H
#include <Status.h>
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <ctime>
#include <Member.h>
#include <Board.h>

using namespace std;

class TeamI {

public:
	virtual string getName() = 0;
	virtual void setName(string name) = 0;
	virtual list<MemberI*> getMembers() = 0;
	virtual list<BoardI*> getBoards() = 0;
	virtual void addBoard(BoardI* board) = 0;
	virtual void removeBoard(string board) = 0;
	virtual BoardI* findBoard(string name) = 0;
	virtual void addMember(MemberI* member) = 0;
	virtual void removeMember(string member) = 0;
	virtual MemberI* findMember(string name) = 0;
	virtual string printMembers() = 0;
	virtual string printBoards() = 0;
	virtual string toString() = 0;
	virtual string viewInfo() = 0;
};
#endif