#pragma once


#include "header.h"

// 세션 엔티티 클래스
class Session
{
private:
	std::string currentUserId; // 현재 로그인한 사용자 id
	bool isConnected; // 현재 로그인한 사용자가 존재하는지
public:
	Session(); // 생성자
	void connect(std::string userId); // 로그인 연결
	std::string disconnect(); // 로그아웃
	std::string getCurrentUserId(); // 현재 사용자 id 반환
};