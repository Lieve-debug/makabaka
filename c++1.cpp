#include<iostream>
#include<string.h>
using namespace std;
struct STRING
{
    char *str;//�ַ�ָ��ָ���ַ���
    int ct;//�ַ����ĳ���
};
//���庯�� set   show
void set(STRING &str,char pstr[])//��Ӻ�������
{
    int i=0;
    for(;pstr[i];i++);
    str.ct=i;
    str.str=new char[i];
    for(i=0;i<str.ct;i++)
    {
        str.str[i]=pstr[i];
    }
    //��Ҫ��3 �������
}
void show(STRING &str,int x=-1) //���������ִ�д���
{
    int i,l;
    if(x==-1)
    {
        l=strlen(str.str);
    }
    else l=3;
    for(i=0;i<l;i++)
    {
        cout<<str.str[i];
    }
    cout<<endl;
}
void show(char str[],int x=-1) //���������ִ�д���
{
    int i,l;
    if(x==-1)
    {
        l=strlen(str);
    }
    else l=3;
    for(i=0;i<l;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
}
int main()
{
    STRING str;
    char str_1[]="hello world";
    set(str,str_1);//ע��(1)��һ������������
    //(2)����ռ��STRING��str��3����str_1�е����ݸ��Ƶ�str��
    //��4������ct=�ַ�����С
    show(str);//���str�ַ���
    show(str,3);//���strǰ�����ַ�
    show(str_1);//���str_1
    show(str_1,3);//���str_1ǰ�����ַ�
    show("finished");
    return 0;
}
