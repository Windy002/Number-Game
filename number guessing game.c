#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void menu()
{ 
 printf("				******************************************\n");
 printf("				******              |               ******\n");
 printf("				******    [1]:Play  |  (0):Exit     ******\n");
 printf("				******              |               ******\n");
 printf("				******************************************\n");
 printf("				******************************************\n\n");	
}

void game()
{  int rd=0;//定义一个随机数 
   int guess=0;//接收你猜的一个数字 
//用时间戳来设置随机数的生成起点
//time_t time(time_t *time)
// time_t（长整形数） 
	rd=rand()%100+1;//某个大于0的数模一百后它的值就会在[0,99]，+1后-MAX=100 
	
  while(1)
  { 
    printf("   猜一个数字>:");
    scanf("%d",&guess);	
   if(guess>rd)
    {
    printf("  ====你猜大了\n\n");
    }
   else if(guess<rd) 
    {
    printf("  =====你猜小了\n\n"); 
    }
    else
    {
     printf("（^0^）_恭喜你，猜对了！\n\n"); break;
    }
  } 
}

int main() 
{  int input=0;
   srand((unsigned int)time(NULL));//rand函数的使用方法，（srand---用来调用rand函数，且里面的值是无符号长整形）以及利用时间戳生成随机值   NULL(空指针）不需要有意义 
   do
   { menu();//菜单函数（自定义），提供选择 
   	 printf("  -----请选择>:");
   	 scanf("%d",&input);
   	 switch(input)
   	  { case 1:
   	     game();//游戏函数（自定义），进入猜数字游戏 
   	     break;
   	    case 0:
   	   	 printf("  ---->退出游戏\n");
   	     break;
   	    default:              //防止输入错误 
   	   	 printf("  ---->选择错误\n");
   	   	 break;
	  }
	  
	} while(input);//只有输出正确才能运行 

	return 0;
}

