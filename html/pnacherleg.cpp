#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
using namespace std;
main(){
	cout<<"/p-nacherleg���򵥸����Խ���"<<endl; 
	string a,b;
	long long ot[100000],otcs,ots_sum;
	char ots_pa;
	int p=1;
	while(p){
		cout<<">>>";
		cin>>a;
		//cout<<endl;
		if(a=="help"){
			cout<<"<<<�������ʣ����Բ鿴nacherleg������ͣ��������ļ����ļ�"<<endl;
		}
		/*//�򵥵��������� ��
		if(a=="ot"){
			cout<<"�ڴ���������С���ó���7λ��������������ó���10000";
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
		//�ַ���
		string zfc;
			//swt��string word text����д 
		if(a=="swt") {
			cout<<"@swt@>>>";
			cin>>zfc;
			cout<<endl<<"<<<"<<zfc<<endl;
			
		}
		
		
		
		//��int����
		int int1[50000],intname;
		if(a=="int"){
			cout<<"int������С���ó���50000�������������ó���50000��int�������ƹ��򵥶���ѯ��inthelp��"<<endl<<"    >>>" ;
			cin>>intname;
			cout<<endl<<"������ֵ";
			cin>>int1[intname];
		}
		//�����int����
		int intdm;
		if(a=="swtint") {
			cout<<endl<<"�����������"<<endl<<"   >>>";
			cin>>intdm;
			cout<<"<<<"<<int1[intdm]<<endl;
		}
		
		
		
		
		//��double����
		int dname;
		double d1[500];
		if(a=="double"){
			cout<<"double���������С���ó���500�������������ó���500��double�������ƹ��򵥶���ѯ��doublehelp��"<<endl<<"    >>>" ;
			cin>>dname;
			cout<<endl<<"������ֵ";
			cin>>d1[dname];
		}
		//�����double����
		int ddm;
		if(a=="swtdouble") {
			cout<<endl<<"�����������"<<endl<<"   >>>";
			cin>>ddm;
			cout<<"<<<"<<d1[ddm]<<endl;
		}
		
		
		
		
		
		
		//��long����
		int lname;
		long l1[100000];
		if(a=="long"){
			cout<<"long������С���ó���100000�������������ó���100��long�������ƹ��򵥶���ѯ��longhelp��"<<endl<<"    >>>" ;
			cin>>lname;
			cout<<endl<<"������ֵ";
			cin>>l1[lname];
		}
		//�����long����
		int ldm;
		if(a=="swtlong") {
			cout<<endl<<"�����������"<<endl<<"   >>>";
			cin>>ldm;
			cout<<"<<<"<<l1[ldm]<<endl;
		}
		
		
		
		
		
		
		
		//��solong����
		int slname;
		long long sl1[100000];
		if(a=="solong"){
			cout<<"solong������С���ó���10000000�������������ó���100��solong�������ƹ��򵥶���ѯ��solonghelp��"<<endl<<"    >>>" ;
			cin>>slname;
			cout<<endl<<"������ֵ";
			cin>>sl1[slname];
		}
		//�����long long����
		int sldm;
		if(a=="swtsolong") {
			cout<<endl<<"�����������"<<endl<<"   >>>";
			cin>>sldm;
			cout<<"<<<"<<sl1[sldm]<<endl;
		}
		
		
		
		
		
		//��';'����';'����
		int fname;
		float f1[500];
		if(a=="';'����';'"){
			cout<<"���������С���ó���500�������������ó���500������������ƹ��򵥶���ѯ��floathelp��"<<endl<<"    >>>" ;
			cin>>fname;
			cout<<endl<<"������ֵ";
			cin>>f1[fname];
		}
		//�����';'����';'����
		int fdm;
		if(a=="swt';'����';'") {
			cout<<endl<<"�����������"<<endl<<"   >>>";
			cin>>fdm;
			cout<<"<<<"<<f1[fdm]<<endl;
		}
		
		
		//ע��
		//���벻��Ӧ�ַ������� 
		
		
		
		
		
		//��2����������
		long long a1,b1;
			//�ӷ�(not float two number plus)
			if(a=="nftwonp"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1+b1;
			}
			
			
			//����(not float two number subtraction)
			if(a=="nftwonsb"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1-b1;
			}
			
			
			//�˷�(not float two number multiplication)
			if(a=="nftwonml"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1*b1;
			}
			
			
			
			//����(not float two number division)
			if(a=="nftwondv"){
				cout<<endl;
				cin>>a1>>b1;
				cout<<a1/b1;
			}
			
			
			
			
		//��2��С������
		double a11,b11;
			//�ӷ�(float two number plus)
			if(a=="ftwonp"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11+b11;
			}
			
			
			//����(float two number subtraction)
			if(a=="ftwonsb"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11-b11;
			}
			
			
			//�˷�(float two number multiplication)
			if(a=="ftwonml"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11*b11;
			}
			
			
			
			//����(float two number division)
			if(a=="ftwondv"){
				cout<<endl;
				cin>>a11>>b11;
				cout<<a11/b11;
			}
			
			
			
			
			
			
			
			
		//��3����������
		long long c1;
			//�ӷ�(not float three   number plus)
			if(a=="nfthronp"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1+b1+c1;
			}
			
			
			//����(not float three number subtraction)
			if(a=="nfthnsb"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1-b1-c1;
			}
			
			
			//�˷�(not float three number multiplication)
			if(a=="nfthnml"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1*b1*c1;
			}
			
			
			
			//����(not float three number division)
			if(a=="nfthndv"){
				cout<<endl;
				cin>>a1>>b1>>c1;
				cout<<a1/b1/c1;
			}
			
			
			
			
		//��2��С������
		double c11;
			//�ӷ�(float three number plus)
			if(a=="fthnp"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11+b11;
			}
			
			
			//����(float three number subtraction)
			if(a=="fthnsb"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11-b11-c11;
			}
			
			
			//�˷�(float three number multiplication)
			if(a=="fthnml"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11*b11*c11;
			}
			
			
			
			//����(float three number division)
			if(a=="fthndv"){
				cout<<endl;
				cin>>a11>>b11>>c11;
				cout<<a11/b11/c11;
			}
			
		//һ����˵���Ӽ��˳�һ�㲻�ᳬ��2�Σ������䵽�⼴�� 
		
		
		
		
		
		//��������
			/*
			��Ϊ����������Դ�����ע�� 
			//�����˷� pow()
			long long x,y;
			if(a=="cmath:pow"){
				cin>>x,y;
				cout<<pow(x,y)<<endl;
			}
			
			
			//С�� 
			*/ 
			//����ֵ
				long long absx;
				double fabsx;
				//С������ֵ 
				if(a=="cmath:fabs"){
					cout<<"#fabs��ֵ#";
					cin>>fabsx;
					cout<<fabs(fabsx)<<endl;
					 
				}
				//��������ֵ 
				if(a=="cmath:abs"){
					cout<<"#abs��ֵ#";
					cin>>absx;
					cout<<abs(absx)<<endl;
					 
				}
				
		//������ģʽ	
		if(a=="������ģʽ"){
			string key;
			cout<<"key";
			cin>>key;
			if(key=="siyecao446291") {
				//���뿪����ģʽ 
			}else{
				cout<<"dong"; 
			} 
		}
					
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	 

	return 0;
 }

