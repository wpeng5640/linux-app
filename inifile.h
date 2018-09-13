/*
 ============================================================================
 Name        : inifile.h
 Author      : YuanHui
 Date        : 2014-10-06
 Copyright   : Shanghai Ceno&Reach Power Technology Co.,Ltd.
 Description : -size of the ini file must less than 16K
 -after '=' in key value pair, can not support empty char. this would not like WIN32 API
 -support comment using ';' prefix
 -can not support multi line
 ============================================================================
 */

#ifndef INI_FILE_H_
#define INI_FILE_H_

int read_inifile_string(const char *section, const char *key, char *value,
		int size, const char *default_value, const char *file);
int read_inifile_int(const char *section, const char *key, int default_value,
		const char *file);
int write_inifile_string(const char *section, const char *key,
		const char *value, const char *file);

#endif //end of INI_FILE_H_
