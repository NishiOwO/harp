/* $Id$ */

/*
    <head> 開始タグ
    文字
    </head> ...
    <body> ... 
    文字
    </body>. ..
*/

%{
int yylex();
int yyerror(const char*);
%}

%union {
}

%token TEXT NOSPACE_TEXT DELIM SYMBOL
%start list

%%

list        :   part
            |   list part;

part        :   tag
            |   text
            |   SYMBOL;
    
tag         :   starttag
            |   endtag;

text        :   TEXT
            |   NOSPACE_TEXT
            |   DELIM;

starttag    :   '<' NOSPACE_TEXT '>'
            |   '<' NOSPACE_TEXT attr_list '>';

attr_list   :   attr
            |   attr_list DELIM attr;

attr        :   NOSPACE_TEXT
            |   NOSPACE_TEXT '=' NOSPACE_TEXT;

endtag  :   '<' '/' NOSPACE_TEXT '>';

%%