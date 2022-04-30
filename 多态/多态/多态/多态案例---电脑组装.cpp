#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//抽象不同的零件类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculator() = 0;
};

class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作函数
	void Work()
	{
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数 释放三个零件
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

//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Intel的CPU开始计算" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel的显卡开始显示了" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel的内存条开始存储" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Lenovo的CPU开始计算" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储" << endl;
	}
};

void Test1()
{
	//第一台电脑零件
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelcard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	cout << "第一台电脑开始工作" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->Work();
	delete computer1;

	cout << "---------------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->Work();
	delete computer2;

	cout << "---------------------" << endl;
	cout << "第三台电脑开始工作" << endl;
	//第三台电脑组装
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