#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//����ͬ�������
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculator() = 0;
};

class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ��������
	void Work()
	{
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ�������� �ͷ��������
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

//���峧��
//Intel����
class IntelCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Intel��CPU��ʼ����" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Lenovo��CPU��ʼ����" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};

class LenovoMemory :public Memory
{
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢" << endl;
	}
};

void Test1()
{
	//��һ̨�������
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelcard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	cout << "��һ̨���Կ�ʼ����" << endl;
	//������һ̨����
	Computer* computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->Work();
	delete computer1;

	cout << "---------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->Work();
	delete computer2;

	cout << "---------------------" << endl;
	cout << "����̨���Կ�ʼ����" << endl;
	//����̨������װ
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->Work();
	delete computer3;

}

int main()
{
	Test1();

	system("pause");
	return 0;
}