#pragma once
//추상 클래스
class FShape
{
public:
	FShape();
	virtual ~FShape();

	//순수 가상 함수
	//자식 클래스에서 무조건 구현 해라, 이 클래스 인스턴스 못됨, 포인터
	virtual void Draw() = 0;
};

