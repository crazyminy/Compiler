

#include "scc.h"
int syntax_state;  //语法状态
int syntax_level;  //缩进级别
				   /***********************************************************
				   * 功能:	解析翻译单位
				   *
				   *  <translation_unit>::={external_declaration}<TK_EOF>
				   **********************************************************/
void translation_unit()
{
	while (token != TK_EOF)
	{
		//external_declaration(SC_GLOBAL);
	}
}

/***********************************************************
* 功能:	解析外部声明
* l:		存储类型，局部的还是全局的
*
* <external_declaration>::=<function_definition>|<declaration>
*
* <function_definition>::= <type_specifier> <declarator><funcbody>
*
* <declaration>::= <type_specifier><TK_SEMICOLON>
*		|<type_specifier>< init_declarator_list><TK_SEMICOLON>
*
* <init_declarator_list>::=
*      <init_declarator>{<TK_COMMA> <init_declarator>}
*
* <init_declarator>::=
*      <declarator>|<declarator> <TK_ASSIGN><initializer>
*
* 改写后文法：
* <external_declaration>::=
*  <type_specifier> (<TK_SEMICOLON>
*      |<declarator><funcbody>
*	    |<declarator>[<TK_ASSIGN><initializer>]
*	     {<TK_COMMA> <declarator>[<TK_ASSIGN><initializer>]}
*		 <TK_SEMICOLON>
**********************************************************/
