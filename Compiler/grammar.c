

#include "scc.h"
int syntax_state;  //�﷨״̬
int syntax_level;  //��������
				   /***********************************************************
				   * ����:	�������뵥λ
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
* ����:	�����ⲿ����
* l:		�洢���ͣ��ֲ��Ļ���ȫ�ֵ�
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
* ��д���ķ���
* <external_declaration>::=
*  <type_specifier> (<TK_SEMICOLON>
*      |<declarator><funcbody>
*	    |<declarator>[<TK_ASSIGN><initializer>]
*	     {<TK_COMMA> <declarator>[<TK_ASSIGN><initializer>]}
*		 <TK_SEMICOLON>
**********************************************************/
