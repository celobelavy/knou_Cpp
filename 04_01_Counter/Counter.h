#ifndef COUNTER_H_INCLUDED		//Counter.h�� �ߺ� include ���� �ʾҴ��� �˻�

#define COUNTER_H_INCLUDED		//Counter.h�� ó�� include �� �� ���ǵ�

class Counter {		//Ŭ���� Counter�� ���� ����
	int value;		//private �����͸ɹ�
public:				//public �ɹ��Լ�
	/*Counter()		//������
	{
		value = 0;
	}*/

	Counter() : value { 0 } { } //������

	void reset()	//������� ���� 0���� ����
	{
		value = 0;
	}
	void count()	//������� ���� 1 ������Ŵ
	{
		++value;
	}
	int getValue() const	//������� ���� ���� ��ȯ��
	{
		return value;
	}
};

#endif // COUNTER_H_INCLUDED