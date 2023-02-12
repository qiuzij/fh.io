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
	system("title 井字棋 Ver:1.0.0");
}
 
void CSH()
{
	cout << "######井字棋小游戏######" << endl;
	cout << "(*游戏规则：先掷骰子选出优先下子者，然后轮流下子，任一方若有三子连成一线，该方即获胜)" << endl;
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
		cout << "请为玩家" << i << "设置玩家名称：";
		cin >> name;
	}
	void Get_Name()
	{
		cout << name;
	}
	int Order()
	{
		cout << "请玩家 " << name << " 掷骰子：";
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
		cout << "******游戏设置******" << endl;
		cout << "   1.O        2.X   " << endl;
		cout << "请玩家 " << name << " 选择执什么棋(1 或者 2)：";
		while (xq == 0)
		{
			cin >> xq;
			if (xq == 1)
				q1 = 'O';
			else if (xq == 2)
				q1 = 'X';
			else
				cout << "命令错误！请重新输入合法选项：";
		}
	}
	void XQ_2()
	{
		cout << "请玩家 " << name << " 选择执什么棋(1 或者 2)：";
		while (xq == 0)
		{
			cin >> xq;
			if (xq == 1)
				q2 = 'O';
			else if (xq == 2)
				q2 = 'X';
			else
				cout << "命令错误！请重新输入合法选项：";
		}
	}
	void XS_Play()
	{
		int n;
		cout << "请玩家 " << name << " 输入下棋位置：";
		cin >> n;
		if (play[n - 1] != 'O' && play[n - 1] != 'X'&&n<10)
		{
			play[n - 1] = q1;
		}
		else
		{
			cout << "位置不合法！请重新选择：";
			cin >> n;
			if (play[n - 1] != 'O' && play[n - 1] != 'X' && n < 10)
			{
				play[n - 1] = q1;
			}
			else
			{
				cout << "我感觉你是故意的";
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
		cout << "请玩家 " << name << " 输入下棋位置：";
		cin >> n;
		if (play[n - 1] != 'O' && play[n - 1] != 'X' && n < 10)
		{
			play[n - 1] = q2;
		}
		else
		{
			cout << "位置不合法！请重新选择：";
			cin >> n;
			if (play[n - 1] != 'O' && play[n - 1] != 'X' && n < 10)
			{
				play[n - 1] = q2;
			}
			else
			{
				cout << "你又找茬是吧？";
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
			cout << "\n玩家 ", p1.Get_Name(), cout << " 先手\n" << endl, system("pause"), system("cls"), xs = 1;
		else if (p1.PD() < p2.PD())
			cout << "\n玩家 ", p2.Get_Name(), cout << " 先手\n" << endl, system("pause"), system("cls"), xs = 2;
		else
			cout << "双方点数一样大，请重新掷点数：" << endl;
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
	cout<<"******游戏结束******"<<endl;
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
			cout << "\n玩家 ", p1.Get_Name(), cout << " 获得胜利！"<<endl;
		else
			cout << "\n玩家 ", p2.Get_Name(), cout << " 获得胜利！"<<endl;
	}
	if (End() == 2)
	{
		if (Get_Q1(p1) == 'O')
			cout << "\n玩家 ", p1.Get_Name(), cout << " 获得胜利！"<<endl;
		else
			cout << "\n玩家 ", p2.Get_Name(), cout << " 获得胜利！"<<endl;
	}
	cout<<"------------------------------"<<endl; 
	cout<<"********是否继续游戏？********"<<endl;
	cout<<"1.重新开始        2.退出游戏"<<endl;
	cin>>xz;
	switch(xz)
	{
		case 1:return_CSH(),main();break;
		case 2:return 0;break;
		default:cout<<"指令错误，游戏终止！";break; 
	}
}
