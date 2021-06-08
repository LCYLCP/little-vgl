#include "test.h"
uint32_t user_dat=1111;
lv_task_t* task1;
void task_cb(lv_task_t* task)
{
 static uint32_t cnt=0;
 cnt++;
 printf("cnt的值为：%d,my_date:%d\r\n",cnt,(uint32_t)task->user_dat);
}

lv_ly_1* ly1

void ly_cb(lv_ly_1* ly)
{
    static u32 cnt=0;
    cnt++;
    printf("cnt的值：%d/r/n",cnt);
}

void test_Task()
{
    ly_1=lv_task_create(ly_cb,1000,LV_TASK_PRIO_MID,NULL);

}

void test_start()
{

    ly_1=lv_task_create(ly_cb,1000,LV_TASK_PRIO_MID,NULL);













    //获取当前的屏幕对象
//    lv_obj_t * scr = lv_disp_get_scr_act(NULL);

    //在屏幕上创建一个label控件
//    lv_obj_t * label1 =  lv_label_create(scr, NULL);

    //设置label的文本内容
 //   lv_label_set_text(label1, "I am xiong jia yu");

    //设置文本和父控件(在这里就是屏幕)居中对齐
 //   lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);
}
