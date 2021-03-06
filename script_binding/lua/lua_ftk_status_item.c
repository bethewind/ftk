/*This file is generated by luagen.*/
#include "lua_ftk_status_item.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkStatusItem");
}

static int lua_ftk_status_item_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkStatusItem* retv;
	FtkWidget* parent;
	int pos;
	int width;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	parent = tolua_tousertype(L, 1, 0);
	pos = tolua_tonumber(L, 2, 0);
	width = tolua_tonumber(L, 3, 0);
	retv = ftk_status_item_create(parent, pos, width);
	tolua_pushusertype(L, (FtkStatusItem*)retv, "FtkStatusItem");

	return 1;
}

static int lua_ftk_status_item_set_position(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int pos;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	pos = tolua_tonumber(L, 2, 0);
	retv = ftk_status_item_set_position(thiz, pos);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_status_item_get_position(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_status_item_get_position(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_status_item_set_clicked_listener(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	char* listener;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	listener = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_status_item_set_clicked_listener(thiz, lua_ftk_listener_func, listener);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_status_item_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkStatusItem", "FtkStatusItem", "FtkWidget", NULL);
	tolua_beginmodule(L, "FtkStatusItem");
	tolua_function(L, "Create", lua_ftk_status_item_create);
	tolua_function(L, "SetPosition", lua_ftk_status_item_set_position);
	tolua_function(L, "GetPosition", lua_ftk_status_item_get_position);
	tolua_function(L, "SetClickedListener", lua_ftk_status_item_set_clicked_listener);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
