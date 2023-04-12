#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<time.h>
#include<pwd.h>
#include<grp.h>


int main(int argc , char* argv[]){
	struct stat file_stat;
	struct passwd *pw;

	struct group *gr;

	char* filename;

	filename = argv[1];

	printf("%c",S_ISDIR(file_stat.st_mode) ? 'd' :'-');

	printf("%c%c%c%c%c%c%c%c%c",
		file_stat.st_mode & S_IRUSR ? 'r' : '-',
		file_stat.st_mode & S_IWUSR ? 'w' : '-',
		file_stat.st_mode & S_IXUSR ? 'x' : '-',
		file_stat.st_mode & S_IRGRP ? 'r' : '-',
		file_stat.st_mode & S_IWGRP ? 'w' : '-',
		file_stat.st_mode & S_IXGRP ? 'x' : '-',
		file_stat.st_mode & S_IROTH ? 'r' : '-',
		file_stat.st_mode & S_IWOTH ? 'w' : '-',
		file_stat.st_mode & S_IXOTH ? 'x' : '-'
	);

	printf("%ld ",(long)file_stat.st_nlink);

	if((pw = getpwuid(file_stat.st_uid))!= NULL){
		printf("%s ",pw->pw_name);
	}else {
		printf("%d ",file_stat.st_uid);
	}

	if( ( gr = getgrgid(file_stat.st_gid) ) != NULL ){
		printf("%s ",gr->gr_name);
	}else {
		printf("%d ", file_stat.st_gid);
	}

	printf("%5ld ",(long)file_stat.st_size);

	printf("%s",filename);
	
	return 0;
}
