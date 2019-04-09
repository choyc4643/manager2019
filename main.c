#include "user.h"
#include "menu.h"

int main(int argc, char* argv[]) {
    #ifdef DEBUG_MODE
     printf("DEBUG>> datafile opened! \\n");

    #endif
  LOGIN* userlist[100]; // 사용자목록 포인터 배열 (최대 100)
  int is_login=0; // 로그인 여부 (0 NO, 1 Yes)
  int menu_id;
  char echo[30];
  if (argc != 2) {
    printf("Usage : manager <datafile>\n");
    return 0;
  }
  int count = load_file(userlist, argv[1]);
 

  while(1){
      
    if(is_login==0 || is_login==-1){
    menu_id = ask_menu();
    // 현재 로그인 되었는지의 여부를 파라미터로 알려야 한다.
    
    if(menu_id==1) {join(userlist, count); count++;}
    else if (menu_id==2) is_login = login(userlist, count);
    else if (menu_id==3) list_file(userlist, count);
    else if (menu_id==4) {save_file(userlist, count, argv[1]); return 0;}
    else printf("No such command!\n");
   
    continue;
    
  
    }
    else {
	while(1){
	    printf("# ");
	    gets(echo);
	    if(strcmp(echo, "logout")==0){
		logout(&is_login);
		break;
	    }
	    printf("%s\n",echo);
	}
    }
	
  }
}
