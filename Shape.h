#pragma once
//�߻� Ŭ����
class FShape
{
public:
	FShape();
	virtual ~FShape();

	//���� ���� �Լ�
	//�ڽ� Ŭ�������� ������ ���� �ض�, �� Ŭ���� �ν��Ͻ� ����, ������
	virtual void Draw() = 0;
};

