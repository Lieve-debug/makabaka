#include<iostream>
#include<string.h>
using namespace std;
struct STRING
{
    char *str;//字符指针指向字符串
    int ct;//字符串的长度
};
//定义函数 set   show
void set(STRING &str,char pstr[])//添加函数参数
{
    int i=0;
    for(;pstr[i];i++);
    str.ct=i;
    str.str=new char[i];
    for(i=0;i<str.ct;i++)
    {
        str.str[i]=pstr[i];
    }
    //按要求3 补充代码
}
void show(STRING &str,int x=-1) //补充参数和执行代码
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
void show(char str[],int x=-1) //补充参数和执行代码
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
    set(str,str_1);//注意(1)第一个参数是引用
    //(2)分配空间给STRING中str（3）把str_1中的数据复制到str中
    //（4）计算ct=字符串大小
    show(str);//输出str字符串
    show(str,3);//输出str前三个字符
    show(str_1);//输出str_1
    show(str_1,3);//输出str_1前三个字符
    show("finished");
    return 0;
}
