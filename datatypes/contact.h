#ifndef __CONTACT__H__
#define __CONTACT__H__

typedef struct contact_s {
    char name[140];
    char number[20];
    int year, month, day;
} contact_t;

#endif  //!__CONTACT__H__