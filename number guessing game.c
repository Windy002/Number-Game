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
{  int rd=0;//����һ������� 
   int guess=0;//������µ�һ������ 
//��ʱ�����������������������
//time_t time(time_t *time)
// time_t������������ 
	rd=rand()%100+1;//ĳ������0����ģһ�ٺ�����ֵ�ͻ���[0,99]��+1��-MAX=100 
	
  while(1)
  { 
    printf("   ��һ������>:");
    scanf("%d",&guess);	
   if(guess>rd)
    {
    printf("  ====��´���\n\n");
    }
   else if(guess<rd) 
    {
    printf("  =====���С��\n\n"); 
    }
    else
    {
     printf("��^0^��_��ϲ�㣬�¶��ˣ�\n\n"); break;
    }
  } 
}

int main() 
{  int input=0;
   srand((unsigned int)time(NULL));//rand������ʹ�÷�������srand---��������rand�������������ֵ���޷��ų����Σ��Լ�����ʱ����������ֵ   NULL(��ָ�룩����Ҫ������ 
   do
   { menu();//�˵��������Զ��壩���ṩѡ�� 
   	 printf("  -----��ѡ��>:");
   	 scanf("%d",&input);
   	 switch(input)
   	  { case 1:
   	     game();//��Ϸ�������Զ��壩�������������Ϸ 
   	     break;
   	    case 0:
   	   	 printf("  ---->�˳���Ϸ\n");
   	     break;
   	    default:              //��ֹ������� 
   	   	 printf("  ---->ѡ�����\n");
   	   	 break;
	  }
	  
	} while(input);//ֻ�������ȷ�������� 

	return 0;
}

