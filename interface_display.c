#include <stdio.h>

//登录主界面
void login_main_interface(void)
{
    printf("              XXX学校教务管理系统                    \n");
    printf("----------------------------------------------------\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                   1:学生                         |\n");
    printf("|                   2:教师                         |\n");
    printf("|                   3:校长                         |\n");
    printf("|                   4:退出                         |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("----------------------------------------------------\n");
}

//校长主界面
void principal_main_interface(void)
{
    printf("              XXX学校教务管理系统                    \n");
    printf("----------------------------------------------------\n");
    printf("欢迎，%s                                            \n",master.name);
    printf("----------------------------------------------------\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|              1:重置自己的密码                     |\n");
    printf("|              2:重置老师的密码                     |\n");
    printf("|              3:添加教师                           |\n");
    printf("|              4:删除教师                           |\n");
    printf("|              5:显示所有在职教师                   |\n");
    printf("|              6:显示所有离职教师                   |\n");
    printf("|              7:解锁老师的密码锁                   |\n");
    printf("|              8:退出                              |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("----------------------------------------------------\n");
}
