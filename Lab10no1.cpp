#include<stdio.h>
#include<string.h>

typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[17];
	char nameSurname[25];
	account stdACC;
} hoststd;
int checkLogin(char *user,char *passwd,hoststd cs);
int main(){
	hoststd cs[5] = {
					{"66-040626-2686-9","MR.A",{"user1", "passwd1"}},
					{"66-040626-1234-8","MR.B",{"user2", "passwd2"}},
					{"66-040626-1010-7","MR.C",{"user3", "passwd3"}},
					{"66-040626-2569-6","MR.D",{"user4", "passwd4"}},
					{"66-040626-2112-6","MR.E",{"user5", "passwd5"}}
				};

	char user[64],password[64];
	int checked = 0;
	printf("Enter Username: "); gets(user);
	printf("Enter Password: "); gets(password);
	for(int i=0;i<5;i++){
		if(checkLogin(user,password,cs[i])){
			checked = 1; break;
		}	
	}
	if(checked) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
}

int checkLogin(char *user,char *passwd,hoststd cs){
	if(strcmp(user, cs.stdACC.loginname) && strcmp(passwd, cs.stdACC.password)){
		return 1;
		}
	else{
		return 0;
	}
}
