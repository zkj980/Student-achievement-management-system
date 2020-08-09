#include "interface_display.h"
#include <getch.h>
int main()
{
	for(;;)
    	{
        	system("clear");
        	login_main_interface();
        	switch(getch())
        	{
			case '1':stu_dent();break;//学生
			case '2':Tch_Function();break;//老师
			case '3':mas_ter();break;//校长
			case '4':upxx();return 0;//退出
        	}    
    	}
    return 0;
}
