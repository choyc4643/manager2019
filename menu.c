#include "menu.h"

int ask_menu(void){
    #ifdef DEBUG_MODE
     printf("DEBUG>> datafile opened! \\n");

    #endif
// 파라미터 : 로그인여부 (0 No, 1Yes)
// 리턴값 : 선택한 메뉴번호
// 메뉴번호 : 1. Sign up 2. Log in 3. Log out 0. Exit
  int menu=0;
  char comm[15];
//    if(is_login == 0)
//	printf("Choose menu : 1234");
//    else
//	printf("Choose menu : 2134");
//
//   scanf("%d", &menu);


    printf("> ");
    scanf("%s",comm);  
    if(strcmp(comm , "join") == 0)
	menu = 1;
    else if(strcmp(comm, "login")==0)
	menu = 2;
    else if(strcmp(comm ,"list")==0)
	menu = 3;
    else if(strcmp(comm , "exit")==0)
	menu = 4;

  return menu;
}
