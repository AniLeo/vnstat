#ifndef MISC_H
#define MISC_H

#define UNITPREFIXCOUNT 7

typedef enum RequestType {
	RT_Normal = 1,
	RT_Estimate,
	RT_ImageScale
} RequestType;

int spacecheck(const char *path);
void sighandler(int sig);
uint64_t getbtime(void);
char *getvalue(const uint64_t bytes, const int len, const RequestType type);
int getunitspacing(const int len, const int index);
char *gettrafficrate(const uint64_t bytes, const time_t interval, const int len);
const char *getunitprefix(const int index);
const char *getrateunitprefix(const int unitmode, const int index);
uint64_t getunitdivisor(const int unitmode, const int index);
int getunit(void);
char *getratestring(const uint64_t rate, const int len, const int declen);
int getratespacing(const int len, const int unitmode, const int unitindex);
int getpadding(const int len, const char *str);
void cursortocolumn(const int column);
void cursorhide(void);
void cursorshow(void);
void eraseline(void);
int validatedatetime(const char *str);

#endif
