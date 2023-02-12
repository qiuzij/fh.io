#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
using namespace std;
main(){
	cout<<"/p-nacherleg程序单个调试界面"<<endl; 
	string a,b;
	long long ot[100000],otcs,ots_sum;
	char ots_pa;
	int p=1;
	while(p){
		cout<<">>>";
		cin>>a;
		//cout<<endl;
		if(a=="help"){
			cout<<"<<<若有疑问，可以查看nacherleg程序解释，在下载文件中文件"<<endl;
		}
		/*//简单的四则运算 ：
		if(a=="ot"){
			cout<<"在此声明，大小不得超过7位数，运算次数不得超过10000";
			cin>> ots_pa >> otcs;
			if(ots_pa=='+'){
				for(int i=1;i<=otcs;i++){
					cin>>ot[i];
					ots_sum+=ot[i];
				}
				cout<<ots_sum-1;
				
			}else if(ots_pa=='-'){
				for(int i=1;i<=otcs;i++){
					cin>>ot[i];
					ots_sum-=ot[i];
				}
				cout<<ots_sum;
				
			}
		}
		*/
		//字符串
		string zfc;
			//swt是string word text的缩写 
		if(a=="swt") {
			cout<<"@swt@>>>";
			cin>>zfc;
			cout<<endl<<"<<<"<<zfc<<endl;
			
		}
		
		
		
		//简单int变量
		int int1[50000],intname;
		if(a=="int"){
			cout<<"int变量大小不得超过50000，声明次数不得超过50000，int变量名称规则单独查询“inthelp”"<<endl<<"    >>>" ;
			cin>>intname;
			cout<<endl<<"变量数值";
			cin>>int1[intname];
		}
		//简单输出int变量
		int intdm;
		if(a=="swtint") {
			cout<<endl<<"输入变量代码"<<endl<<"   >>>";
			cin>>intdm;
			cout<<"<<<"<<int1[intdm]<<endl;
		}
		
		
		
		
		//简单double变量
		int dname;
		double d1[500];
		if(a=="double"){
			cout<<"double浮点变量大小不得超过500，声明次数不得超过500，double变量名称规则单独查询“doublehelp”"<<endl<<"    >>>" ;
			cin>>dname;
			cout<<endl<<"变量数值";
			cin>>d1[dname];
		}
		//简单输出double变量
		int ddm;
		if(a=="swtdouble") {
			cout<<endl<<"输入变量代码"<<endl<<"   >>>";
			cin>>ddm;
			cout<<"<<<"<<d1[ddm]<<endl;
		}
		
		
		
		
		
		
		//简单long变量
		int lname;
		long l1[100000];
		if(a=="long"){
			cout<<"long变量大小不得超过100000，声明次数不得超过100，long变量名称规则单独查询“longhelp”"<<endl<<"    >>>" ;
			cin>>lname;
			cout<<endl<<"变量数值";
			cin>>l1[lname];
		}
		//简单输出long变量
		int ldm;
		if(a=="swtlong") {
			cout<<endl<<"输入变量代码"<<endl<<"   >>>";
			cin>>ldm;
			cout<<"<<<"<<l1[ldm]<<endl;
		}
		
		
		
		
		
		
		
		//简单solong变量
		int slname;
		long long sl1[100000];
		if(a=="solong"){
			cout<<"solong变量大小不得超过10000000，声明次数不得超过100，solong变量名称规则单独查询“solonghelp”"<<endl<<"    >>>" ;
			cin>>slname;
			cout<<endl<<"变量数值";
			cin>>sl1[slname];
		}
		//简单输出long long变量
		int sldm;
		if(a=="swtsolong") {
			cout<<endl<<"输入变量代码"<<endl<<"   >>>";
			cin>>sldm;
			cout<<"<<<"<<sl1[sldm]<<endl;
		}
		
		
		
		
		
		//简单';'浮点';'变量
		int fname;
		float f1[500];
		if(a=="';'浮点';'"){
			cout<<"浮点变量大小不得超过500，声明次数不得超过500，浮点变量名称规则单独查询“floathelp”"<<endl<<"    >>>" ;
			cin>>fname;
			cout<<endl<<"变量数值";
			cin>>f1[fname];
		}
		//简单输出';'浮点';'变量
		int fdm;
		if(a=="swt';'浮点';'") {
			cout<<endl<<"输入变量代码"<<endl<<"   >>>";
			cin>>fdm;
			cout<<"<<<"<<f1[fdm]<<endl;
		}
		
		
		//注释
		//输入不对应字符串即可 
		
		
		
		
		
		//简单2次整数计算
		long long a1,b1;
			//加法(not float two number plus)
			if(a=="nftwonp"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1+b1;
			}
			
			
			//减法(not float two number subtraction)
			if(a=="nftwonsb"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1-b1;
			}
			
			
			//乘法(not float two number multiplication)
			if(a=="nftwonml"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1*b1;
			}
			
			
			
			//除法(not float two number division)
			if(a=="nftwondv"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1/b1;
			}
			
			
			
			
		//简单2次小数计算
		double a11,b11;
			//加法(float two number plus)
			if(a=="ftwonp"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11+b11;
			}
			
			
			//减法(float two number subtraction)
			if(a=="ftwonsb"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11-b11;
			}
			
			
			//乘法(float two number multiplication)
			if(a=="ftwonml"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11*b11;
			}
			
			
			
			//除法(float two number division)
			if(a=="ftwondv"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11/b11;
			}
			
			
			
			
			
			
			
			
		//简单3次整数计算
		long long c1;
			//加法(not float three   number plus)
			if(a=="nfthronp"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1+b1+c1;
			}
			
			
			//减法(not float three number subtraction)
			if(a=="nfthnsb"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1-b1-c1;
			}
			
			
			//乘法(not float three number multiplication)
			if(a=="nfthnml"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1*b1*c1;
			}
			
			
			
			//除法(not float three number division)
			if(a=="nfthndv"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1/b1/c1;
			}
			
			
			
			
		//简单2次小数计算
		double c11;
			//加法(float three number plus)
			if(a=="fthnp"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11+b11;
			}
			
			
			//减法(float three number subtraction)
			if(a=="fthnsb"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11-b11-c11;
			}
			
			
			//乘法(float three number multiplication)
			if(a=="fthnml"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11*b11*c11;
			}
			
			
			
			//除法(float three number division)
			if(a=="fthndv"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11/b11/c11;
			}
			
		//一般来说，加减乘除一般不会超过2次，所以输到这即可 
		
		
		
		
		
		//初级函数
			/*
			因为程序错误，所以打上了注释 
			//整数乘方 pow()
			long long x,y;
			if(a=="cmath:pow"){
				cin>>x,y;
				cout<<pow(x,y)<<endl;
			}
			
			
			//小数 
			*/ 
			//绝对值
				long long absx;
				double fabsx;
				//小数绝对值 
				if(a=="cmath:fabs"){
					cout<<"#fabs数值#";
					cin>>fabsx;
					cout<<fabs(fabsx)<<endl;
					 
				}
				//整数绝对值 
				if(a=="cmath:abs"){
					cout<<"#abs数值#";
					cin>>absx;
					cout<<abs(absx)<<endl;
					 
				}
				
		//开发者模式	
		if(a=="开发者模式"){
			string key;
			cout<<"key";
			cin>>key;
			if(key=="siyecao446291") {
				//进入开发者模式 
			}else{
				cout<<"dong"; 
			} 
		}
					
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	 

	return 0;
 }

