/*
 * This file is automatically generated by func_gen.c,don't edit
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lincon.h"
#include "linconhmi.h"
#include "userfunc.h"

#ifndef HMI_GEN_FUNC_FILE
static void widget_button_2_click(void);
static void widget_button_click(void);
static void widget_window_open(void);
static void widget_window_close(void);

hmi_widget_func_t hmi_window_77696E5F696E7075745F73656E645F746D_event_funcs[]={
{"button_2_click",(void *)widget_button_2_click},
{"button_click",(void *)widget_button_click},
{"window_open",(void *)widget_window_open},
{"window_close",(void *)widget_window_close},
{NULL,NULL}
};

static void widget_button_2_click(void)
{
	{
#line 1 "控件:button_2,事件:click"
hmi_window_hide("win_input_send_tm");
	}
{
}
}

static void widget_button_click(void)
{
	{
#line 1 "控件:button,事件:click"
//关闭本窗口，进入下一级窗口，提示输入手机号和选择箱子型号
hmi_window_hide("win_input_send_tm");
hmi_window_show("win_input_pnum_type");
	}
{
}
}

static void widget_window_open(void)
{
	u8 __hmi_var_22 = (*(u8 *)hmidb_get_data_value("sys_set.send_tm_enable_flag"));
	u8 __old___hmi_var_22 = __hmi_var_22;
	char * __hmi_var_23 = ((char *)hmidb_get_data_value("box_msg.send_id"));
		{
#line 1 "控件:window,事件:open"
__hmi_var_22 = 1;//允许读取条码值

memset(__hmi_var_23 , 0 , 25);

	}
{
		hmidb_set_data_value("box_msg.send_id",__hmi_var_23);
	if(__old___hmi_var_22 != __hmi_var_22)
	{
		hmidb_set_data_value("sys_set.send_tm_enable_flag",&__hmi_var_22);
	}
}
}

static void widget_window_close(void)
{
	u8 __hmi_var_24 = (*(u8 *)hmidb_get_data_value("sys_set.send_tm_enable_flag"));
	u8 __old___hmi_var_24 = __hmi_var_24;
	{
#line 1 "控件:window,事件:close"
__hmi_var_24 = 0;//禁止读取条码值
hmi_window_hide("TextKeyboard6");

	}
{
	if(__old___hmi_var_24 != __hmi_var_24)
	{
		hmidb_set_data_value("sys_set.send_tm_enable_flag",&__hmi_var_24);
	}
}
}

#endif
