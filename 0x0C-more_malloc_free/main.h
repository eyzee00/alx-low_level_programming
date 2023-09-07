#ifndef __MAIN__H__
#define __MAIN__H__
	
	void *malloc_checked(unsigned int b);
	char *string_nconcat(char *s1, char *s2, unsigned int n);
	void *_calloc(unsigned int nmemb, unsigned int size);
	int *array_range(int min, int max);
	void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
	int is_digit(char *string);
	void init_string(char *string, unsigned int length);
	int _strlen(char *string);
	void reverse(char *string, int length);
	void _puts(char *string);
	char *zero_purge(char *string, int length);
	char *zero_scanner(char *string, int length);
	char *infinite_mul(char *str1, char *str2, int str1_len, int str2_len);

#endif
