#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f test.sh -o test 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[3]))
	"\226\253\274\300\017\141\210\112\255\356\115\276\056\004\104\033"
	"\247\210\213\266\076\104\005\167\310\174\155\026\007"
#define      date_z	1
#define      date	((&data[29]))
	"\056"
#define      lsto_z	1
#define      lsto	((&data[30]))
	"\221"
#define      tst1_z	22
#define      tst1	((&data[34]))
	"\236\240\375\250\336\245\152\121\361\101\010\217\075\365\121\022"
	"\360\212\312\255\023\256\110\230\042\224"
#define      inlo_z	3
#define      inlo	((&data[57]))
	"\165\061\234"
#define      opts_z	1
#define      opts	((&data[60]))
	"\073"
#define      msg1_z	65
#define      msg1	((&data[71]))
	"\271\261\223\333\021\310\145\073\232\010\306\163\015\127\101\023"
	"\003\264\120\265\254\366\304\111\022\177\124\044\250\255\360\343"
	"\143\010\160\211\011\216\360\375\215\071\014\254\341\132\150\206"
	"\054\074\241\314\046\321\153\315\361\371\255\076\276\254\176\221"
	"\071\326\013\363\105\204\147\315\073\367\221\126\363\165\302\017"
#define      msg2_z	19
#define      msg2	((&data[142]))
	"\050\046\313\242\016\052\317\251\334\325\225\137\222\335\103\051"
	"\142\120\167\202\171\111\023"
#define      xecc_z	15
#define      xecc	((&data[166]))
	"\030\040\244\161\014\223\324\264\344\177\004\357\340\300\052\356"
	"\347"
#define      shll_z	10
#define      shll	((&data[183]))
	"\342\302\306\276\262\245\175\322\267\143\216\131"
#define      rlax_z	1
#define      rlax	((&data[193]))
	"\263"
#define      text_z	516
#define      text	((&data[280]))
	"\173\277\360\345\260\143\140\036\246\142\267\013\255\032\016\342"
	"\223\021\047\357\164\106\361\005\017\372\122\222\154\242\132\367"
	"\026\212\155\001\250\045\126\255\207\150\043\331\137\264\344\223"
	"\027\044\346\102\005\224\360\202\146\041\102\377\165\040\175\162"
	"\364\137\156\336\032\162\243\216\200\272\043\374\161\334\072\032"
	"\347\220\103\070\234\101\013\016\035\114\127\020\277\277\102\316"
	"\312\303\010\240\326\363\140\202\334\141\251\212\331\160\304\367"
	"\151\274\140\346\242\163\214\346\373\077\137\225\112\057\320\166"
	"\300\346\144\207\260\254\321\061\322\003\026\234\364\322\106\261"
	"\220\227\113\032\306\175\037\117\034\355\272\361\315\210\166\167"
	"\047\251\266\067\304\077\325\205\133\205\305\202\340\236\325\367"
	"\106\276\311\277\051\300\071\132\147\165\226\037\256\234\326\260"
	"\207\056\203\101\025\370\016\156\152\032\214\015\207\302\005\176"
	"\023\236\231\071\276\107\324\321\352\065\327\144\113\270\270\136"
	"\164\014\010\337\326\241\123\070\132\113\063\043\046\236\143\147"
	"\163\076\240\110\014\007\043\372\204\012\066\133\223\015\334\307"
	"\362\031\376\243\263\125\051\071\042\012\152\132\170\222\337\341"
	"\002\006\221\206\343\377\043\031\043\062\024\253\004\174\263\171"
	"\156\057\142\154\347\315\045\323\374\375\040\057\146\063\247\051"
	"\223\171\370\140\231\052\015\162\111\276\013\366\061\304\367\224"
	"\307\276\270\301\201\212\301\071\354\271\160\350\100\300\251\317"
	"\032\056\314\021\121\136\277\155\274\116\000\120\256\122\370\102"
	"\206\045\310\340\103\167\242\266\012\223\160\243\223\015\022\061"
	"\137\166\130\212\045\366\303\324\136\365\375\317\241\040\246\036"
	"\366\272\067\233\227\061\163\377\164\103\262\354\310\052\170\072"
	"\132\363\037\164\056\275\255\202\225\005\236\343\160\222\116\252"
	"\327\124\305\214\275\006\211\226\371\067\356\150\325\160\374\123"
	"\362\322\157\224\002\113\246\200\013\145\011\043\136\307\347\224"
	"\012\324\007\332\045\207\240\027\102\354\277\227\124\052\067\165"
	"\075\044\075\253\252\023\312\072\306\073\124\143\153\127\047\001"
	"\327\151\317\062\252\247\001\017\106\066\063\355\306\052\361\017"
	"\113\305\075\153\222\044\075\076\107\273\026\001\205\274\362\361"
	"\352\206\167\276\173\314\372\215\076\327\311\020\307\016\054\244"
	"\266\037\241\243\073\371\024\325\335\357\031\011\366\375\207\025"
	"\014\163\262\113\010\163\021\203\277\341\023\175\301\221\357\275"
	"\006\236\055\150\173\044\271\133\304\051\056\011\133\361\167\227"
	"\245\000\372\056\261\350\166\152\032\366\343\212\173\170\017\023"
	"\164\230\371\271\116\156\026\145\367\315\277\037\162\251\257\001"
	"\011\273\247\327\020\240\216\234\246\211\000\240\127\105\120\034"
	"\254\177\231\333\213\236\102\154\342\242\027\142\114\156\020\256"
	"\056\024\357\165\076\314\216\275\171\126\216\277\036\260\040\231"
	"\150\350\302\000\375\176\116\122\220\112\240\360\136\337\127\073"
	"\270\135\115\137\270\327\216\307\174\022\175\220\121\327\311\075"
	"\207\337\302\213\226\307\107\257\275\364\024\301\067\355\004\154"
	"\056\245\121\254\321\077\225\017\273\370\330\002\037\027\131\000"
	"\240\066\233\100\062\077\311\000"
#define      tst2_z	19
#define      tst2	((&data[925]))
	"\012\363\164\301\223\257\100\160\164\367\046\220\173\131\306\247"
	"\054\021\243\246\266\255\254\251"
#define      chk2_z	19
#define      chk2	((&data[947]))
	"\144\003\026\240\030\100\050\270\020\070\233\016\246\321\246\235"
	"\205\213\031\330"
#define      pswd_z	256
#define      pswd	((&data[1011]))
	"\212\226\222\370\047\332\173\012\330\343\234\304\236\000\211\066"
	"\150\226\165\263\201\311\066\105\003\035\023\171\134\005\373\346"
	"\310\274\117\131\167\007\252\033\362\323\234\042\320\024\200\054"
	"\367\012\056\325\113\153\201\171\056\137\323\321\361\235\100\317"
	"\212\120\142\330\167\332\347\223\201\357\050\301\302\222\261\203"
	"\107\264\341\120\322\377\102\254\046\107\172\243\157\170\276\230"
	"\130\032\024\060\000\330\145\261\200\221\010\136\073\055\330\122"
	"\113\015\112\021\014\043\025\321\045\301\320\056\232\006\140\130"
	"\157\142\206\073\207\246\134\164\300\366\165\026\021\140\016\354"
	"\010\340\312\106\342\341\112\111\314\210\126\354\111\364\342\046"
	"\144\167\154\255\247\275\027\007\352\236\236\326\260\324\045\375"
	"\207\045\151\247\235\124\000\047\164\131\161\356\026\043\323\203"
	"\237\161\271\145\237\025\037\263\270\077\100\121\213\162\076\050"
	"\376\102\106\360\103\345\325\307\064\221\060\130\047\343\156\216"
	"\035\240\156\026\271\062\041\256\226\360\140\241\245\230\076\116"
	"\156\266\366\203\022\253\240\234\374\274\333\350\322\231\204\311"
	"\237\330\232\344\113\376\213\263\020\253\030\142\262\142\177\276"
	"\321\011\046\230\127\023\015\265\254\034\142\136\020\163\007\065"
	"\313\334\150\230\364\036\067\075\360\307\073\304\264\324\045\354"
	"\007\345\345\035\137\146\044\055\043\010\245\121\356\216\112\115"
	"\167\022\303\136\060\360\021\165\001\254\234\226\330\375\101\333"
	"\072\303\371\325\213\210\361\146\061\020\006\363\304\307\223\314"
	"\345\270\215\312\217\270\254\347"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */
#define MMAP2		0	/* Define as 1 to use syscall mmap2 */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
#if MMAP2
    Allow(mmap2),       /* also for malloc() */
#else
    Allow(mmap),        /* also for malloc() */
#endif
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
