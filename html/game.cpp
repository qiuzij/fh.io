#include<iostream> 
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<ctime>
using namespace std;
char play[9] = { '1','2','3','4','5','6','7','8','9' };
void system()
{
	system("color FD");
	system("date/t");
	system("time/t");
	system("title ������ Ver:1.0.0");
}
 
void CSH()
{
	cout << "######������С��Ϸ######" << endl;
	cout << "(*��Ϸ������������ѡ�����������ߣ�Ȼ���������ӣ���һ��������������һ�ߣ��÷�����ʤ)" << endl;
	cout << "+---+---+---+\n"
		    "| " << play[0] << " | " << play[1] << " | " << play[2] << " |\n"
		    "+---+---+---+\n"
	     	"| " << play[3] << " | " << play[4] << " | " << play[5] << " |\n"
	    	"+---+---+---+\n"
		    "| " << play[6] << " | " << play[7] << " | " << play[8] << " |\n"
		    "+---+---+---+\n"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
}
void return_CSH()
{
	memset(play,0,9);
	play[0] = '1';
	play[1] = '2';
	play[2] = '3';
	play[3] = '4';
	play[4] = '5';
	play[5] = '6';
	play[6] = '7';
	play[7] = '8';
	play[8] = '9';
}
class Player {
public:
	Player() {}
	void Name(int i)
	{
		cout << "��Ϊ���" << i << "����������ƣ�";
		cin >> name;
	}
	void Get_Name()
	{
		cout << name;
	}
	int Order()
	{
		cout << "����� " << name << " �����ӣ�";
		system("pause");
		srand((unsigned)time(NULL));
		a = rand() % 6 + 1;
		cout << a << endl;
		return a;
	}
	int PD()
	{
		return a;
	}
	void XQ_1()
	{
		cout << "******��Ϸ����******" << endl;
		cout << "   1.O        2.X   " << endl;
		cout << "����� " << name << " ѡ��ִʲô��(1 ���� 2)��";
		while (xq == 0)
		{
			cin >> xq;
			if (xq == 1)
				q1 = 'O';
			else if (xq == 2)
				q1 = 'X';
			else
				cout << "�����������������Ϸ�ѡ�";
		}
	}
	void XQ_2()
	{
		cout << "����� " << name << " ѡ��ִʲô��(1 ���� 2)��";
		while (xq == 0)
		{
			cin >> xq;
			if (xq == 1)
				q2 = 'O';
			else if (xq == 2)
				q2 = 'X';
			else
				cout << "�����������������Ϸ�ѡ�";
		}
	}
	void XS_Play()
	{
		int n;
		cout << "����� " << name << " ��������λ�ã�";
		cin >> n;
		if (play[n - 1] != 'O' && play[n - 1] != 'X'&&n<10)
		{
			play[n - 1] = q1;
		}
		else
		{
			cout << "λ�ò��Ϸ���������ѡ��";
			cin >> n;
			if (play[n - 1] != 'O' && play[n - 1] != 'X' && n < 10)
			{
				play[n - 1] = q1;
			}
			else
			{
				cout << "�Ҹо����ǹ����";
				exit(1);
			}
		}
		system("cls");
		cout << "+---+---+---+\n"
			    "| " << play[0] << " | " << play[1] << " | " << play[2] << " |\n"
			    "+---+---+---+\n"
			    "| " << play[3] << " | " << play[4] << " | " << play[5] << " |\n"
			    "+---+---+---+\n"
			    "| " << play[6] << " | " << play[7] << " | " << play[8] << " |\n"
			    "+---+---+---+\n";
	}
	void HS_Play()
	{
		int n;
		cout << "����� " << name << " ��������λ�ã�";
		cin >> n;
		if (play[n - 1] != 'O' && play[n - 1] != 'X' && n < 10)
		{
			play[n - 1] = q2;
		}
		else
		{
			cout << "λ�ò��Ϸ���������ѡ��";
			cin >> n;
			if (play[n - 1] != 'O' && play[n - 1] != 'X' && n < 10)
			{
				play[n - 1] = q2;
			}
			else
			{
				cout << "�����Ҳ��ǰɣ�";
				exit(1);
			}
		}
		system("cls");
		cout << "+---+---+---+\n"
			    "| " << play[0] << " | " << play[1] << " | " << play[2] << " |\n"
		     	"+---+---+---+\n"
			    "| " << play[3] << " | " << play[4] << " | " << play[5] << " |\n"
		     	"+---+---+---+\n"
		    	"| " << play[6] << " | " << play[7] << " | " << play[8] << " |\n"
		    	"+---+---+---+\n";
	}
	friend int Get_Q1(Player& p1);
	friend int Get_Q2(Player& p2);
private:
	string name;
	int a = 0;
	int xq = 0;
	char q1, q2;
};
 
 
int Get_Q1(Player& p1)
{
	return p1.q1;
}
int Get_Q2(Player& p2)
{
	return p2.q2;
}
 
int End()
{
	if (play[0] == play[1] && play[1] == play[2] && play[0] != ' ')
	{
		if (play[0] == 'X')
		{
			return 1;
		}
		if (play[0] == 'O')
		{
			return 2;
		}
	}
	if (play[3] == play[4] && play[4] == play[5] && play[3] != ' ')
	{
		if (play[3] == 'X')
		{
			return 1;
		}
		if (play[3] == 'O')
		{
			return 2;
		}
	}
	if (play[6] == play[7] && play[7] == play[8] && play[6] != ' ')
	{
		if (play[6] == 'X')
		{
			return 1;
		}
		if (play[6] == 'O')
		{
			return 2;
		}
	}
 
	if (play[0] == play[3] && play[3] == play[6] && play[0] != ' ')
	{
		if (play[0] == 'X')
		{
			return 1;
		}
		if (play[0] == 'O')
		{
			return 2;
		}
	}
	if (play[1] == play[4] && play[4] == play[7] && play[1] != ' ')
	{
		if (play[1] == 'X')
		{
			return 1;
		}
		if (play[1] == 'O')
		{
			return 2;
		}
	}
	if (play[2] == play[5] && play[5] == play[8] && play[2] != ' ')
	{
		if (play[1] == 'X')
		{
			return 1;
		}
		if (play[1] == 'O')
		{
			return 2;
		}
	}
	if (play[0] == play[4] && play[4] == play[8] && play[0] != ' ')
	{
		if (play[0] == 'X')
		{
			return 1;
		}
		if (play[0] == 'O')
		{
			return 2;
		}
	}
	if (play[2] == play[4] && play[4] == play[6] && play[2] != ' ')
	{
		if (play[2] == 'X')
		{
			return 1;
		}
		if (play[2] == 'O')
		{
			return 2;
		}
	}
	return 0;
}
 
int main()
{
	system();
	CSH();
	Player p1;
	Player p2;
	int xz;
	int j = 0;
	int xs = 0;
	p1.Name(1);
	p2.Name(2);
	while (xs == 0)
	{
		p1.Order();
		p2.Order();
		if (p1.PD() > p2.PD())
			cout << "\n��� ", p1.Get_Name(), cout << " ����\n" << endl, system("pause"), system("cls"), xs = 1;
		else if (p1.PD() < p2.PD())
			cout << "\n��� ", p2.Get_Name(), cout << " ����\n" << endl, system("pause"), system("cls"), xs = 2;
		else
			cout << "˫������һ������������������" << endl;
	}
	if (xs == 1)
	{
		p1.XQ_1(), p2.XQ_2();
	}
	else if (xs == 2)
	{
		p2.XQ_1(), p1.XQ_2();
	}
	CSH();
	while (j < 5)
	{
		if (xs == 1)
		{
			p1.XS_Play();
			End();
			if (End() != 0)
			{
				break;
			}
			p2.HS_Play();
			End();
			if (End() != 0)
			{
				break;
			}
		}
		if (xs == 2)
		{
			p2.XS_Play();
			End();
			if (End() != 0)
			{
				break;
			}
			p1.HS_Play();
			End();
			if (End() != 0)
			{
				break;
			}
		}
		j++;
	}
	system("cls");
	cout<<"******��Ϸ����******"<<endl;
	cout << "+---+---+---+\n"
		    "| " << play[0] << " | " << play[1] << " | " << play[2] << " |\n"
		    "+---+---+---+\n"
			"| " << play[3] << " | " << play[4] << " | " << play[5] << " |\n"
		    "+---+---+---+\n"
		    "| " << play[6] << " | " << play[7] << " | " << play[8] << " |\n"
		    "+---+---+---+\n";
	if (End() == 1)
	{
		if (Get_Q1(p1) == 'x')
			cout << "\n��� ", p1.Get_Name(), cout << " ���ʤ����"<<endl;
		else
			cout << "\n��� ", p2.Get_Name(), cout << " ���ʤ����"<<endl;
	}
	if (End() == 2)
	{
		if (Get_Q1(p1) == 'O')
			cout << "\n��� ", p1.Get_Name(), cout << " ���ʤ����"<<endl;
		else
			cout << "\n��� ", p2.Get_Name(), cout << " ���ʤ����"<<endl;
	}
	cout<<"------------------------------"<<endl; 
	cout<<"********�Ƿ������Ϸ��********"<<endl;
	cout<<"1.���¿�ʼ        2.�˳���Ϸ"<<endl;
	cin>>xz;
	switch(xz)
	{
		case 1:return_CSH(),main();break;
		case 2:return 0;break;
		default:cout<<"ָ�������Ϸ��ֹ��";break; 
	}
}
