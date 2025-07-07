const char *home_dir ;
#define likely(x)      __builtin_expect(!!(x), 1)
#define unlikely(x)    __builtin_expect(!!(x), 0)

home_dir = getenv("HOME");
if (likely(home_dir)) 
	printf("home directory: %s\n", home_dir);
else
	perror("getenv");