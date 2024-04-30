// whatday.c 根据泰勒公式推算日期对应的星期
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

// 根据日期推算星期
int whatday(int year,int mon,int day)
{
    int m = mon;
    int d = day;
    // 根据月份对年份和月份进行调整
    if(m <= 2)
    {
        year -= 1;
        m += 12;
    }
    int c = year / 100; // 取得年份前两位
    int y = year % 100; // 取得年份后两位
     
    // 根据泰勒公式计算星期
    int w = (int)(c/4) - 2*c + y + (int)(y/4)
        + (int)(13*(m+1)/5) + d - 1;
 
    return w%7; // 返回星期
}
  
// 将数字转换成字符串 
char* convertday(int w,char* str)
{
    if(w<0 || w>6 || NULL == str)
        return NULL;
  
    char* days[7];
    days[0] = "Sunday";
    days[1] = "Monday";
    days[2] = "Tuesday";
    days[3] = "Wednesday";
    days[4] = "Thursday";
    days[5] = "Friday";
    days[6] = "Saturday";
 
    // 转换
    strcpy(str,days[w]);
    return str;
}
int main(int argc,char* argv[])
{
    // 检查参数
    if(argc != 1 && argc != 4)
    {
        puts("usage: whatday or whatday 2013 1 28");
        return 1;
    }
     
    int year = 0;
    int mon = 0;
    int day = 0;
   
    // 根据不同参数，获取日期
    if(1 == argc)
    {
        // 如果只有一个参数，以当前日期作为查询日期
        time_t t = time(NULL);
        struct tm* cur = localtime(&t);
    
        year = cur->tm_year + 1900;    // 年份
        mon = cur->tm_mon + 1;    // 月份
        day = cur->tm_mday;        // 日期    
    }
    else if(4 == argc)
    {
       // 将参数转换成日期
        year = atoi(argv[1]);
        mon = atoi(argv[2]);
        day = atoi(argv[3]);
    }
    else
    {
        puts("usage: whatday.exe 1981 9 22");
        return 1;
    }    
 
    // 根据日期计算星期
    int w = whatday(year,mon,day);
    // w 有可能是负数，转换为正
    if(w < 0)
    {
        w += 7;
    }
     
    char daystr[16] = "";
 
    // 将数字表示的星期转换为字符串
    if(NULL != convertday(w,daystr))
    {
        // 输出推算结果
        printf("%d-%d-%d is %s.",year,mon,day,daystr);
    }
     
    return 0;
}