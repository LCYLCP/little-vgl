#include "test.h"
uint32_t user_dat=1111;
lv_task_t* task1;
void task_cb(lv_task_t* task)
{
 static uint32_t cnt=0;
 cnt++;
 printf("cnt��ֵΪ��%d,my_date:%d\r\n",cnt,(uint32_t)task->user_dat);
}

lv_ly_1* ly1

void ly_cb(lv_ly_1* ly)
{
    static u32 cnt=0;
    cnt++;
    printf("cnt��ֵ��%d/r/n",cnt);
}

void test_Task()
{
    ly_1=lv_task_create(ly_cb,1000,LV_TASK_PRIO_MID,NULL);

}

void test_start()
{

    ly_1=lv_task_create(ly_cb,1000,LV_TASK_PRIO_MID,NULL);













    //��ȡ��ǰ����Ļ����
//    lv_obj_t * scr = lv_disp_get_scr_act(NULL);

    //����Ļ�ϴ���һ��label�ؼ�
//    lv_obj_t * label1 =  lv_label_create(scr, NULL);

    //����label���ı�����
 //   lv_label_set_text(label1, "I am xiong jia yu");

    //�����ı��͸��ؼ�(�����������Ļ)���ж���
 //   lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);
}
